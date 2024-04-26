/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:10:39 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/26 10:42:57 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
int	easyFind(T const & container, int toFind)
{
	if ( std::find(container.begin(), container.end(), toFind) != container.end())
	{
		std::cout << "Value found" << std::endl;
		return (EXIT_SUCCESS);
	}
		
	else
	{
		std::cerr << "Value not found" << std::endl;
		return (EXIT_FAILURE);
	}
}

