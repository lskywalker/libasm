/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 19:18:35 by lsmit         #+#    #+#                 */
/*   Updated: 2020/10/26 16:06:33 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int		main(void)
{
	// char	*s1 = malloc(sizeof(char) * 1312);
	// char	*s2 = malloc(sizeof(char) * 1312);
	char	*s1 = malloc(sizeof(char) * 13);
	char	*s2 = malloc(sizeof(char) * 13);
	char    *s3 = malloc(sizeof(char) * 13);
    char    *s4 = malloc(sizeof(char) * 13);
	char    *buf1 = malloc(sizeof(char) * 250);
    char    *buf2 = malloc(sizeof(char) * 250);
	s2 = "Hallo hoeren";
	s3 = "dc";
    s4 = "xe";

	// s2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?";
	printf ("\n\e[33mFT_STRLEN:\n\e[39m");
	printf("emptystring my[%i], og[%lu]\n", ft_strlen(""), strlen(""));
	printf("very long string my[%i], og[%lu]\n", ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?"), strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?"));
	
	printf("\n\e[33mFT_STRCPY:\n\e[39m");
	printf("empty string MY: [%s]\n", ft_strcpy(s1, ""));
	printf("empty string OG: [%s]\n", strcpy(s1, ""));
	printf("very long string MY: [%s]\n", ft_strcpy(s1, s2));
	printf("very long string OG: [%s]\n", strcpy(s1, s2));

	printf("\n\e[33mFT_STRCMP:\n\e[39m");
	printf("strcmp = [%d]\n", strcmp(s3, s4));
    printf("ft_strcmp = [%d]\n", ft_strcmp(s3, s4));
    printf("strcmp = [%d]\n", strcmp("123456789", "123456788"));
    printf("ft_strcmp = [%d]\n", ft_strcmp("123456789", "123456788"));
    s1 = 0;
    free(s1);
    s1 = malloc(sizeof(char) * 10);
	s1 = "kaas";
    printf("strcmp = [%d]\n", strcmp(s1, s3));
    printf("ft_strcmp = [%d]\n", ft_strcmp(s1, s3));
    printf("strcmp = [%d]\n", strcmp(s3, s1));
    printf("ft_strcmp = [%d]\n", ft_strcmp(s3, s1));

	printf("\n\e[33mFT_WRITE:\e[39m\n");
	ft_write(1, "write = ", 8);
    int a = write(1, "Hello world!\n", 13);
    ft_write(1, "ft_write = ", 11);
    int b = ft_write(1, "Hello world!\n", 13);
    printf("return write = [%d]\nreturn ft_write = [%d]\n", a, b);
    a = write(FOPEN_MAX + 1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	perror("write errno");
	// errno = 100;
    b = ft_write(FOPEN_MAX + 1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	perror("ft_write errno");
    printf("return write = [%d]\nreturn ft_write = [%d]\n", a, b);
	a = write(1, 0, 9);
	perror("write errno");
	// errno = 100;
    b = ft_write(1, 0, 9);
	perror("ft_write errno");
    printf("return write = [%d]\nreturn ft_write = [%d]\n", a, b);

	printf("\n\e[33mFT_READ:\n\e[39m");
	int fd = open("ft_read.s", O_RDONLY);
    a = read(fd, buf1, 250);
    close(fd);
    fd = open("ft_read.s", O_RDONLY);
    b = ft_read(fd, buf2, 250);
    printf("return read = [%d]\nreturn ft_read = [%d]\n", a, b);
    a = read(333, buf1, 250);
	perror("read errno");
    b = ft_read(333, buf2, 250);
	perror("ft_read errno");
    printf("return read = [%d]\nreturn ft_read = [%d]\n", a, b);
    close(fd);
    fd = open("ft_read.s", O_RDONLY);
    buf1 = 0;
    buf2 = 0;
    a = read(fd, buf1, 250);
	perror("read errno");
    b = ft_read(fd, buf2, 250);
	perror("ft_read errno");
    printf("return read = [%d]\nreturn ft_read = [%d]\n\n", a, b);

	printf("\e[33mFT_STRDUP:\n\e[39m");
	printf("strdup = [%s]\n", strdup("Hello world!"));
    printf("ft_strdup = [%s]\n", ft_strdup("Hello world!"));
    printf("strdup = [%s]\n", strdup(""));
    printf("ft_strdup = [%s]\n", ft_strdup(""));
	return (0);
}
