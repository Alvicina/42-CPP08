/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandro <alejandro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:50:45 by alejandro         #+#    #+#             */
/*   Updated: 2024/04/29 10:06:39 by alejandro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack < T, std::deque<T> >
{
    private:

    public: 
        MutantStack();
        ~MutantStack();
        MutantStack(MutantStack const & a);
        MutantStack& operator=(MutantStack const & a);
        std::stack<T>::container_type::iterator begin(void);
        std::stack<T>::container_type::iterator end(void);
};

#endif