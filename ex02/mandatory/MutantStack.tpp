/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandro <alejandro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:00:01 by alejandro         #+#    #+#             */
/*   Updated: 2024/04/29 10:12:16 by alejandro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack::MutantStack()
{
    
}

template <typename T>
MutantStack::~MutantStack()
{
    
}

template <typename T>
MutantStack::MutantStack(MutanStack const & a)
{
    *this = a;
}

template <typename T>
MutantStack& MutantStack::operator=(MutantStack const & a)
{
    if(this != &a)
    {
        this->c = a.c;
    }
    return (*this);
}

template <typename T>
std::stack<T>::container_type::iterator MutantStack::begin(void)
{
    return (c.begin());
}

template <typename T>
std::stack<T>::container_type::iterator MutantStack::begin(void)
{
    return (c.end());
}