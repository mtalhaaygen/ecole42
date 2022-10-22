# LİBFT 
### ORGANIZING...
##### LIBC FUNCTİONS
| Function names | Prototype | Brief Descirption | Return value  |
| ------------- |:-------------:|:-------------:| -----:|
| [ft_isalpha](https://github.com/mtalhaaygen/libft/blob/master/ft_isalpha.c) | int ft_isalpha(int a); | verilen karakterin harf olup olmadığını kontrol eder | int |
| [ft_isdigit](https://github.com/mtalhaaygen/libft/blob/master/ft_isdigit.c) | int ft_isdigit(int a); |verilen karakterin sayı olup olmadığını kontrol eder | 0 or 1 |
| [ft_isalnum](https://github.com/mtalhaaygen/libft/blob/master/ft_isalnum.c) | int ft_isalnum(int a); |verilen karakterin alfanumerik olup olmadığını kontrol eder | 0 or 1 |
| [ft_isascii](https://github.com/mtalhaaygen/libft/blob/master/ft_isascii.c) | int ft_isascii(int a); |verilen karakterin ascii tableda olup olmadığını kontrol eder | 0 or 1 |
| [ft_isprint](https://github.com/mtalhaaygen/libft/blob/master/ft_isprint.c) | int ft_isprint(int a); |verilen karakterin yazdırılabilir karakter olup olmadığını kontrol eder | 0 or 1 |
| [ft_strlen](https://github.com/mtalhaaygen/libft/blob/master/ft_strlen.c) | size_t ft_strlen(const char *s); |verilen karakterdizisinin karakter sayısını döndürür | size_t |
| [ft_memset](https://github.com/mtalhaaygen/libft/blob/master/ft_memset.c) | void *ft_memset(void *s, int c, size_t n); | verilen dizinin ilk n baytını sabit bayt c ile doldurur. | void * |
| [ft_bzero](https://github.com/mtalhaaygen/libft/blob/master/ft_bzero.c) | void ft_bzero(void *s, size_t n); | verilen dizinin ilk n baytını 0 olarak ayarlar. | void |
| [ft_memcpy](https://github.com/mtalhaaygen/libft/blob/master/ft_memcpy.c) | void *ft_memcpy(void *dst, const void *src, size_t n); | src yi dest e kopyalar | void * |
| [ft_memmove](https://github.com/mtalhaaygen/libft/blob/master/ft_memmove.c) | void *ft_memmove(void *dst, const void *src, size_t	len) | memcpy den farkı olası overlap durumlarını engellemek için sondan başa doğru kopyalar | void * |
| [ft_strlcpy](https://github.com/mtalhaaygen/libft/blob/master/ft_strlcpy.c) | size_t	ft_strlcpy(char *dst, const char *src, size_t size); | src yi deste kopyalayıp destin sonunun null olmasını sağlar, srcnin uzunluğu return edilir | size_t |
| [ft_strlcat](https://github.com/mtalhaaygen/libft/blob/master/ft_strlcat.c) | size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); | src ve dsti birleştirir (dstsize ın mümkün kıldığı yere kadar) | size_t |
| [ft_toupper](https://github.com/mtalhaaygen/libft/blob/master/ft_toupper.c) | int ft_tolower(int c); | verlien bir karakteri küçük harften büyük harfe dönüştürüp return eder | int |
| [ft_tolower](https://github.com/mtalhaaygen/libft/blob/master/ft_tolower.c) | int ft_tolower(int c); | verlien bir karakteri büyük harften küçük harfe dönüştürüp return eder | int |
| [ft_strchr](https://github.com/mtalhaaygen/libft/blob/master/ft_strchr.c) | char *ft_strchr(const char *s, int c); | verilen karakter dizisindeki ilk c karakterini bulup return eder | char * |
| [ft_strrchr](https://github.com/mtalhaaygen/libft/blob/master/ft_strrchr.c) | char *ft_strrchr(const char *s, int c); | verilen karakter dizisindeki ilk c karakterini bulup return eder | char * |
| [ft_strncmp](https://github.com/mtalhaaygen/libft/blob/master/ft_strncmp.c) | int ft_strncmp(const char *s1, const char *s2, size_t n);  | verilen iki dizinin ilk n baytı karşılaştırılır, duruma göre sıfır pozitif veya negatif bir tam sayı return edilir | int |
| [ft_memchr](https://github.com/mtalhaaygen/libft/blob/master/ft_memchr.c) | void *ft_memchr(const void *s, int c, size_t n); | verilen karkater dizisinde c karakteri bulunup bellek adresi return edilir | void * |
| [ft_memcmp](https://github.com/mtalhaaygen/libft/blob/master/ft_memcmp.c) | int ft_memcmp(const void *s1, const void *s2, size_t n); | iki karakter dizisi karşılaştırılır, tamamen aynı ise sıfır değilse ikisinin farkı return edilir | int |
| [ft_strnstr](https://github.com/mtalhaaygen/libft/blob/master/ft_strnstr.c) | char *ft_strnstr(const char *haystack, const char *needle, size_t len); | bir karakter dizisinde başka bir karakter dizini arar | char * |
| [ft_atoi](https://github.com/mtalhaaygen/libft/blob/master/ft_atoi.c) | int	ft_atoi(const char *str); | verilen stringi inte dönüştürür | int |
| [ft_calloc](https://github.com/mtalhaaygen/libft/blob/master/ft_calloc.c) | void	*ft_calloc(size_t count, size_t size); | malloc ile yer açılır, oluşturulamazsa null return eder, oluşturulabilirse diziyi return eder | void * |
| [ft_strdup](https://github.com/mtalhaaygen/libft/blob/master/ft_strdup.c) | char *ft_strdup(const char *s1); | verilen karakter dizisinin size ı kadar malloc ile yer açılıp yeni oluşturulan karakter dizisine kopyalanıp, kopya return edilir  | char * |
##### EXTRA FUNCTİONS
| Function names | Prototype | Brief Descirption | Return value  |
| ------------- |:-------------:|:-------------:| -----:|
| [ft_substr](https://github.com/mtalhaaygen/libft/blob/master/ft_substr.c) | char *ft_substr(char const *s, unsigned int start, size_t len); |  qqq | char * |
##### BONUS FUNCTİONS
| Function names | Prototype | Brief Descirption | Return value  |
| ------------- |:-------------:|:-------------:| -----:|
| [ft_lstnew](https://github.com/mtalhaaygen/libft/blob/master/ft_lstnew.c) | t_list *ft_lstnew(void *content) |  parametre olarak verilen contenti yeni t_list tipinde değişke oluşturup onun contentine atar | t_list |
| [ft_lstadd_front](https://github.com/mtalhaaygen/libft/blob/master/ft_lstadd_front.c) | void ft_lstadd_front(t_list **lst, t_list *new); | listenin başına verilen yeni elemanı (new) ekler | void |
| [ft_lstsize](https://github.com/mtalhaaygen/libft/blob/master/ft_lstsize.c) | int ft_lstsize(t_list *lst); |  t_list listesinin sizeını döner | int |
| [ft_lstlast](https://github.com/mtalhaaygen/libft/blob/master/ft_lstlast.c) | t_list *ft_lstlast(t_list *lst); |  t_list listesinin son elemanını döner | t_list |
| [ft_lstadd_back](https://github.com/mtalhaaygen/libft/blob/master/ft_lstadd_back.c) | void ft_lstadd_back(t_list **lst, t_list *new); |  listenin sonuna verilen yeni elemanı (new) ekler | void |
| [ft_lstdelone](https://github.com/mtalhaaygen/libft/blob/master/ft_lstdelone.c) | void ft_lstdelone(t_list *lst, void (*del)(void*)); |  verilen elemanın contentine delfonksiyonunu uygular daha sonra elemanı freeler  | void |
| [ft_lstclear](https://github.com/mtalhaaygen/libft/blob/master/ft_lstclear.c) | void ft_lstclear(t_list **lst, void (*del)(void*)); | verilen t_list listesinin elemanlarını sırayla gezer ve delone yardımıyla siler | void |
| [ft_lstiter](https://github.com/mtalhaaygen/libft/blob/master/ft_lstiter.c) | void ft_lstiter(t_list *lst, void (*f)(void *)); |  Listenin üzerinde dolanır ve ‘f’ fonksiyonunu listenin her elemanının contentine uygular. | void |
| [ft_lstmap](https://github.com/mtalhaaygen/libft/blob/master/ft_lstmap.c) | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); | verilen fonksiyonu verilen t_listin bütün elemanlarının içeriklerine uygulayıp yeni bir t_list dizisine bunları ekler, yeni diziyi return eder | t_list |