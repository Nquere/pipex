/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:05 by nquere            #+#    #+#             */
/*   Updated: 2014/05/07 00:04:05 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 64

# define TRUE 1
# define FALSE 0

# define LOAD_FACTOR 0.75

# define PTR 2
# define LOOP 4
# define FATAL_ERR 8
# define DISP_ERR 16
# include <stdlib.h>

typedef unsigned char	t_bool;
typedef unsigned int	t_flags;
typedef unsigned int	t_uint;

typedef struct			s_entry
{
	struct s_entry	*next;
	int				fd;
	char			*buf;
}						t_entry;

typedef struct			s_array
{
	void			*tab;
	size_t			size;
	size_t			capacity;
	size_t			size_change;
	size_t			size_type;
	unsigned int	it;
	void			*(*err_func)(t_flags);
	t_flags			flags;
}						t_array;

void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putnbr(int n);
void					ft_putendl(char const *s);
void					ft_strclr(char *s);
void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *s1, const void *s2, size_t n);
void					*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void					*ft_memmove(void *s1, const void *s2, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
size_t					ft_strlen(const char *str);
char					*ft_strdup(const char *s1);
char					*ft_strcpy(char *s1, const char *s2);
char					*ft_strncpy(char *s1, const char *s2, size_t n);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *s1, const char *s2);
char					*ft_strnstr(const char *s1, const char *s2, size_t n);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_atoi(const char *str);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_toupper(int c);
int						ft_tolower(int c);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
							char (*f)(unsigned int, char));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strsub(char const *s,
							unsigned int start, size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_itoa(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putnbr_fd(int n, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
char					*ft_strnjoin(const char *s1, const char *s2, size_t n);
size_t					ft_strclen(const char *s, char c);
char					*ft_strnjoin(const char *s1, const char *s2, size_t n);
int						get_next_line(const int fd, char **line, char c);
t_array					*ft_array_split(const char *s, char c);
t_array					*array_add(t_array *arr, void *value);
void					array_free(t_array **arr);
t_array					*array_insert(t_array *arr, void *value,
							unsigned int index);
t_array					*array_resize(t_array *arr, t_bool auto_resize);
void					*array_get(t_array *arr, unsigned int index);
void					*array_next(t_array *arr);
t_array					*array_new(size_t capacity, size_t size_change,
							size_t size_type, t_flags flags);
void					*ft_error(t_flags flags);
char					*ft_strndup(const char *s, size_t n);
t_array					*array_cpy(const t_array *src);

#endif
