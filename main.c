/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:30:12 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/13 16:50:11 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

/* ft_putstr_fd
int main()
{
    char *str = "Hello, world!";
    int fd = 1; // File descriptor 1 represents stdout

    ft_putstr_fd(str, fd);

    return 0;
}*/

/* ftputchar_fd - que se encarga de escribir un carácter en un descriptor de archivo especificado. Toma dos parámetros: el carácter c que se desea escribir y el descriptor de archivo fd donde se realizará la escritura. 
void	ft_putchar_fd(char c, int fd)
{
	if (fd)
		write(fd, &c, 1);
}

int	main(void)
{
	char c = 'A';
	int fd = 1; // Descriptor de archivo estándar para la salida estándar (stdout)

	ft_putchar_fd(c, fd);

	return 0;
}*/

/*striteri - es una función que te permite recorrer una cadena de caracteres y aplicar una función personalizada a cada carácter, dándote la flexibilidad de realizar cualquier operación deseada en cada uno de ellos - no genera una tercera cadena, ya que opera directamente sobre la cadena original, modificando sus caracteres en su lugar.
void	ft_modify_char(unsigned int index, char *c)
{
	if (index % 2 == 0)
		*c = ft_toupper(*c);
	else
		*c = ft_tolower(*c);
}

int	main(void)
{
	char str[] = "Hello, World!";
	
	printf("Original string: %s\n", str);
	ft_striteri(str, ft_modify_char);
	printf("Modificada la string: %s\n", str);

	return 0;
}*/

/*ft_strmapi - permite aplicar una transformación personalizada a cada carácter de una cadena y obtener una nueva cadena modificada como resultado.
char	ft_modify_char(unsigned int index, char c)
{
	return (index % 2 == 0) ? ft_toupper(c) : ft_tolower(c);
}

int main()
{
	char *str = "Hello, World!";
	char *modified_str = ft_strmapi(str, ft_modify_char);
	
	printf("Original String: %s\n", str);
	printf("Modified String: %s\n", modified_str);
	
	free(modified_str);
	return 0;
}*/

/*itoa - La función toma un número entero n como argumento y devuelve un puntero a una cadena de caracteres que representa ese número.
int main()
{
    int num = -12345;
    char *str = ft_itoa(num);
    printf("Number: %d\n", num);
    printf("String: %s\n", str);
    free(str);
    return 0;
}*/

/*split - toma una cadena de caracteres s y un carácter delimitador c y divide la cadena en una matriz de cadenas. Cada cadena en la matriz es un segmento de la cadena original que está delimitado por el carácter c.
int main(void) {
    const char *str = "Hello-World-How-Are-You";
    char delimiter = '-';
    
    char **result = ft_split(str, delimiter);
    if (result) {
        int i = 0;
        while (result[i]) {
            printf("Palabra %d: %s\n", i + 1, result[i]);
            i++;
        }
    } else {
        printf("Error: Fallo al asignar memoria para el resultado.\n");
    }
    
    return 0;
}*/

/*ft_strtrim - elimina los caracteres especificados en el conjunto set al principio y al final de la cadena s1 y devuelve una nueva cadena resultante sin esos caracteres.
int main(void) {
    const char *str1 = "----Hello, World!-----";
    const char *set = "-";

    char *trimmed = ft_strtrim(str1, set);
    if (trimmed) {
        printf("Cadena recortada: \"%s\"\n", trimmed);
        free(trimmed);
    } else {
        printf("Error: Fallo al asignar memoria para la cadena recortada.\n");
    }

    return 0;
}*/

/*strjoin - concatena dos cadenas de caracteres y devuelve una nueva cadena que contiene la concatenación de ambas cadenas
int main(void) {
    const char *str1 = "¡Hola, ";
    const char *str2 = "mundo!";
    
    char *resultado = ft_strjoin(str1, str2);
    if (resultado) {
        printf("Cadena unida: %s\n", resultado);
        free(resultado);
    } else {
        printf("Error: Fallo al asignar memoria para la cadena unida.\n");
    }
    
    return 0;
}*/

/*dupstr -  toma una cadena de entrada s, una posición inicial start y una longitud len, y devuelve una subcadena extraída de s que comienza en la posición start y tiene una longitud de len.

int main(void) {
    const char *str = "Hola, mundo!";
    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(str, start, len);
    if (substring) {
        printf("Substring: %s\n", substring);
        free(substring);
    } else {
        printf("No se ha podido asignar memoria a la subcadena\n");
    }

    return 0;
}*/

/*strdup - . Toma una cadena de entrada y crea una copia exacta de esa cadena en un nuevo bloque de memoria asignado dinámicamente.
int main(void)
{
    const char *original = "Hola, mundo!";
    char *duplicate = ft_strdup(original);

    if (duplicate == NULL)
    {
        printf("Error al duplicar la cadena.\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Duplicado: %s\n", duplicate);

    free(duplicate);

    return 0;
}*/


/*calloc
int main(void)
{
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    int *numbers = (int *)ft_calloc(num_elements, element_size);
    if (numbers == NULL)
    {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    for (size_t i = 0; i < num_elements; i++)
    {
        printf("%d ", numbers[i]); // Los elementos se inicializan en cero
    }
    printf("\n");

    free(numbers);

    return 0;
}*/

/*atoi - convierte una cadena de caracteres que representa un número entero en su equivalente numérico de tipo int
int main(void)
{
	const char *str = " 88";
	int result = ft_atoi(str);
	printf("El resultado de la conversión es: %d\n", result);
	return 0;
}*/


/*strnstr - busca la primera aparición de una subcadena dentro de una cadena principal, pero limita la búsqueda a los primeros len caracteres de la cadena principal. Si la subcadena se encuentra dentro de ese límite, la función devuelve un puntero al inicio de la subcadena encontrada. Si no se encuentra, la función devuelve NULL 
int main(void)
{
    const char *haystack = "Hello, world!";
    [Iconst char *needle = "worldsd";
    char *result = ft_strnstr(haystack, needle, 13);

    if (result != NULL)
        printf("Se encontró la subcadena '%s' en '%s'\n", needle, haystack);
    else
        printf("No se encontró la subcadena '%s' en '%s'\n", needle, haystack);

    return 0;
}*/

/*memcmp - compara dos bloques de memoria
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result = ft_memcmp(str1, str2, 5);
    
    if (result == 0)
        printf("Los primeros 5 caracteres de str1 y str2 son iguales.\n");
    else if (result < 0)
        printf("Los primeros 5 caracteres de str1 son menores que los de str2.\n");
    else
        printf("Los primeros 5 caracteres de str1 son mayores que los de str2.\n");
    
    return 0;
}*/

/*memchr - busca un carácter específico dentro de un bloque de memoria. Su propósito es encontrar la posición de memoria en la que se encuentra un byte determinado. Utiliza para buscar la primera aparición de un byte específico en un bloque de memoria, NO UN CARACTER COMO SI PASA EN STRCHR QUE BUSCA UN CARACTER EN UNA CADENA DE CARACTERES, AQUÍ ESTAMOS BUSCANDO BYTES.
int main(void) {
    char str[] = "Hello, world!";
    char searchChar = 'o';
    
    // Buscar la primera aparición de 'o' en str
    char *result = ft_memchr(str, searchChar, sizeof(str));
    
    if (result != NULL) {
        printf("Se encontró el carácter '%c' en la posición %ld.\n", searchChar, result - str);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", searchChar);
    }
    
    return 0;
}*/

/*strncmp - compara 2 cadenas de caracteres. Si son iguales, si una es mayor que la otra o si son diferentes hasta cierto número de caracteres especificado.
int main(void) {
    const char *s1 = "Hdasaslo";
    const char *s2 = "Hel";
    int n = 6;

    int result = strncmp(s1, s2, n);

    if (result == 0) {
        printf("Las primeras %d letras de s1 y s2 son iguales.\n", n);
    } else if (result < 0) {
        printf("Las primeras %d letras de s1 son mayores que las de s2.\n", n);
    } else {
        printf("Las primeras %d letras de s1 son menores que las de s2.\n", n);
    }

    return 0;
}*/


/*STRRCHR - busca el carácter desde el final de la cadena hacia el inicio
int main(void) {
    const char* str = "Esta frase es una prueba, hola";
    int ch = 'o';
    char* result = ft_strrchr(str, ch);
    
    if (result != NULL) {
        printf("Caracter '%c' encontrado en la posición: %ld\n", ch, result - str);
    } else {
        printf("Caracter '%c' no encontrado\n", ch);
    }
    
    return 0;
}*/

/*STRCHR - busca el carácter desde el inicio de la cadena hasta el final
int main(void) {
    const char* str = "Esta es la cadena";
    int ch = 'd';
    char* result = ft_strchr(str, ch);
    
    if (result != NULL) {
	printf("La cadena es '%s'\n", str);
        printf("Caracter '%c' encontrado en la posición: %ld\n", ch, result - str);
    } else {
        printf("Caracter '%c' no encontrado\n", ch);
    }
    
    return 0;
}*/

/* tolower: es al revés del toupper - lo convierte a minúcula
int main(void) {
    char uppercase = 'A';
    char lowercase = ft_tolower(uppercase);
    
    printf("La mayúscula: %c\n", uppercase);
    printf("La pasamos a minúscula: %c\n", lowercase);
    
    return 0;
}*/

/* TOUPPER - SI LE PASAMOS MINUSCULA, LO PONE MAYUSCULA Y AL REVÉS
int main(void) {
    char lowercase = 'a';
    char uppercase = ft_toupper(lowercase);
    
    printf("La minúcula: %c\n", lowercase);
    printf("La pasamos a Mayúscula: %c\n", uppercase);

    return 0;
}*/

/*strlcat - FUNCIÓN QUE ANEXA DOS ARRAYS
int main(void) {
    char dest[20] = "HOLA";
    const char* src = " MUNDO";
    size_t size = 20;
    size_t result = ft_strlcat(dest, src, size);
    
    printf("longitud: %lu\n", result);
    printf("Unión strings: %s\n", dest);
    
    return 0;
}*/

/*ESTUDIAR funcion STRLCPY - COPIA UNA ARRAY EN OTRa
int main(void)
{
    char src[] = "Hello, world!";
    char dst[20];

    size_t len = ft_strlcpy(dst, src, sizeof(dst));

    printf("Copied string: %s\n", dst);
    printf("Length: %zu\n", len);

    return 0;
}*/

/*ESTUDIAR MEMMOVE - lo mismo que memcpy pero tiene en cuenta la superposición
int main(void)
{
	char src[] = "Hello, world!";
    char dst[20];

    ft_memmove(dst, src, sizeof(src));

    printf("dst: %s", dst);

    return 0;
}*/
/*MEMCPY - se utiliza para copiar un bloque de memoria de una ubicación a otra. No tiene en cuenta superposición
int main(void)
{
    char src[] = "Hello, world!";
    char dst[sizeof(src)];

    printf("Antes de ft_memcpy:\n");
    printf("src: %s\n", src);
    printf("dst: %s\n", dst);

    ft_memcpy(dst, src, sizeof(src));

    printf("Después de ft_memcpy:\n");
    printf("src: %s\n", src);
    printf("dst: %s\n", dst);

    return 0;
}*/

/*FUNCIÓN BZERO - establecer todos los bytes de un bloque de memoria en cero (es decir, establecerlos en '\0')- EL 2 PARAMETRO: es el número de bytes que se deben establecer en cero
int main(void)
{
    char str[5] = "HOLA";

    printf("Antes del ft_bzero: %s\n", str);

    ft_bzero(str, sizeof(str));

    printf("Después del ft_bzero: %s\n", str);

    return 0;
}*/

/*FUNCION MEMSET -  establecer los bytes de un bloque de memoria en un valor específico
int main(void)
{
    char buffer[4]; // Un bloque de memoria de 4 bytes
    
    ft_memset(buffer, 0, sizeof(buffer)); // Llenamos el bloque de memoria con el valor 0
    
    // Imprimimos el contenido del bloque de memoria
    for (size_t i = 0; i < sizeof(buffer); i++)
    {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}*/

/*FUNCION ISPRINT - 1 el caracter es imprimible(32 a 127) y 0 no lo es
int main(void)
{
	int ch = 17;
	int result = ft_isprint(ch);
	if (result == 1)
	{	
		printf("%d es un caracter imprimible.\n", ch);
	}
	else
	{
		printf("%d no es un caracter imprimible.\n", ch);
	}

	return 0;
}*/

/*FUNCION ISASCII - 1 el caracter es ascii(0-127) y 0 no lo es
int main(void)
{
	int ch = 127;
	if (ft_isascii(ch))
	{	
		printf("%d es un valor ASCII válido.\n", ch);
	}
	else
	{
		printf("%d no es un valor ASCII válido.\n", ch);
	}

	return 0;
}*/

/*FUNCIÓN ISALNUM - TEXTO O NUMEROS(1), CUALQUIER OTRO(0)
int main(void)
{
    int result1 = ft_isalnum('c');
    int result2 = ft_isalnum('1');
    int result3 = ft_isalnum('*');

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);

    return 0;
}*/

/*FUNCIÓN ISDIGIT - DIGITOS DEL 0 AL 9(1) Y OTROS(0)
int main(void) 
{
   char digit;
   digit = 'a';

   if(ft_isdigit(digit))
	printf("Eil %c es un dígito", digit);
   else
	printf("El %c no es un dígito", digit);
   
   return(0);

}*/

/*FUNCIÓN ISALPHA - COMPRUEBA SI ES ALFABETO O NO (a - z y A - Z)
int main(void)
{
    char c1 = 'a';
    char c2 = 'Z';
    char c3 = '0';

    if (ft_isalpha(c1))
        printf("%c Es un caracter del alfabeto.\n", c1);
    else
        printf("%c No es caracter del alfabeto.\n", c1);

    if (ft_isalpha(c2))
        printf("%c Es alfabeto.\n", c2);
    else
        printf("%c No es alfabeto.\n", c2);

    if (ft_isalpha(c3))
        printf("%c Es alfabeto.\n", c3);
    else
        printf("%c No es alfabeto.\n", c3);

    return (0);
}*/

/*FUNCION STRLEN-CUENTA LOS CARACTERES DE UNA ARRAY
int	main(void)
{
	char	cadena[] = "holaEsto es";
	size_t	longitud;

	longitud = ft_strlen(cadena);
	printf("La longitud de la cadena \"%s\" es: %d\n", cadena, longitud);
	return (0);
}*/
