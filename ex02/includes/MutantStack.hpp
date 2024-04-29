/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:50:45 by alejandro         #+#    #+#             */
/*   Updated: 2024/04/29 17:23:24 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>
#include <list>

template <typename T>
class MutantStack : public std::stack < T, std::deque<T> >
{
    private:

    public: 
        MutantStack();
        ~MutantStack();
        MutantStack(MutantStack const & a);
        MutantStack& operator=(MutantStack const & a);

        typedef typename std::deque<T>::iterator iterator;
        iterator begin(void);
        iterator end(void);
};

#include "../mandatory/MutantStack.tpp"

#endif