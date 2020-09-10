#include "libft.h"



int main(void)

{

	//char *keke; (char *)malloc(440 * sizeof(char));
	char *pepe;
       	//char *juli = "pepito";
	//juli[6] = '\0';
	const char juli[6] = "julito";
	char *jose = "joseleito";
	pepe = (char *)malloc(6 + 1 * sizeof(char));
	if (!pepe)
		return (0);

	char dst[50];
	char src[8] = "milotoco";
	char dst1[156] = "loquito";


	int b = 97;

	ft_bzero((void *)pepe, 7);
	
	ft_bzero(pepe, 3);

	ft_calloc(20, sizeof(char));

	ft_calloc(0, 50);

	ft_memccpy(dst, src, b, 8);

	ft_memchr(dst, b, 8);

	ft_memchr(src, b, 8);

	ft_memcmp(dst, src, 8);

	ft_memcpy(dst, src, 8);

	ft_memmove(dst, src, 8);

	ft_memmove(src, dst, 8);

	ft_memset(dst, b, 8);

	// Error nose xq
	//ft_memset(src, b, 8);

	ft_putchar_fd(b, 0);

	ft_putchar_fd(b, 1);

	ft_putchar_fd(b, 2);

	ft_putendl_fd(src, 0);

	ft_strchr(dst, b);
	
	//error nose porque ni si me lo tira molinete
	//ft_strchr(src, b);
	
	// error nose porque ni si me lo tira molinete
	//ft_strrchr(src, b);

	ft_strrchr(dst, b);

	ft_strncmp(dst1, src, 8);

	ft_strncmp(dst, src, 8);

	ft_atoi(0);

	ft_atoi("");

	ft_atoi("aaa77");

	ft_atoi(NULL);

	ft_strdup(NULL);

	ft_strdup("");

	ft_strdup("1");

	ft_strdup("NULL");
	
	//ft_strnstr(NULL, "paco", 5);

	//ft_strnstr(NULL, "paco", 0);

	//ft_strnstr(NULL, NULL, 0);
	
	ft_strnstr("paco", "paco", 0);
	
	//ft_strnstr("", NULL, 0);

	//ft_strnstr("NULL", "", 9);

	ft_strnstr("pedro", "pe", 5);
	
	ft_strnstr("perrito rojo lobo gris", "NULL", 1); 
	
	// error nose xq
	//ft_strlcat(jose, juli, 13);
	
	// error nose xq
	//ft_strlcat(dst, src, 8);

	ft_strlcat(dst, src, 4);

	ft_strtrim(NULL, NULL);

	ft_strtrim("hola", "hola");

	ft_strtrim("\0", "\0");

	ft_strtrim("hola", "\0");

	ft_substr(NULL, 0, 0);

	ft_substr(NULL, 0, 1);

	ft_substr(NULL, 1, 0);

	ft_strjoin(NULL, NULL);

	ft_strjoin(NULL, "  ");

	ft_strjoin("  ", NULL);

	ft_split("  ", 0);

	ft_split(NULL, 0);

	ft_split("\0", '\0');

	ft_itoa(1);

	ft_itoa(0);

	ft_strmapi(NULL, NULL); 
	
	ft_strmapi("teleco", NULL);
}

