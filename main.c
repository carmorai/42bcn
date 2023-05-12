/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:30:12 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/11 18:29:01 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

//STRRCHR - busca el carácter desde el final de la cadena hacia el inicio
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
}



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




/*ESTUDIAR MEMMOVE - 
int main(void)
{
	char src[] = "Hello, world!";
    char dst[20];

    ft_memmove(dst, src, sizeof(src));

    printf("dst: %s", dst);

    return 0;
}*/
/*MEMCPY - COPIA DE MEMORIA
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

/*FUNCIÓN BZERO - PONE CEROS
int main(void)
{
    char str[5] = "HOLA";

    printf("Antes del ft_bzero: %s\n", str);

    ft_bzero(str, sizeof(str));

    printf("Después del ft_bzero: %s\n", str);

    return 0;
}*/




/*FUNCION MEMSET - PONE CUALQUIER NUMERO O CARACTER EN UNA ARRAY INICIALIZANDO ASI LA ARR
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
}
*/
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

/*FUNCIÓN ISALPHA - COMPRUEBA SI ES ALFABETO O NO
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
