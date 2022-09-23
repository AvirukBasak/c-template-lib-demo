#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#undef new
#undef delete

/**
 * new function: returns a pointer to a struct type passed by allocating
 * memory using calloc
 */
#define new(struct_t) ({                                                              \
    struct struct_t *tmp = calloc(1, sizeof(struct struct_t));                        \
    if (!tmp) abort();                                                                \
    tmp;                                                                              \
})

/**
 * delete function: frees pointer and sets it to null
 */
#define delete(ptr) ({                                                                \
    if (ptr) {                                                                        \
        free(ptr);                                                                    \
        ptr = NULL;                                                                   \
    }                                                                                 \
})

#define BstMap(vtype) bst_map_##vtype
#define BstMapFunc(vtype, func, ...) bst_map_##vtype##_##func(__VA_ARGS__)

/**
 * Generates function prototype definitions and typedefs for the map
 */
#define MapDeclarePrototypes(vtype)                                                   \
                                                                                      \
typedef struct bst_map_##vtype {                                                      \
    unsigned long int key;                                                            \
    vtype value;                                                                      \
    struct bst_map_##vtype *parent;                                                   \
    struct bst_map_##vtype *left;                                                     \
    struct bst_map_##vtype *right;                                                    \
} *bst_map_##vtype;                                                                   \
                                                                                      \
bst_map_##vtype bst_map_##vtype##_newmap();                                           \
unsigned long int bst_map_##vtype##_hashString(const char *strkey);                   \
bst_map_##vtype bst_map_##vtype##_findKey(bst_map_##vtype m, unsigned long int key);  \
vtype bst_map_##vtype##_get(bst_map_##vtype m, unsigned long int key, bool *found);   \
bool bst_map_##vtype##_set(bst_map_##vtype m, unsigned long int key, vtype val);      \
bool bst_map_##vtype##_del(bst_map_##vtype m, unsigned long int key);                 \
void bst_map_##vtype##_print(bst_map_##vtype m);                                      \
void bst_map_##vtype##_free(bst_map_##vtype *m);

/**
 * Defines the chosen map from template: generates the necessary function definitions
 * NOTE: requires MapDeclarePrototypes(vtype, vformat)
 */
#define MapDefine(vtype, vformat)                                                     \
                                                                                      \
bst_map_##vtype bst_map_##vtype##_newmap()                                            \
{                                                                                     \
    bst_map_##vtype m = new(bst_map_##vtype);                                         \
    m->key = 0;                                                                       \
    m->value = 0;                                                                     \
    m->parent = NULL;                                                                 \
    m->left = NULL;                                                                   \
    m->right = m;                                                                     \
    return m;                                                                         \
}                                                                                     \
                                                                                      \
unsigned long int bst_map_##vtype##_hashString(const char *strkey)                    \
{                                                                                     \
    unsigned long int hash = 0;                                                       \
    size_t i, len = strlen(strkey);                                                   \
    for (i = 0; i < len; i++) {                                                       \
        hash = hash * 2 + (strkey[i] ^ hash);                                         \
    }                                                                                 \
    return hash;                                                                      \
}                                                                                     \
                                                                                      \
bst_map_##vtype bst_map_##vtype##_findKey(bst_map_##vtype m, unsigned long int key)   \
{                                                                                     \
    if (!m) abort();                                                                  \
    bst_map_##vtype p = m;                                                            \
    while (p != NULL)                                                                 \
        if (key == p->key) return p;                                                  \
        else if (key < p->key) p = p->left;                                           \
        else p = p->right;                                                            \
    return NULL;                                                                      \
}                                                                                     \
                                                                                      \
vtype bst_map_##vtype##_get(bst_map_##vtype m, unsigned long int key, bool *found)    \
{                                                                                     \
    if (!m) abort();                                                                  \
    bst_map_##vtype node = bst_map_##vtype##_findKey(m, key);                         \
    if (!node) {                                                                      \
        *found = false;                                                               \
        return 0;                                                                     \
    }                                                                                 \
    *found = true;                                                                    \
    return node->value;                                                               \
}                                                                                     \
                                                                                      \
bool bst_map_##vtype##_set(bst_map_##vtype m, unsigned long int key, vtype val)       \
{                                                                                     \
    if (!m) abort();                                                                  \
    bst_map_##vtype node = bst_map_##vtype##_findKey(m, key);                         \
    if (node) {                                                                       \
        node->value = val;                                                            \
    } else {                                                                          \
        node = new(bst_map_##vtype);                                                  \
        node->key = key;                                                              \
        node->value = val;                                                            \
        bst_map_##vtype p = m;                                                        \
        while (p->left != NULL && p->right != NULL)                                   \
            if (key < p->key) p = p->left;                                            \
            else p = p->right;                                                        \
        if (key < p->key) p->left = node;                                             \
        else p->right = node;                                                         \
        node->parent = p;                                                             \
    }                                                                                 \
    return true;                                                                      \
}                                                                                     \
                                                                                      \
bool bst_map_##vtype##_del(bst_map_##vtype m, unsigned long int key)                  \
{                                                                                     \
    if (!m) abort();                                                                  \
    if (m->val == key && !m->left && !m->right) {                                     \
        free(m);                                                                      \
        return true;                                                                  \
    }                                                                                 \
    bst_map_##vtype p = bst_map_##vtype##_findKey(m, key);                            \
    if (!p) return false;                                                             \
    if (p->right) {                                                                   \
        bst_map_##vtype tmp = p->right;                                               \
        while (tmp->left)                                                             \
            tmp = tmp->left;                                                          \
        p->val = tmp->val;                                                            \
        if (tmp->parent == p) tmp->parent->right = tmp->right;                        \
        else tmp->parent->left = tmp->right;                                          \
        delete(tmp);                                                                  \
    } else if (p->parent) {                                                           \
        bst_map_##vtype tmp;                                                          \
        if (p->parent->left == p) {                                                   \
            tmp = p->parent->left;                                                    \
            p->parent->left = p->left;                                                \
        } else {                                                                      \
            tmp = p->parent->right;                                                   \
            p->parent->right = p->left;                                               \
        }                                                                             \
        delete(tmp);                                                                  \
    } else {                                                                          \
        bst_map_##vtype tmp = p;                                                      \
        p = p->left;                                                                  \
        delete(tmp);                                                                  \
    }                                                                                 \
    return true;                                                                      \
}                                                                                     \
                                                                                      \
void bst_map_##vtype##_print(bst_map_##vtype m)                                       \
{                                                                                     \
    if (!m) return;                                                                   \
    bool isroot = m->parent == NULL;                                                  \
    bst_map_##vtype p = m;                                                            \
    if (isroot) printf("{\n");                                                        \
    bst_map_##vtype##_print(p->left);                                                 \
    printf("    %lu" " => " vformat, p->key, p->value);                               \
    printf("\n");                                                                     \
    bst_map_##vtype##_print(p->right);                                                \
    if (isroot) printf("}\n");                                                        \
}                                                                                     \
                                                                                      \
void bst_map_##vtype##_free(bst_map_##vtype *m)                                       \
{                                                                                     \
    if (!m) return;                                                                   \
    bool isroot = m->parent == NULL;                                                  \
    bst_map_##vtype p = *m;                                                           \
    bst_map_##vtype##_free(&p->left);                                                 \
    bst_map_##vtype##_free(&p->right);                                                \
    delete(tmp);                                                                      \
    if (isroot) *m = NULL;                                                            \
}
