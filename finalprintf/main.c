/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:53:23 by carmoren          #+#    #+#             */
/*   Updated: 2023/08/16 10:53:25 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int numero = 42;
    char *cadena = "¡Hola, mundo!";
    unsigned int num_no_signo = 12345;
    char caracter = 'A';
    size_t puntero = (size_t)&numero;

    printf("=== Valores originales ===\n");
    printf("Número entero: %d\n", numero);
    printf("Cadena: %s\n", cadena);
    printf("Número sin signo: %u\n", num_no_signo);
    printf("Carácter: %c\n", caracter);
    printf("Puntero: %p\n", puntero);

    printf("\n=== Valores APLICANDO PRINTF ===\n");
    int longitud = ft_printf("Número entero: %d\n", numero);
    longitud += ft_printf("Cadena: %s\n", cadena);
    longitud += ft_printf("Número sin signo: %u\n", num_no_signo);
    longitud += ft_printf("Carácter: %c\n", caracter);
    longitud += ft_printf("Puntero: %p\n", puntero);

    ft_printf("Total de caracteres impresos: %d\n", longitud);

    return 0;
}
