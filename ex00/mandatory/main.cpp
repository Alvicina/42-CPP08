/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:00:59 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/26 10:40:27 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/EasyFind.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Please enter a value to be found" << std::endl;
		return (EXIT_FAILURE);
	}
	std::array<int, 6> intArray = {1, 2, 3, 4, 5, 6};
	return(::easyfind(intArray, std::atoi(argv[1])));
}