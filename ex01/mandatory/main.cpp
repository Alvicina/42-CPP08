/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:43:00 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/26 16:01:59 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main(void)
{
	Span miVector(5);

	miVector.addNumber(1);
	miVector.addNumber(2);
	miVector.addNumber(3);
	miVector.addNumber(4);
	miVector.addNumber(5);

	for (size_t	i = 0; i < miVector.getVector().size(); i++)
		std::cout << miVector.getValue(i) << std::endl;
	return (EXIT_SUCCESS);
}