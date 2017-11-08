/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:03:10 by stoure            #+#    #+#             */
/*   Updated: 2017/07/13 20:43:59 by stoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <time.h>

void ft_takes_place(int hour)
{
	int y;
	
	y = hour + 1;
	
	if(hour < 11 && hour > 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 AM AND %d.00 AM\n\n", hour, y);
	if(hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 AM AND 12.00 PM\n\n");
	if(hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 PM AND 01.00 PM\n\n");
	if(hour == 24 || hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 AM AND 01.00 AM\n\n");
	if(hour > 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 PM AND %d.00 PM\n\n", hour -12, y -12);
}
int main(void)
{
	ft_takes_place(15);
	return(0);
}
