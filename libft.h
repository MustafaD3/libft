/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:28:36 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/21 18:16:09 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> // don't forget this line it will be delete
# include <string.h> // don't forget this line it will be delete

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
} t_list;

int		ft_isalpha(int i);//Harf Kontrolu
int		ft_isdigit(int i);//Rakam Kontrolu
int		ft_isalnum(int i);//Harf Ve Rakam Kontrolu
int		ft_isascii(int i);//Ascii Karakter Kontrolu
int		ft_isprint(int i);//Yazdırılabilir Karakterler \0 Haric
int		ft_toupper(int i);//Harf Büyütme
int		ft_tolower(int i);//Harf Küçültme
int		ft_strncmp(const char *s1, const char *s2, size_t n);//2 Karakter Dizisini N Kadar Kontrol Etme
int		ft_atoi(const char *nptr);//Karakter Dizisini Integera Cevirme 
size_t	ft_strlen(const char *s);//Karakter Dizisi Uzunluğu Bulma
size_t	ft_strlcpy(char *d, const char *s, size_t len);//Hedeften Kaynaga Belirtilen Uzunluga Kadar Kopyalama
size_t	ft_strlcat(char *d, const char *s, size_t len);//Hedeften Kaynaga Belirtilen Uzunluga Kadar Kopyalama strlcpy ile farkı bu fonksiyon hedefin içerisinde karakter var ise en son karakterden itibaren kopyalama yapar verilen uzunluk hedef uzunlugundan kucuk ise kopyalama yapmaz
char	*ft_strchr(const char *s, int c);//Karakter Dizisi İçinde Belirtilen Karakteri Arar
char	*ft_strrchr(const char *s, int c);//Karakter Dizisi İçinde Belirtilen Uzunluk Kadar Arama Yaparak Belirtilen Karakteri Arar 
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char 	*ft_strdup(const char *s);
char 	*ft_substr(char const *s, unsigned int start,size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char 	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);//Belirtilen Hafızada İtibaren Belirtilen Adet Kadar Atlama Yaparak Belirtilen Karakteri Arar
void	*ft_memcpy(void *dest, const void *src, size_t n);
void 	ft_bzero(void *s, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);//Yeni Node Oluşturma
void 	ft_lstadd_front(t_list **lst, t_list *new);//Node un Başına Kopyala başta node varsa onu kaydır
int		ft_lstsize(t_list *lst);//Listedeki Node Adedini Bulur
t_list	*ft_lstlast(t_list *lst);//Son Node Bul Ve Döndür
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void 	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
#endif