#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#undef new
#define new(struct_t) ({\
    struct struct_t *tmp = calloc(1, sizeof(struct struct_t));\
    if (!tmp) abort();\
    tmp;\
})

#define Map(type) map_##type
#define MapFunc(type, func, ...) map_##type##_##func(__VA_ARGS__)

#define DefineMap(type, tformat)\
\
typedef struct map_##type {\
    int key;\
    type value;\
    struct map_##type *prev;\
    struct map_##type *next;\
    struct map_##type *end;\
} *map_##type;\
\
map_##type map_##type##_newmap();\
map_##type map_##type##find_key(map_##type m, int key);\
type map_##type##_get(map_##type m, int key, bool *found);\
bool map_##type##_set(map_##type m, int key, type val);\
bool map_##type##_del(map_##type m, int key);\
void map_##type##_print(map_##type m);\
void map_##type##_free(map_##type *m);\
\
map_##type map_##type##_newmap()\
{\
    map_##type m = new(map_##type);\
    m->key = 0;\
    m->value = 0;\
    m->prev = NULL;\
    m->next = NULL;\
    m->end = m;\
    return m;\
}\
\
map_##type map_##type##_find_key(map_##type m, int key)\
{\
    if (!m) abort();\
    map_##type p = m->next;\
    while (p != NULL) {\
        if (p->key == key) return p;\
        p = p->next;\
    }\
    return NULL;\
}\
\
type map_##type##_get(map_##type m, int key, bool *found)\
{\
    if (!m) abort();\
    map_##type node = map_##type##_find_key(m, key);\
    if (!node) {\
        *found = false;\
        return 0;\
    }\
    *found = true;\
    return node->value;\
}\
\
bool map_##type##_set(map_##type m, int key, type val)\
{\
    if (!m) abort();\
    map_##type node = map_##type##_find_key(m, key);\
    if (node) {\
        node->value = val;\
    } else {\
        node = new(map_##type);\
        node->key = key;\
        node->value = val;\
        node->prev = m->end;\
        node->next = NULL;\
        node->end = NULL;\
        if (m->end) m->end->next = node;\
        else m->next = node;\
        m->end = node;\
    }\
    return true;\
}\
\
bool map_##type##_del(map_##type m, int key)\
{\
    if (!m) abort();\
    map_##type node = map_##type##_find_key(m, key);\
    if (!node) return false;\
    map_##type tmp = node;\
    node = node->prev;\
    node->next = tmp->next;\
    tmp->next->prev = node;\
    free(tmp);\
    return true;\
    \
}\
\
void map_##type##_print(map_##type m)\
{\
    if (!m) abort();\
    map_##type p = m->next;\
    printf("{\n");\
    while (p != NULL) {\
        printf("    %d => " tformat, p->key, p->value);\
        printf("\n");\
        p = p->next;\
    }\
    printf("}\n");\
}\
\
void map_##type##_free(map_##type *m)\
{\
    if (!*m) abort();\
    map_##type p = *m;\
    while (p != NULL) {\
        map_##type tmp = p;\
        p = p->next;\
        free(tmp);\
    }\
    *m = NULL;\
}\
