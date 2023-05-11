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
#include "libft.h"

//FUNCION MEMSET - PONE CEROS INICIALIZANDO ASI ARRAYS
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
}

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
