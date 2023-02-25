/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:56:54 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/24 22:58:58 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"
template<typename T>
void print(T var)
{
    std::cout << var << std::endl;
}

int main ()
{
    std::string str[3] = {"hello", "world", "nothing"};
    int tab[10] = {5,3,6,8,9,20,53,13,10,9};
    // iter(tab,10,print);
    iter(str,3,print);
    iter(tab,10,print);

}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; 
//     }
//   private:
//     int _n;
// };

// std::ostream & operator << ( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const &x ) { std::cout << x << std::endl; return; }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }