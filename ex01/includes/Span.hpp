/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:06:09 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/26 18:42:29 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	_vector;
		unsigned int		_size;
		Span();
	public:
		Span(unsigned int const  & N);
		~Span();
		Span(Span const & a);
		Span&				operator=(Span const & a);
		void				addNumber(unsigned int const & N);
		void				addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int 		shortestSpan() const;
		unsigned int 		longestSpan() const;
		int			 		getValue(size_t index);
		std::vector<int>& 	getVector();
		
		class cannotAddMoreElements : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class noSpanCanBeFound : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
};

#endif