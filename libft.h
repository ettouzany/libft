
char *ft_strnstr(const char *s1, const char *s2, size_t n);
int ft_isprint(int c);
char *ft_strchr(const char *str, int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *str, int c, size_t n);
int ft_atoi(const char *str);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isalpha(int c);
char *ft_strrchr(const char *s, int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
void ft_bzero(void *s, size_t n);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *restrict dst, const void *restrict src, size_t n);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;