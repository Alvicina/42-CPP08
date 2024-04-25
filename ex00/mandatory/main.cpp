/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:00:59 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/25 19:06:40 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/EasyFind.hpp"

int	main(int argc, char **argv)
{
	std::array<int, 6> intArray = {1, 2, 3, 4, 5, 6};

	::easyfind(intArray, std::atoi(argv[1]));
}