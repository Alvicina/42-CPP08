/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:24:38 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/26 16:33:51 by alvicina         ###   ########.fr       */
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

void	Span::addNumber(unsigned int const & N)
{
	if (this->_vector.size() >= this->_size)
		throw cannotAddMoreElements();
	else
		this->_vector.push_back(N);
}

int		Span::getValue(size_t index)
{
	if (index < _vector.size())
		return (_vector[index]);
	else
	{
		std::cerr << "Index is out of bounds" << std::endl;
		return (EXIT_FAILURE);
	}
}



std::vector<int>& Span::getVector()
{
	return (_vector);
}

unsigned int Span::shortestSpan() const
{
	if (this->_vector.size() <= 1)
		throw noSpanCanBeFound();
	else
		return (0);
}

unsigned int Span::longestSpan() const
{
	if (this->_vector.size() <= 1)
		throw noSpanCanBeFound();
	else
		return (0);
		
}

const char* Span::cannotAddMoreElements::what() const throw()
{
	return ("Cannot add more elements");
}

const char* Span::noSpanCanBeFound::what() const throw()
{
	return ("Cannot span");
}
