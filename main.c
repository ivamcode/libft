//---------MAIN OF FUNCTIONS OF LIBFT--------//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

//Main ft_memset
/*
int 	main()
{
	int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int	c = 35;
	int i = 0;

	ft_memset (b, c, 12);
	printf("------------\n");
	while (i < 10)
	{
		printf("%d ", b[i]);
		printf("%p\n", &b[i]);
		++i;
	}
	return (0);
}
*/

//Main ft_bzero
/*
int		main()
{
	void	*s;
	size_t	n;

	s = "Hello World";
	n = 3;
	ft_bzero(s, n);
	return (0);
}
*/

//Main ft_stlcat
/*
--unsigned int ft_strlcat(char *dest, char *src, size_t dstsize);

int		main()
{
	char src[20] = " World";
	char dst[12] = "Hello";
	//size_t ret;
	size_t dstsize;

	dstsize = 9;
	//ret = strlcat(dest, src, size);
	//printf("The substring is: %d\n", ret);
	printf("The substring 2 is: %d\n", ft_strlcat(dst, src, dstsize));
	printf("The substring 2 is: %s\n", dst);
	return (0);
}
*/

//Main ft-split
/*
 int 	main(void)
{
	int i = 0;
	char c = 'o';
	char **tab;

	tab = ft_split("bonjour je m'appel Arthur", c);
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
 */

//Main ft_putendl_fd
/*
34 int main(int argc, char **argv)
 35 {
 36     int fd;
 37     char *s = "hola danrodri";
 38
 39     if (argc == 2)
 40     {
 41         fd = open(argv[1], O_WRONLY);
 42         ft_putendl_fd(s, fd);
 43     }
 44     return (0);
 45 }
 */

//Main ft_putnbr_fd
/*
35 int main(int argc, char **argv)
 {
     int fd;
 
	 if (argc == 3)
     {
	 	fd = open(argv[1], O_WRONLY);
		 ft_putnbr_fd(atoi(argv[2]), fd);
		 close(fd);
	}
 	return (0);
 }
 */

//Main ft_strtrim
/*int		main(int argc, char **argv)
{
	char const *s1;
	char const *set;
	char *s;

	if (argc == 3)
	{
		s1 = argv[1];
		set = argv[2];
		s = ft_strtrim(s1, set);
		printf("%s\n", s);
		free(s);
	}
	return (0);
}*/

//Main ft_split
/*
int		main(int argc, char **argv)
{
	char const	*s;
	char		c;
	char **tab;
	(void)argc;
	int i = 0;

	s = argv[1];
	c = *argv[2];
	tab = ft_split(s, c);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
 */


/*
#include "libft.h"
#include <stdio.h>

static char	*ft_malloc_row(char const *s, char c, char *tab_row)
{
	int	c_letter;

	c_letter = 0;
	while (s[c_letter] && s[c_letter] != c)
		++c_letter;
	printf("c_letter: %d\n", c_letter);
	if (!(tab_row = malloc(sizeof(char) * (c_letter + 1))))
		return (0);
	return (tab_row);
}

static char	*ft_copy_row(char const *s, char c, char *tab_row)
{
	int	c_letter;

	c_letter = 0;
	while (s[c_letter] && s[c_letter] != c)
	{
		tab_row[c_letter] = s[c_letter];
		++c_letter;
	}
	printf("c_letter2: %d\n", c_letter);
	tab_row[c_letter] = 0;
	return (tab_row);
}

static int	ft_size_tab(char const *s, char c)
{
	int	i;
	int	c_words;

	i = 0;
	c_words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			++c_words;
		++i;
	}
	printf("c_words: %d\n", c_words);
	return (c_words);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		row;

	if (!s)
		return (0);
	row = 0;
	if (!(tab = malloc(sizeof(char *) * (ft_size_tab(s, c) + 1))))
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			if (!(tab[row] = ft_malloc_row(s + i, c, tab[row])))
				return (0);
			tab[row] = ft_copy_row(s + i, c, tab[row]);
			++row;
		}
		++i;
	}
	tab[row] = 0;
	return (tab);
}
int		main(int argc, char **argv)
{
	char const	*s;
	char		c;
	char **tab;
	(void)argc;
	int i = 0;

	s = argv[1];
	c = *argv[2];
	tab = ft_split(s, c);
	while (tab[i])
	{
		printf("%s\ndireccion: %p\n", tab[i], tab[i]);
		i++;
	}
	printf("i: %d, p: %p, s: %s\n", i, tab[i], tab[i]);
	i = 0;
	while (tab[i])
	{
		printf("i: %d, p: %p\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	printf("asd\n");
	free(tab);
}
 */
