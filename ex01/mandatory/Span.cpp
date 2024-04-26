/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:24:38 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/26 18:52:13 by alvicina         ###   ########.fr       */
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

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_vector.size() >= this->_size)
		throw cannotAddMoreElements();
	else
		this->_vector.insert(_vector.begin(), begin, end);
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
	std::vector<int>::const_iterator itA;
	std::vector<int>::const_iterator itB;
	int min;
	
	min = this->longestSpan();
	for (itA = _vector.begin(); itA != _vector.end(); itA++)
	{
		for (itB = _vector.begin(); itB != _vector.end(); itB++)
		{
			if (itB == itA)
				continue;
			if (std::abs(*itB - *itA) < min)
				min = std::abs(*itB - *itA);
		}
	}
	return (min);
}

unsigned int Span::longestSpan() const
{
	if (this->_vector.size() <= 1)
		throw noSpanCanBeFound();
	std::vector<int>::const_iterator	maxElement; 
	std::vector<int>::const_iterator	minElement; 					
		
	maxElement = std::max_element(_vector.begin(), _vector.end());
	minElement= std::min_element(_vector.begin(), _vector.end()); 
	return (*maxElement - *minElement);
}

const char* Span::cannotAddMoreElements::what() const throw()
{
	return ("Cannot add more elements");
}

const char* Span::noSpanCanBeFound::what() const throw()
{
	return ("Cannot span");
}
