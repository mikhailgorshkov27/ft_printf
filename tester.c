/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgorshko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:36:06 by mgorshko          #+#    #+#             */
/*   Updated: 2024/12/06 17:29:26 by mgorshko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "stdio.h"

int	main()
{
	int a;
	int b;
//test %c
	printf("test i \n");
	a = ft_printf("%c, Hello %c and %c!\n", 'C', 'M', 'N');
	printf("len = %d\n", a);
	b =	printf("%c, Hello %c and %c!\n", 'C', 'M', 'N');
	printf("len = %d\n", b);

//test %s
	printf("\ntest i \n");
	a = ft_printf("%s Hello %s and %s!\n", "Sir", "I wish you the best", "happiest");
	printf("len = %d\n", a);
	b = printf("%s Hello %s and %s!\n", "Sir", "I wish you the best", "happiest");
	printf("len = %d\n", b);
	
//test %i
	printf("\ntest i \n");
	a = ft_printf("%i Hello %i and %i\n", 123, -2147483648, 2147483647);
	printf("len = %d\n", a);
	b = printf("%i Hello %i and %i\n", 123, (int)-2147483648, 2147483647);
	printf("len = %d\n", b);
	
}
