/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:24:38 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/26 11:40:56 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span()
{
	
}

Span::~Span()
{
	
}

Span::Span(unsigned int const & N) : _size(N)
{
	
}

Span::Span(Span const & a)
{
	*this = a;
}

Span& Span::operator=(Span const & a)
{
	if (this != &a)
	{
		_vector = a._vector;
		_size = a._size;
	}
	return (*this);
}