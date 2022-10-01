# 1 "main-bstmap.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 385 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "main-bstmap.c" 2
# 1 "/data/data/com.termux/files/usr/include/stdio.h" 1 3 4
# 41 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/sys/cdefs.h" 1 3 4
# 372 "/data/data/com.termux/files/usr/include/sys/cdefs.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/android/versioning.h" 1 3 4
# 373 "/data/data/com.termux/files/usr/include/sys/cdefs.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/android/api-level.h" 1 3 4
# 185 "/data/data/com.termux/files/usr/include/android/api-level.h" 3 4
int android_get_application_target_sdk_version() __attribute__((__availability__(android,strict,introduced=24)));







# 1 "/data/data/com.termux/files/usr/include/bits/get_device_api_level_inlines.h" 1 3 4
# 38 "/data/data/com.termux/files/usr/include/bits/get_device_api_level_inlines.h" 3 4
int __system_property_get(const char* __name, char* __value);
int atoi(const char* __s) __attribute__((__pure__));

static __inline int android_get_device_api_level() {
  char value[92] = { 0 };
  if (__system_property_get("ro.build.version.sdk", value) < 1) return -1;
  int api_level = atoi(value);
  return (api_level > 0) ? api_level : -1;
}
# 194 "/data/data/com.termux/files/usr/include/android/api-level.h" 2 3 4
# 374 "/data/data/com.termux/files/usr/include/sys/cdefs.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/android/ndk-version.h" 1 3 4
# 376 "/data/data/com.termux/files/usr/include/sys/cdefs.h" 2 3 4
# 42 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/sys/types.h" 1 3 4
# 32 "/data/data/com.termux/files/usr/include/sys/types.h" 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 1 3 4
# 35 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 46 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 74 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 102 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/__stddef_max_align_t.h" 1 3 4
# 19 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/__stddef_max_align_t.h" 3 4
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 103 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 2 3 4
# 33 "/data/data/com.termux/files/usr/include/sys/types.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stdint.h" 1 3 4
# 52 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stdint.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/stdint.h" 1 3 4
# 32 "/data/data/com.termux/files/usr/include/stdint.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/wchar_limits.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/stdint.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 1 3 4
# 34 "/data/data/com.termux/files/usr/include/stdint.h" 2 3 4


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;

typedef long __int64_t;
typedef unsigned long __uint64_t;






typedef long __intptr_t;
typedef unsigned long __uintptr_t;





typedef __int8_t int8_t;
typedef __uint8_t uint8_t;

typedef __int16_t int16_t;
typedef __uint16_t uint16_t;

typedef __int32_t int32_t;
typedef __uint32_t uint32_t;

typedef __int64_t int64_t;
typedef __uint64_t uint64_t;

typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;

typedef int8_t int_least8_t;
typedef uint8_t uint_least8_t;

typedef int16_t int_least16_t;
typedef uint16_t uint_least16_t;

typedef int32_t int_least32_t;
typedef uint32_t uint_least32_t;

typedef int64_t int_least64_t;
typedef uint64_t uint_least64_t;

typedef int8_t int_fast8_t;
typedef uint8_t uint_fast8_t;

typedef int64_t int_fast64_t;
typedef uint64_t uint_fast64_t;


typedef int64_t int_fast16_t;
typedef uint64_t uint_fast16_t;
typedef int64_t int_fast32_t;
typedef uint64_t uint_fast32_t;







typedef uint64_t uintmax_t;
typedef int64_t intmax_t;
# 53 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stdint.h" 2 3 4
# 34 "/data/data/com.termux/files/usr/include/sys/types.h" 2 3 4


# 1 "/data/data/com.termux/files/usr/include/linux/types.h" 1 3 4
# 21 "/data/data/com.termux/files/usr/include/linux/types.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/types.h" 1 3 4
# 19 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/types.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/asm-generic/types.h" 1 3 4
# 21 "/data/data/com.termux/files/usr/include/asm-generic/types.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/asm-generic/int-ll64.h" 1 3 4
# 21 "/data/data/com.termux/files/usr/include/asm-generic/int-ll64.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/bitsperlong.h" 1 3 4
# 22 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/bitsperlong.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 23 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/bitsperlong.h" 2 3 4
# 22 "/data/data/com.termux/files/usr/include/asm-generic/int-ll64.h" 2 3 4

typedef __signed__ char __s8;
typedef unsigned char __u8;
typedef __signed__ short __s16;
typedef unsigned short __u16;
typedef __signed__ int __s32;
typedef unsigned int __u32;

__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 22 "/data/data/com.termux/files/usr/include/asm-generic/types.h" 2 3 4
# 20 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/types.h" 2 3 4
# 22 "/data/data/com.termux/files/usr/include/linux/types.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/linux/posix_types.h" 1 3 4
# 21 "/data/data/com.termux/files/usr/include/linux/posix_types.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/linux/stddef.h" 1 3 4
# 21 "/data/data/com.termux/files/usr/include/linux/stddef.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/linux/compiler_types.h" 1 3 4




# 1 "/data/data/com.termux/files/usr/include/linux/compiler.h" 1 3 4
# 6 "/data/data/com.termux/files/usr/include/linux/compiler_types.h" 2 3 4
# 22 "/data/data/com.termux/files/usr/include/linux/stddef.h" 2 3 4
# 22 "/data/data/com.termux/files/usr/include/linux/posix_types.h" 2 3 4


typedef struct {
  unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;
typedef void(* __kernel_sighandler_t) (int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/posix_types.h" 1 3 4
# 21 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/posix_types.h" 3 4
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;

# 1 "/data/data/com.termux/files/usr/include/asm-generic/posix_types.h" 1 3 4
# 23 "/data/data/com.termux/files/usr/include/asm-generic/posix_types.h" 3 4
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;


typedef __kernel_ulong_t __kernel_ino_t;


typedef unsigned int __kernel_mode_t;


typedef int __kernel_pid_t;


typedef int __kernel_ipc_pid_t;


typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;


typedef __kernel_long_t __kernel_suseconds_t;


typedef int __kernel_daddr_t;


typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;






typedef unsigned int __kernel_old_dev_t;







typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;



typedef struct {
  int val[2];
} __kernel_fsid_t;

typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_old_time_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 25 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/posix_types.h" 2 3 4
# 31 "/data/data/com.termux/files/usr/include/linux/posix_types.h" 2 3 4
# 24 "/data/data/com.termux/files/usr/include/linux/types.h" 2 3 4

typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;



typedef unsigned __poll_t;
# 37 "/data/data/com.termux/files/usr/include/sys/types.h" 2 3 4


# 1 "/data/data/com.termux/files/usr/include/bits/pthread_types.h" 1 3 4
# 32 "/data/data/com.termux/files/usr/include/bits/pthread_types.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/sys/types.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/bits/pthread_types.h" 2 3 4

typedef struct {
  uint32_t flags;
  void* stack_base;
  size_t stack_size;
  size_t guard_size;
  int32_t sched_policy;
  int32_t sched_priority;

  char __reserved[16];

} pthread_attr_t;


typedef struct {

  int64_t __private[4];



} pthread_barrier_t;



typedef int pthread_barrierattr_t;


typedef struct {

  int32_t __private[12];



} pthread_cond_t;

typedef long pthread_condattr_t;

typedef int pthread_key_t;

typedef struct {

  int32_t __private[10];



} pthread_mutex_t;

typedef long pthread_mutexattr_t;

typedef int pthread_once_t;

typedef struct {

  int32_t __private[14];



} pthread_rwlock_t;

typedef long pthread_rwlockattr_t;


typedef struct {

  int64_t __private;



} pthread_spinlock_t;


typedef long pthread_t;
# 40 "/data/data/com.termux/files/usr/include/sys/types.h" 2 3 4


typedef __kernel_gid32_t __gid_t;
typedef __gid_t gid_t;
typedef __kernel_uid32_t __uid_t;
typedef __uid_t uid_t;
typedef __kernel_pid_t __pid_t;
typedef __pid_t pid_t;
typedef uint32_t __id_t;
typedef __id_t id_t;

typedef unsigned long blkcnt_t;
typedef unsigned long blksize_t;
typedef __kernel_caddr_t caddr_t;
typedef __kernel_clock_t clock_t;

typedef __kernel_clockid_t __clockid_t;
typedef __clockid_t clockid_t;

typedef __kernel_daddr_t daddr_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;

typedef __kernel_mode_t __mode_t;
typedef __mode_t mode_t;

typedef __kernel_key_t __key_t;
typedef __key_t key_t;

typedef __kernel_ino_t __ino_t;
typedef __ino_t ino_t;

typedef uint64_t ino64_t;

typedef uint32_t __nlink_t;
typedef __nlink_t nlink_t;

typedef void* __timer_t;
typedef __timer_t timer_t;

typedef __kernel_suseconds_t __suseconds_t;
typedef __suseconds_t suseconds_t;


typedef uint32_t __useconds_t;
typedef __useconds_t useconds_t;





typedef uint64_t dev_t;



typedef __kernel_time_t __time_t;
typedef __time_t time_t;




typedef int64_t off_t;
typedef off_t loff_t;
typedef loff_t off64_t;
# 115 "/data/data/com.termux/files/usr/include/sys/types.h" 3 4
typedef uint32_t __socklen_t;

typedef __socklen_t socklen_t;

typedef __builtin_va_list __va_list;
# 128 "/data/data/com.termux/files/usr/include/sys/types.h" 3 4
typedef __kernel_ssize_t ssize_t;


typedef unsigned int uint_t;
typedef unsigned int uint;


typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef uint32_t u_int32_t;
typedef uint16_t u_int16_t;
typedef uint8_t u_int8_t;
typedef uint64_t u_int64_t;
# 43 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stdarg.h" 1 3 4
# 14 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 32 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 45 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 1 3 4
# 46 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/string.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/string.h" 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 1 3 4
# 34 "/data/data/com.termux/files/usr/include/string.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/xlocale.h" 1 3 4
# 44 "/data/data/com.termux/files/usr/include/xlocale.h" 3 4
struct __locale_t;




typedef struct __locale_t* locale_t;
# 35 "/data/data/com.termux/files/usr/include/string.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/bits/strcasecmp.h" 1 3 4
# 49 "/data/data/com.termux/files/usr/include/bits/strcasecmp.h" 3 4
int strcasecmp(const char* __s1, const char* __s2) __attribute__((__pure__));






int strcasecmp_l(const char* __s1, const char* __s2, locale_t __l) __attribute__((__pure__)) __attribute__((__availability__(android,strict,introduced=23)));
# 68 "/data/data/com.termux/files/usr/include/bits/strcasecmp.h" 3 4
int strncasecmp(const char* __s1, const char* __s2, size_t __n) __attribute__((__pure__));






int strncasecmp_l(const char* __s1, const char* __s2, size_t __n, locale_t __l) __attribute__((__pure__)) __attribute__((__availability__(android,strict,introduced=23)));
# 37 "/data/data/com.termux/files/usr/include/string.h" 2 3 4







void* memccpy(void* __dst, const void* __src, int __stop_char, size_t __n);
void* memchr(const void* __s, int __ch, size_t __n) __attribute__((__pure__));




void* memrchr(const void* __s, int __ch, size_t __n) __attribute__((__pure__));

int memcmp(const void* __lhs, const void* __rhs, size_t __n) __attribute__((__pure__));
void* memcpy(void*, const void*, size_t);







void* memmove(void* __dst, const void* __src, size_t __n);
void* memset(void* __dst, int __ch, size_t __n);
void* memmem(const void* __haystack, size_t __haystack_size, const void* __needle, size_t __needle_size) __attribute__((__pure__));

char* strchr(const char* __s, int __ch) __attribute__((__pure__));


char* __strchr_chk(const char* __s, int __ch, size_t __n) __attribute__((__availability__(android,strict,introduced=18)));
# 88 "/data/data/com.termux/files/usr/include/string.h" 3 4
char* strrchr(const char* __s, int __ch) __attribute__((__pure__));


char* __strrchr_chk(const char* __s, int __ch, size_t __n) __attribute__((__availability__(android,strict,introduced=18)));



size_t strlen(const char* __s) __attribute__((__pure__));


size_t __strlen_chk(const char* __s, size_t __n) __attribute__((__availability__(android,strict,introduced=17)));



int strcmp(const char* __lhs, const char* __rhs) __attribute__((__pure__));


char* stpcpy(char* __dst, const char* __src) __attribute__((__availability__(android,strict,introduced=21)));


char* strcpy(char* __dst, const char* __src);
char* strcat(char* __dst, const char* __src);
char* strdup(const char* __s);

char* strstr(const char* __haystack, const char* __needle) __attribute__((__pure__));




char* strcasestr(const char* __haystack, const char* __needle) __attribute__((__pure__));

char* strtok(char* __s, const char* __delimiter);
char* strtok_r(char* __s, const char* __delimiter, char** __pos_ptr);

char* strerror(int __errno_value);


char* strerror_l(int __errno_value, locale_t __l) __attribute__((__availability__(android,strict,introduced=23)));





int strerror_r(int __errno_value, char* __buf, size_t __n);


size_t strnlen(const char* __s, size_t __n) __attribute__((__pure__));
char* strncat(char* __dst, const char* __src, size_t __n);
char* strndup(const char* __s, size_t __n);
int strncmp(const char* __lhs, const char* __rhs, size_t __n) __attribute__((__pure__));


char* stpncpy(char* __dst, const char* __src, size_t __n) __attribute__((__availability__(android,strict,introduced=21)));


char* strncpy(char* __dst, const char* __src, size_t __n);

size_t strlcat(char* __dst, const char* __src, size_t __n);
size_t strlcpy(char* __dst, const char* __src, size_t __n);

size_t strcspn(const char* __s, const char* __reject) __attribute__((__pure__));
char* strpbrk(const char* __s, const char* __accept) __attribute__((__pure__));
char* strsep(char** __s_ptr, const char* __delimiter);
size_t strspn(const char* __s, const char* __accept);

char* strsignal(int __signal);

int strcoll(const char* __lhs, const char* __rhs) __attribute__((__pure__));
size_t strxfrm(char* __dst, const char* __src, size_t __n);


int strcoll_l(const char* __lhs, const char* __rhs, locale_t __l) __attribute__((__pure__)) __attribute__((__availability__(android,strict,introduced=21)));
size_t strxfrm_l(char* __dst, const char* __src, size_t __n, locale_t __l) __attribute__((__availability__(android,strict,introduced=21)));
# 48 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/fcntl.h" 1 3 4
# 25 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/fcntl.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/asm-generic/fcntl.h" 1 3 4
# 21 "/data/data/com.termux/files/usr/include/asm-generic/fcntl.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/flock64.h" 1 3 4
# 22 "/data/data/com.termux/files/usr/include/asm-generic/fcntl.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/flock.h" 1 3 4
# 60 "/data/data/com.termux/files/usr/include/bits/flock.h" 3 4
struct flock { short l_type; short l_whence; off64_t l_start; off64_t l_len; pid_t l_pid; };
struct flock64 { short l_type; short l_whence; off64_t l_start; off64_t l_len; pid_t l_pid; };
# 23 "/data/data/com.termux/files/usr/include/asm-generic/fcntl.h" 2 3 4
# 123 "/data/data/com.termux/files/usr/include/asm-generic/fcntl.h" 3 4
struct f_owner_ex {
  int type;
  __kernel_pid_t pid;
};
# 26 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/fcntl.h" 2 3 4
# 49 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/bits/seek_constants.h" 1 3 4
# 51 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4







typedef off_t fpos_t;
typedef off64_t fpos64_t;

struct __sFILE;
typedef struct __sFILE FILE;


extern FILE* stdin __attribute__((__availability__(android,strict,introduced=23)));
extern FILE* stdout __attribute__((__availability__(android,strict,introduced=23)));
extern FILE* stderr __attribute__((__availability__(android,strict,introduced=23)));
# 109 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
void clearerr(FILE* __fp);
int fclose(FILE* __fp);
int feof(FILE* __fp);
int ferror(FILE* __fp);
int fflush(FILE* __fp);
int fgetc(FILE* __fp);
char* fgets(char* __buf, int __size, FILE* __fp);
int fprintf(FILE* __fp , const char* __fmt, ...) __attribute__((__format__(printf, 2, 3)));
int fputc(int __ch, FILE* __fp);
int fputs(const char* __s, FILE* __fp);
size_t fread(void* __buf, size_t __size, size_t __count, FILE* __fp);
int fscanf(FILE* __fp, const char* __fmt, ...) __attribute__((__format__(scanf, 2, 3)));
size_t fwrite(const void* __buf, size_t __size, size_t __count, FILE* __fp);
int getc(FILE* __fp);
int getchar(void);


ssize_t getdelim(char** __line_ptr, size_t* __line_length_ptr, int __delimiter, FILE* __fp) __attribute__((__availability__(android,strict,introduced=18)));
ssize_t getline(char** __line_ptr, size_t* __line_length_ptr, FILE* __fp) __attribute__((__availability__(android,strict,introduced=18)));



void perror(const char* __msg);
int printf(const char* __fmt, ...) __attribute__((__format__(printf, 1, 2)));
int putc(int __ch, FILE* __fp);
int putchar(int __ch);
int puts(const char* __s);
int remove(const char* __path);
void rewind(FILE* __fp);
int scanf(const char* __fmt, ...) __attribute__((__format__(scanf, 1, 2)));
void setbuf(FILE* __fp, char* __buf);
int setvbuf(FILE* __fp, char* __buf, int __mode, size_t __size);
int sscanf(const char* __s, const char* __fmt, ...) __attribute__((__format__(scanf, 2, 3)));
int ungetc(int __ch, FILE* __fp);
int vfprintf(FILE* __fp, const char* __fmt, va_list __args) __attribute__((__format__(printf, 2, 0)));
int vprintf(const char* __fp, va_list __args) __attribute__((__format__(printf, 1, 0)));


int dprintf(int __fd, const char* __fmt, ...) __attribute__((__format__(printf, 2, 3))) __attribute__((__availability__(android,strict,introduced=21)));
int vdprintf(int __fd, const char* __fmt, va_list __args) __attribute__((__format__(printf, 2, 0))) __attribute__((__availability__(android,strict,introduced=21)));
# 165 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
int sprintf(char* __s, const char* __fmt, ...)
    __attribute__((__format__(printf, 2, 3))) ;
int vsprintf(char* __s, const char* __fmt, va_list __args)
    __attribute__((__format__(printf, 2, 0))) ;
char* tmpnam(char* __s)
    __attribute__((deprecated("tmpnam is unsafe, use mkstemp or tmpfile instead")));

char* tempnam(const char* __dir, const char* __prefix)
    __attribute__((deprecated("tempnam is unsafe, use mkstemp or tmpfile instead")));







int rename(const char* __old_path, const char* __new_path);







int renameat(int __old_dir_fd, const char* __old_path, int __new_dir_fd, const char* __new_path);
# 226 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
int fseek(FILE* __fp, long __offset, int __whence);
long ftell(FILE* __fp);
# 251 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
int fgetpos(FILE* __fp, fpos_t* __pos);
int fsetpos(FILE* __fp, const fpos_t* __pos);
int fseeko(FILE* __fp, off_t __offset, int __whence);
off_t ftello(FILE* __fp);
# 265 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
int fgetpos64(FILE* __fp, fpos64_t* __pos) __attribute__((__availability__(android,strict,introduced=24)));
int fsetpos64(FILE* __fp, const fpos64_t* __pos) __attribute__((__availability__(android,strict,introduced=24)));
int fseeko64(FILE* __fp, off64_t __offset, int __whence) __attribute__((__availability__(android,strict,introduced=24)));
off64_t ftello64(FILE* __fp) __attribute__((__availability__(android,strict,introduced=24)));
# 283 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
FILE* fopen(const char* __path, const char* __mode);


FILE* fopen64(const char* __path, const char* __mode) __attribute__((__availability__(android,strict,introduced=24)));


FILE* freopen(const char* __path, const char* __mode, FILE* __fp);


FILE* freopen64(const char* __path, const char* __mode, FILE* __fp) __attribute__((__availability__(android,strict,introduced=24)));



FILE* tmpfile64(void) __attribute__((__availability__(android,strict,introduced=24)));



int snprintf(char* __buf, size_t __size, const char* __fmt, ...) __attribute__((__format__(printf, 3, 4)));
int vfscanf(FILE* __fp, const char* __fmt, va_list __args) __attribute__((__format__(scanf, 2, 0)));
int vscanf(const char* __fmt , va_list __args) __attribute__((__format__(scanf, 1, 0)));
int vsnprintf(char* __buf, size_t __size, const char* __fmt, va_list __args) __attribute__((__format__(printf, 3, 0)));
int vsscanf(const char* __s, const char* __fmt, va_list __args) __attribute__((__format__(scanf, 2, 0)));







static __inline__ char* ctermid(char* s) {
 if (s == 0) return (char*) "/dev/tty";
 strcpy(s, "/dev/tty");
 return s;
}

FILE* fdopen(int __fd, const char* __mode);
int fileno(FILE* __fp);
int pclose(FILE* __fp);
FILE* popen(const char* __command, const char* __mode);
void flockfile(FILE* __fp);
int ftrylockfile(FILE* __fp);
void funlockfile(FILE* __fp);
int getc_unlocked(FILE* __fp);
int getchar_unlocked(void);
int putc_unlocked(int __ch, FILE* __fp);
int putchar_unlocked(int __ch);



FILE* fmemopen(void* __buf, size_t __size, const char* __mode) __attribute__((__availability__(android,strict,introduced=23)));
FILE* open_memstream(char** __ptr, size_t* __size_ptr) __attribute__((__availability__(android,strict,introduced=23)));




int asprintf(char** __s_ptr, const char* __fmt, ...) __attribute__((__format__(printf, 2, 3)));
char* fgetln(FILE* __fp, size_t* __length_ptr);
int fpurge(FILE* __fp);
void setbuffer(FILE* __fp, char* __buf, int __size);
int setlinebuf(FILE* __fp);
int vasprintf(char** __s_ptr, const char* __fmt, va_list __args) __attribute__((__format__(printf, 2, 0)));


void clearerr_unlocked(FILE* __fp) __attribute__((__availability__(android,strict,introduced=23)));
int feof_unlocked(FILE* __fp) __attribute__((__availability__(android,strict,introduced=23)));
int ferror_unlocked(FILE* __fp) __attribute__((__availability__(android,strict,introduced=23)));




int fileno_unlocked(FILE* __fp) __attribute__((__availability__(android,strict,introduced=24)));
# 385 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
int open(const char*, int, ...);
extern pid_t getpid();
extern int unlink(const char*);
void free(void* p);
uint32_t arc4random(void);
static __inline__ FILE* tmpfile() {
 int p = getpid();
 char* path;
 int i;
 for (i = 0; i < 100; i++) {
  unsigned int r = arc4random();
  if (asprintf(&path, "/data/data/com.termux/files/usr/tmp/tmpfile.%d-%u", p, r) == -1) return ((void*)0);
  int fd = open(path, 00000002 | 00000100 | 00000200 | 0400000, 0600);
  if (fd >= 0) {
   FILE* result = fdopen(fd, "w+");
   unlink(path);
   free(path);
   return result;
  }
  free(path);
 }
 return ((void*)0);
}
# 2 "main-bstmap.c" 2
# 1 "/data/data/com.termux/files/usr/include/math.h" 1 3 4
# 19 "/data/data/com.termux/files/usr/include/math.h" 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/limits.h" 1 3 4
# 21 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/limits.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/limits.h" 1 3 4
# 41 "/data/data/com.termux/files/usr/include/limits.h" 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/float.h" 1 3 4
# 42 "/data/data/com.termux/files/usr/include/limits.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/linux/limits.h" 1 3 4
# 44 "/data/data/com.termux/files/usr/include/limits.h" 2 3 4
# 140 "/data/data/com.termux/files/usr/include/limits.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/posix_limits.h" 1 3 4
# 141 "/data/data/com.termux/files/usr/include/limits.h" 2 3 4
# 22 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/limits.h" 2 3 4
# 20 "/data/data/com.termux/files/usr/include/math.h" 2 3 4





typedef double __double_t;
typedef __double_t double_t;
typedef float __float_t;
typedef __float_t float_t;
# 76 "/data/data/com.termux/files/usr/include/math.h" 3 4
double acos(double __x);
float acosf(float __x);
long double acosl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double asin(double __x);
float asinf(float __x);
long double asinl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double atan(double __x);
float atanf(float __x);
long double atanl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double atan2(double __y, double __x);
float atan2f(float __y, float __x);
long double atan2l(long double __y, long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double cos(double __x);
float cosf(float __x);
long double cosl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double sin(double __x);
float sinf(float __x);
long double sinl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double tan(double __x);
float tanf(float __x);
long double tanl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double acosh(double __x);
float acoshf(float __x);
long double acoshl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double asinh(double __x);
float asinhf(float __x);
long double asinhl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double atanh(double __x);
float atanhf(float __x);
long double atanhl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double cosh(double __x);
float coshf(float __x);
long double coshl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double sinh(double __x);
float sinhf(float __x);
long double sinhl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double tanh(double __x);
float tanhf(float __x);
long double tanhl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double exp(double __x);
float expf(float __x);
long double expl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double exp2(double __x);
float exp2f(float __x);
long double exp2l(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double expm1(double __x);
float expm1f(float __x);
long double expm1l(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double frexp(double __x, int* __exponent);
float frexpf(float __x, int* __exponent);
long double frexpl(long double __x, int* __exponent) __attribute__((__availability__(android,strict,introduced=21)));

int ilogb(double __x) __attribute__((__const__));
int ilogbf(float __x) __attribute__((__const__));
int ilogbl(long double __x) __attribute__((__availability__(android,strict,introduced=3))) __attribute__((__const__));

double ldexp(double __x, int __exponent);
float ldexpf(float __x, int __exponent);
long double ldexpl(long double __x, int __exponent) __attribute__((__availability__(android,strict,introduced=3)));

double log(double __x);
float logf(float __x);
long double logl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double log10(double __x);
float log10f(float __x);
long double log10l(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double log1p(double __x);
float log1pf(float __x);
long double log1pl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));



double log2(double __x) __attribute__((__availability__(android,strict,introduced=18)));
float log2f(float __x) __attribute__((__availability__(android,strict,introduced=18)));
long double log2l(long double __x) __attribute__((__availability__(android,strict,introduced=18)));



double logb(double __x);
float logbf(float __x);
long double logbl(long double __x) __attribute__((__availability__(android,strict,introduced=18)));

double modf(double __x, double* __integral_part);
float modff(float __x, float* __integral_part);
long double modfl(long double __x, long double* __integral_part) __attribute__((__availability__(android,strict,introduced=21)));

double scalbn(double __x, int __exponent);
float scalbnf(float __x, int __exponent);
long double scalbnl(long double __x, int __exponent) __attribute__((__availability__(android,strict,introduced=3)));


double scalbln(double __x, long __exponent) ;
float scalblnf(float __x, long __exponent) ;
long double scalblnl(long double __x, long __exponent) ;

double cbrt(double __x);
float cbrtf(float __x);
long double cbrtl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double fabs(double __x) __attribute__((__const__));
float fabsf(float __x) __attribute__((__const__));
long double fabsl(long double __x) __attribute__((__availability__(android,strict,introduced=3))) __attribute__((__const__));

double hypot(double __x, double __y);
float hypotf(float __x, float __y);
long double hypotl(long double __x, long double __y) __attribute__((__availability__(android,strict,introduced=21)));

double pow(double __x, double __y);
float powf(float __x, float __y);
long double powl(long double __x, long double __y) __attribute__((__availability__(android,strict,introduced=21)));

double sqrt(double __x);
float sqrtf(float __x);
long double sqrtl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double erf(double __x);
float erff(float __x);
long double erfl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double erfc(double __x);
float erfcf(float __x);
long double erfcl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double lgamma(double __x);
float lgammaf(float __x);
long double lgammal(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double tgamma(double __x);
float tgammaf(float __x);
long double tgammal(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double ceil(double __x);
float ceilf(float __x);
long double ceill(long double __x) __attribute__((__availability__(android,strict,introduced=3)));

double floor(double __x);
float floorf(float __x);
long double floorl(long double __x) __attribute__((__availability__(android,strict,introduced=3)));

double nearbyint(double __x);
float nearbyintf(float __x);
long double nearbyintl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double rint(double __x);
float rintf(float __x);
long double rintl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

long lrint(double __x);
long lrintf(float __x);
long lrintl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

long long llrint(double __x);
long long llrintf(float __x);
long long llrintl(long double __x) __attribute__((__availability__(android,strict,introduced=21)));

double round(double __x);
float roundf(float __x);
long double roundl(long double __x) __attribute__((__availability__(android,strict,introduced=3)));

long lround(double __x);
long lroundf(float __x);
long lroundl(long double __x) __attribute__((__availability__(android,strict,introduced=3)));

long long llround(double __x);
long long llroundf(float __x);
long long llroundl(long double __x) __attribute__((__availability__(android,strict,introduced=3)));

double trunc(double __x);
float truncf(float __x);
long double truncl(long double __x) __attribute__((__availability__(android,strict,introduced=3)));

double fmod(double __x, double __y);
float fmodf(float __x, float __y);
long double fmodl(long double __x, long double __y) __attribute__((__availability__(android,strict,introduced=21)));

double remainder(double __x, double __y);
float remainderf(float __x, float __y);
long double remainderl(long double __x, long double __y) __attribute__((__availability__(android,strict,introduced=21)));

double remquo(double __x, double __y, int* __quotient_bits);
float remquof(float __x, float __y, int* __quotient_bits);
long double remquol(long double __x, long double __y, int* __quotient_bits) __attribute__((__availability__(android,strict,introduced=21)));

double copysign(double __value, double __sign) __attribute__((__const__));
float copysignf(float __value, float __sign) __attribute__((__const__));
long double copysignl(long double __value, long double __sign) __attribute__((__availability__(android,strict,introduced=3))) __attribute__((__const__));

double nan(const char* __kind) __attribute__((__const__));
float nanf(const char* __kind) __attribute__((__const__));
long double nanl(const char* __kind) __attribute__((__availability__(android,strict,introduced=13))) __attribute__((__const__));

double nextafter(double __x, double __y);
float nextafterf(float __x, float __y);
long double nextafterl(long double __x, long double __y) ;

double nexttoward(double __x, long double __y) ;
float nexttowardf(float __x, long double __y);
long double nexttowardl(long double __x, long double __y) ;

double fdim(double __x, double __y);
float fdimf(float __x, float __y);
long double fdiml(long double __x, long double __y) __attribute__((__availability__(android,strict,introduced=3)));

double fmax(double __x, double __y) __attribute__((__const__));
float fmaxf(float __x, float __y) __attribute__((__const__));
long double fmaxl(long double __x, long double __y) __attribute__((__availability__(android,strict,introduced=3))) __attribute__((__const__));

double fmin(double __x, double __y) __attribute__((__const__));
float fminf(float __x, float __y) __attribute__((__const__));
long double fminl(long double __x, long double __y) __attribute__((__availability__(android,strict,introduced=3))) __attribute__((__const__));

double fma(double __x, double __y, double __z);
float fmaf(float __x, float __y, float __z);
long double fmal(long double __x, long double __y, long double __z) ;
# 329 "/data/data/com.termux/files/usr/include/math.h" 3 4
int (isinf)(double __x) __attribute__((__const__)) __attribute__((__availability__(android,strict,introduced=21)));


int (isnan)(double __x) __attribute__((__const__));



extern int signgam;

double j0(double __x);
double j1(double __x);
double jn(int __n, double __x);
double y0(double __x);
double y1(double __x);
double yn(int __n, double __x);
# 3 "main-bstmap.c" 2

# 1 "./tlib/bst-map.template.c.h" 1

# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stdbool.h" 1 3
# 3 "./tlib/bst-map.template.c.h" 2
# 1 "/data/data/com.termux/files/usr/include/stdlib.h" 1 3 4
# 32 "/data/data/com.termux/files/usr/include/stdlib.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/alloca.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/stdlib.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/wait.h" 1 3 4
# 38 "/data/data/com.termux/files/usr/include/bits/wait.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/linux/wait.h" 1 3 4
# 39 "/data/data/com.termux/files/usr/include/bits/wait.h" 2 3 4
# 34 "/data/data/com.termux/files/usr/include/stdlib.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/malloc.h" 1 3 4
# 29 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 1 3 4
# 30 "/data/data/com.termux/files/usr/include/malloc.h" 2 3 4
# 43 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
void* malloc(size_t __byte_count) __attribute__((__malloc__)) __attribute__((__alloc_size__(1))) __attribute__((__warn_unused_result__));
# 52 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
void* calloc(size_t __item_count, size_t __item_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2))) __attribute__((__warn_unused_result__));
# 61 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
void* realloc(void* __ptr, size_t __byte_count) __attribute__((__alloc_size__(2))) __attribute__((__warn_unused_result__));
# 83 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
void free(void* __ptr);
# 94 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
void* memalign(size_t __alignment, size_t __byte_count) __attribute__((__malloc__)) __attribute__((__alloc_size__(2))) __attribute__((__warn_unused_result__));
# 104 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
size_t malloc_usable_size(const void* __ptr) __attribute__((__availability__(android,strict,introduced=17)));
# 132 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
struct mallinfo { size_t arena; size_t ordblks; size_t smblks; size_t hblks; size_t hblkhd; size_t usmblks; size_t fsmblks; size_t uordblks; size_t fordblks; size_t keepcost; };







struct mallinfo mallinfo(void);




struct mallinfo2 { size_t arena; size_t ordblks; size_t smblks; size_t hblks; size_t hblkhd; size_t usmblks; size_t fsmblks; size_t uordblks; size_t fordblks; size_t keepcost; };






struct mallinfo2 mallinfo2(void) __asm__("mallinfo");
# 181 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
int malloc_info(int __must_be_zero, FILE* __fp) __attribute__((__availability__(android,strict,introduced=23)));
# 297 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
enum HeapTaggingLevel {




  M_HEAP_TAGGING_LEVEL_NONE = 0,






  M_HEAP_TAGGING_LEVEL_TBI = 1,





  M_HEAP_TAGGING_LEVEL_ASYNC = 2,





  M_HEAP_TAGGING_LEVEL_SYNC = 3,

};
# 35 "/data/data/com.termux/files/usr/include/stdlib.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/15.0.1/include/stddef.h" 1 3 4
# 36 "/data/data/com.termux/files/usr/include/stdlib.h" 2 3 4
# 45 "/data/data/com.termux/files/usr/include/stdlib.h" 3 4
__attribute__((__noreturn__)) void abort(void) __attribute__((__nomerge__));
__attribute__((__noreturn__)) void exit(int __status);

__attribute__((__noreturn__)) void _Exit(int __status) __attribute__((__availability__(android,strict,introduced=21)));




int atexit(void (*__fn)(void));



int at_quick_exit(void (*__fn)(void)) __attribute__((__availability__(android,strict,introduced=21)));
void quick_exit(int __status) __attribute__((__noreturn__)) __attribute__((__availability__(android,strict,introduced=21)));



char* getenv(const char* __name);
int putenv(char* __assignment);
int setenv(const char* __name, const char* __value, int __overwrite);
int unsetenv(const char* __name);
int clearenv(void);

char* mkdtemp(char* __template);
char* mktemp(char* __template) __attribute__((deprecated("mktemp is unsafe, use mkstemp or tmpfile instead")));



int mkostemp64(char* __template, int __flags) __attribute__((__availability__(android,strict,introduced=23)));
int mkostemp(char* __template, int __flags) __attribute__((__availability__(android,strict,introduced=23)));
int mkostemps64(char* __template, int __suffix_length, int __flags) __attribute__((__availability__(android,strict,introduced=23)));
int mkostemps(char* __template, int __suffix_length, int __flags) __attribute__((__availability__(android,strict,introduced=23)));




int mkstemp64(char* __template) __attribute__((__availability__(android,strict,introduced=21)));


int mkstemp(char* __template);


int mkstemps64(char* __template, int __flags) __attribute__((__availability__(android,strict,introduced=23)));


int mkstemps(char* __template, int __flags);

long strtol(const char* __s, char** __end_ptr, int __base);
long long strtoll(const char* __s, char** __end_ptr, int __base);
unsigned long strtoul(const char* __s, char** __end_ptr, int __base);
unsigned long long strtoull(const char* __s, char** __end_ptr, int __base);



int posix_memalign(void** __memptr, size_t __alignment, size_t __size) __attribute__((__availability__(android,strict,introduced=17)));
# 109 "/data/data/com.termux/files/usr/include/stdlib.h" 3 4
double strtod(const char* __s, char** __end_ptr);
long double strtold(const char* __s, char** __end_ptr) __attribute__((__availability__(android,strict,introduced=21)));







int atoi(const char* __s) __attribute__((__pure__));
long atol(const char* __s) __attribute__((__pure__));
long long atoll(const char* __s) __attribute__((__pure__));

__attribute__((__warn_unused_result__)) char* realpath(const char* __path, char* __resolved);
int system(const char* __command);

void* bsearch(const void* __key, const void* __base, size_t __nmemb, size_t __size, int (*__comparator)(const void* __lhs, const void* __rhs));

void qsort(void* __base, size_t __nmemb, size_t __size, int (*__comparator)(const void* __lhs, const void* __rhs));

uint32_t arc4random(void);
uint32_t arc4random_uniform(uint32_t __upper_bound);
void arc4random_buf(void* __buf, size_t __n);





int rand_r(unsigned int* __seed_ptr) __attribute__((__availability__(android,strict,introduced=21)));



double drand48(void);
double erand48(unsigned short __xsubi[3]);
long jrand48(unsigned short __xsubi[3]);


void lcong48(unsigned short __param[7]) __attribute__((__availability__(android,strict,introduced=23)));


long lrand48(void);
long mrand48(void);
long nrand48(unsigned short __xsubi[3]);
unsigned short* seed48(unsigned short __seed16v[3]);
void srand48(long __seed);



char* initstate(unsigned int __seed, char* __state, size_t __n) __attribute__((__availability__(android,strict,introduced=21)));
char* setstate(char* __state) __attribute__((__availability__(android,strict,introduced=21)));



int getpt(void);


int posix_openpt(int __flags) __attribute__((__availability__(android,strict,introduced=21)));


char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, size_t __n);
int unlockpt(int __fd);







typedef struct {
  int quot;
  int rem;
} div_t;

div_t div(int __numerator, int __denominator) __attribute__((__const__));

typedef struct {
  long int quot;
  long int rem;
} ldiv_t;

ldiv_t ldiv(long __numerator, long __denominator) __attribute__((__const__));

typedef struct {
  long long int quot;
  long long int rem;
} lldiv_t;

lldiv_t lldiv(long long __numerator, long long __denominator) __attribute__((__const__));
# 215 "/data/data/com.termux/files/usr/include/stdlib.h" 3 4
const char* getprogname(void) __attribute__((__availability__(android,strict,introduced=21)));
void setprogname(const char* __name) __attribute__((__availability__(android,strict,introduced=21)));



int mblen(const char* __s, size_t __n) ;
size_t mbstowcs(wchar_t* __dst, const char* __src, size_t __n) ;
int mbtowc(wchar_t* __wc_ptr, const char* __s, size_t __n) ;
int wctomb(char* __dst, wchar_t __wc) ;

size_t wcstombs(char* __dst, const wchar_t* __src, size_t __n) ;
# 243 "/data/data/com.termux/files/usr/include/stdlib.h" 3 4
int abs(int __x) __attribute__((__const__)) __attribute__((__availability__(android,strict,introduced=19)));
long labs(long __x) __attribute__((__const__)) __attribute__((__availability__(android,strict,introduced=19)));
long long llabs(long long __x) __attribute__((__const__)) __attribute__((__availability__(android,strict,introduced=19)));





float strtof(const char* __s, char** __end_ptr) __attribute__((__availability__(android,strict,introduced=21)));
double atof(const char* __s) __attribute__((__pure__)) __attribute__((__availability__(android,strict,introduced=21)));
int rand(void) __attribute__((__availability__(android,strict,introduced=21)));
void srand(unsigned int __seed) __attribute__((__availability__(android,strict,introduced=21)));
long random(void) __attribute__((__availability__(android,strict,introduced=21)));
void srandom(unsigned int __seed) __attribute__((__availability__(android,strict,introduced=21)));
int grantpt(int __fd) __attribute__((__availability__(android,strict,introduced=21)));

long long strtoll_l(const char* __s, char** __end_ptr, int __base, locale_t __l) __attribute__((__availability__(android,strict,introduced=21)));
unsigned long long strtoull_l(const char* __s, char** __end_ptr, int __base, locale_t __l) __attribute__((__availability__(android,strict,introduced=21)));
long double strtold_l(const char* __s, char** __end_ptr, locale_t __l) __attribute__((__availability__(android,strict,introduced=21)));
# 276 "/data/data/com.termux/files/usr/include/stdlib.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/android/legacy_stdlib_inlines.h" 1 3 4
# 91 "/data/data/com.termux/files/usr/include/android/legacy_stdlib_inlines.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/stdlib.h" 1 3 4
# 92 "/data/data/com.termux/files/usr/include/android/legacy_stdlib_inlines.h" 2 3 4




static __inline double strtod_l(const char* __s, char** __end_ptr, locale_t __l) {
  return strtod(__s, __end_ptr);
}

static __inline float strtof_l(const char* __s, char** __end_ptr, locale_t __l) {
  return strtof(__s, __end_ptr);
}

static __inline long strtol_l(const char* __s, char** __end_ptr, int __base, locale_t __l) {
  return strtol(__s, __end_ptr, __base);
}
# 277 "/data/data/com.termux/files/usr/include/stdlib.h" 2 3 4
# 4 "./tlib/bst-map.template.c.h" 2
# 5 "main-bstmap.c" 2


typedef struct bst_map_int { unsigned long int key; int value; struct bst_map_int *parent; struct bst_map_int *left; struct bst_map_int *right; } *bst_map_int; bst_map_int bst_map_int_newmap(); unsigned long int bst_map_int_hashString(const char *strkey); bst_map_int bst_map_int_findKey(bst_map_int m, unsigned long int key); int bst_map_int_get(bst_map_int m, unsigned long int key, _Bool *found); _Bool bst_map_int_set(bst_map_int m, unsigned long int key, int val); _Bool bst_map_int_del(bst_map_int m, unsigned long int key); void bst_map_int_print(bst_map_int m); void bst_map_int_free(bst_map_int *m);;
bst_map_int bst_map_int_newmap() { bst_map_int m = ({ struct bst_map_int *tmp = calloc(1, sizeof(struct bst_map_int)); if (!tmp) abort(); tmp; }); m->key = 0; m->value = (int) 0; m->parent = ((void*)0); m->left = ((void*)0); m->right = ((void*)0); return m; } unsigned long int bst_map_int_hashString(const char *strkey) { unsigned long int hash = 0; size_t i, len = strlen(strkey); for (i = 0; i < len; i++) { hash = hash * 2 + (strkey[i] ^ hash); } return hash; } bst_map_int bst_map_int_findKey(bst_map_int m, unsigned long int key) { if (!m) abort(); bst_map_int p = m; while (p != ((void*)0)) if (key == p->key) return p; else if (key < p->key) p = p->left; else p = p->right; return ((void*)0); } int bst_map_int_get(bst_map_int m, unsigned long int key, _Bool *found) { if (!m) abort(); bst_map_int node = bst_map_int_findKey(m, key); if (!node) { *found = 0; return (int) 0; } *found = 1; return node->value; } _Bool bst_map_int_set(bst_map_int m, unsigned long int key, int val) { if (!m) abort(); bst_map_int node; if (!m->key && !m->left && !m->right) node = m; else node = bst_map_int_findKey(m, key); if (node) { node->key = key; node->value = val; } else { node = ({ struct bst_map_int *tmp = calloc(1, sizeof(struct bst_map_int)); if (!tmp) abort(); tmp; }); node->key = key; node->value = val; bst_map_int p = m; while (p->left != ((void*)0) && p->right != ((void*)0)) if (key < p->key) p = p->left; else p = p->right; if (key < p->key) p->left = node; else p->right = node; node->parent = p; } return 1; } _Bool bst_map_int_del(bst_map_int m, unsigned long int key) { if (!m) abort(); if (m->key == key && !m->left && !m->right) { free(m); return 1; } bst_map_int p = bst_map_int_findKey(m, key); if (!p) return 0; if (p->right) { bst_map_int tmp = p->right; while (tmp->left) tmp = tmp->left; p->key = tmp->key; if (tmp->parent == p) tmp->parent->right = tmp->right; else tmp->parent->left = tmp->right; ({ if (tmp) { free(tmp); tmp = ((void*)0); } }); } else if (p->parent) { bst_map_int tmp; if (p->parent->left == p) { tmp = p->parent->left; p->parent->left = p->left; } else { tmp = p->parent->right; p->parent->right = p->left; } ({ if (tmp) { free(tmp); tmp = ((void*)0); } }); } else { bst_map_int tmp = p; p = p->left; ({ if (tmp) { free(tmp); tmp = ((void*)0); } }); } return 1; } void bst_map_int_print(bst_map_int m) { if (!m) abort(); _Bool isroot = m->parent == ((void*)0); bst_map_int p = m; if (isroot) printf("{\n"); if (p->left) bst_map_int_print(p->left); printf("    %lu -> ", p->key); const int value = p->value; { const bst_map_int m = ((void*)0); const bst_map_int p = ((void*)0); const _Bool isroot = 0; (m, p, isroot); printf("%d", value); } printf("\n"); if (p->right) bst_map_int_print(p->right); if (isroot) printf("}\n"); } void bst_map_int_free(bst_map_int *m) { if (!m || !(*m)) return; bst_map_int p = *m; _Bool isroot = p->parent == ((void*)0); bst_map_int_free(&p->left); bst_map_int_free(&p->right); ({ if (p) { free(p); p = ((void*)0); } }); if (isroot) *m = ((void*)0); };


typedef struct bst_map_double { unsigned long int key; double value; struct bst_map_double *parent; struct bst_map_double *left; struct bst_map_double *right; } *bst_map_double; bst_map_double bst_map_double_newmap(); unsigned long int bst_map_double_hashString(const char *strkey); bst_map_double bst_map_double_findKey(bst_map_double m, unsigned long int key); double bst_map_double_get(bst_map_double m, unsigned long int key, _Bool *found); _Bool bst_map_double_set(bst_map_double m, unsigned long int key, double val); _Bool bst_map_double_del(bst_map_double m, unsigned long int key); void bst_map_double_print(bst_map_double m); void bst_map_double_free(bst_map_double *m);;
bst_map_double bst_map_double_newmap() { bst_map_double m = ({ struct bst_map_double *tmp = calloc(1, sizeof(struct bst_map_double)); if (!tmp) abort(); tmp; }); m->key = 0; m->value = (double) 0; m->parent = ((void*)0); m->left = ((void*)0); m->right = ((void*)0); return m; } unsigned long int bst_map_double_hashString(const char *strkey) { unsigned long int hash = 0; size_t i, len = strlen(strkey); for (i = 0; i < len; i++) { hash = hash * 2 + (strkey[i] ^ hash); } return hash; } bst_map_double bst_map_double_findKey(bst_map_double m, unsigned long int key) { if (!m) abort(); bst_map_double p = m; while (p != ((void*)0)) if (key == p->key) return p; else if (key < p->key) p = p->left; else p = p->right; return ((void*)0); } double bst_map_double_get(bst_map_double m, unsigned long int key, _Bool *found) { if (!m) abort(); bst_map_double node = bst_map_double_findKey(m, key); if (!node) { *found = 0; return (double) 0; } *found = 1; return node->value; } _Bool bst_map_double_set(bst_map_double m, unsigned long int key, double val) { if (!m) abort(); bst_map_double node; if (!m->key && !m->left && !m->right) node = m; else node = bst_map_double_findKey(m, key); if (node) { node->key = key; node->value = val; } else { node = ({ struct bst_map_double *tmp = calloc(1, sizeof(struct bst_map_double)); if (!tmp) abort(); tmp; }); node->key = key; node->value = val; bst_map_double p = m; while (p->left != ((void*)0) && p->right != ((void*)0)) if (key < p->key) p = p->left; else p = p->right; if (key < p->key) p->left = node; else p->right = node; node->parent = p; } return 1; } _Bool bst_map_double_del(bst_map_double m, unsigned long int key) { if (!m) abort(); if (m->key == key && !m->left && !m->right) { free(m); return 1; } bst_map_double p = bst_map_double_findKey(m, key); if (!p) return 0; if (p->right) { bst_map_double tmp = p->right; while (tmp->left) tmp = tmp->left; p->key = tmp->key; if (tmp->parent == p) tmp->parent->right = tmp->right; else tmp->parent->left = tmp->right; ({ if (tmp) { free(tmp); tmp = ((void*)0); } }); } else if (p->parent) { bst_map_double tmp; if (p->parent->left == p) { tmp = p->parent->left; p->parent->left = p->left; } else { tmp = p->parent->right; p->parent->right = p->left; } ({ if (tmp) { free(tmp); tmp = ((void*)0); } }); } else { bst_map_double tmp = p; p = p->left; ({ if (tmp) { free(tmp); tmp = ((void*)0); } }); } return 1; } void bst_map_double_print(bst_map_double m) { if (!m) abort(); _Bool isroot = m->parent == ((void*)0); bst_map_double p = m; if (isroot) printf("{\n"); if (p->left) bst_map_double_print(p->left); printf("    %lu -> ", p->key); const double value = p->value; { const bst_map_double m = ((void*)0); const bst_map_double p = ((void*)0); const _Bool isroot = 0; (m, p, isroot); printf("%.03lf", value); } printf("\n"); if (p->right) bst_map_double_print(p->right); if (isroot) printf("}\n"); } void bst_map_double_free(bst_map_double *m) { if (!m || !(*m)) return; bst_map_double p = *m; _Bool isroot = p->parent == ((void*)0); bst_map_double_free(&p->left); bst_map_double_free(&p->right); ({ if (p) { free(p); p = ((void*)0); } }); if (isroot) *m = ((void*)0); };




void mkRandomStr(char str[33])
{
    char a;
    size_t i = 0;

    char charr[(26 +26 +10) +1] = {0};
    for (a = 'A'; a <= 'Z' && i < (26 +26 +10); a++, i++)
        charr[i] = a;
    for (a = '0'; a <= '9' && i < (26 +26 +10); a++, i++)
        charr[i] = a;
    for (a = 'a'; a <= 'z' && i < (26 +26 +10); a++, i++)
        charr[i] = a;
    for (i = 0; i < 32; i++) {
        size_t r = (size_t) (rand() % (26 +26 +10));
        str[i] = charr[r];
    }
}


void testHasher()
{
    int i;
    char str[33] = {0};
    for (i = 0; i < 100; i++) {
        mkRandomStr(str);
        printf("%lu: %s\n", bst_map_int_hashString(str), str);
    }
}

int main()
{

    bst_map_double m = bst_map_double_newmap();
    bst_map_double_set(m, bst_map_double_hashString("key1"), 388.88);
    bst_map_double_set(m, bst_map_double_hashString("key2"), 26.90);
    printf("double map = "); bst_map_double_print(m);
    bst_map_double_free(&m);

    bst_map_int m2 = bst_map_int_newmap();
    bst_map_int_set(m2, bst_map_int_hashString("key1"), 12);
    bst_map_int_set(m2, bst_map_int_hashString("key2"), 46);
    printf("int map = "); bst_map_int_print(m2);
    bst_map_int_free(&m2);




    return 0;
}
