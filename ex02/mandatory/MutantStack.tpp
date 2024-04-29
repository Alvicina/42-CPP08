/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:00:01 by alejandro         #+#    #+#             */
/*   Updated: 2024/04/29 17:17:05 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
MutantStack<T>::MutantStack()
{
    
}

template <typename T>
MutantStack<T>::~MutantStack()
{
    
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & a)
{
    *this = a;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const & a)
{
    if(this != &a)
    {
        this->c = a.c;
    }
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return (this->c.end());
}