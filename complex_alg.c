/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_alg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 23:02:52 by paduarte          #+#    #+#             */
/*   Updated: 2026/06/03 22:14:42 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Vamos a trabajar con indices y su representacion interna en bits 
(SOCORRO)

((n >> k) & 1) -> dime si el bit 'k' de 'n' es par o impar. 
mientras haya bits:
{
    si bit == 0
        pb
    si bit == 1
        ra
} 
        
  ----

  max_bits = número de bits del indice mas grande

    bit = 0

    mientras bit < max_bits

        size = tamaño original de stack_a

        repetir size veces

            si el bit actual del primer nodo es 0
                pb
            si no
                ra

        mientras stack_b no esté vacio
            pa

        bit++
 
*/