/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-rus <jde-rus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:06:45 by jde-rus           #+#    #+#             */
/*   Updated: 2014/12/17 21:26:49 by jde-rus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(const char *s);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putstr(const char *s);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putnbr(int num);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcpy_difc(char *dst, const char *src, char c);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s);
char	*ft_strdup_difc(char const *s, char c);
int		ft_strequ(const char *s1, const char *s2);
void	ft_striter(char *s, void(*f)(char *));
void	ft_striteri(char *s, void(*f)(unsigned int, char*));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
size_t	ft_strlen_difc(char const *s, char c);
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strnew(size_t size);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *src, const char *lookat);
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	**ft_strsplit(const char *s, char c);
char	*ft_strtrim(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
