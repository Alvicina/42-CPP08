/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:43:00 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/26 18:58:01 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main(void)
{
	try
	{
		Span miVector(5);

		miVector.addNumber(6);
		miVector.addNumber(3);
		miVector.addNumber(17);
		miVector.addNumber(9);
		miVector.addNumber(11);
		//miVector.addNumber(20);

		std::cout << "----------- Test 1 --------------" << std::endl;
		for (size_t	i = 0; i < miVector.getVector().size(); i++)
			std::cout << miVector.getValue(i) << " ";
		
		std::cout << std::endl;
		std::cout << "shortest span: " << miVector.shortestSpan() << std::endl;
		std::cout << "longest span: " << miVector.longestSpan() << std::endl;
		std::cout << "----------- Test 2 --------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
	
	try
	{
		std::vector<int> aitor(10500);
		std::srand(time(NULL));
		std::generate(aitor.begin(), aitor.end(), rand);
		
		Span miVector(aitor.size());
		miVector.addNumber(aitor.begin(), aitor.end());
		std::cout << "shortest span: " << miVector.shortestSpan() << std::endl;
		std::cout << "longest span: " << miVector.longestSpan() << std::endl;
		
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	
	
	return (EXIT_SUCCESS);
	
}