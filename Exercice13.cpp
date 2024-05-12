#include <iostream>
using namespace std ;
int main()
{ int n=0 ;
    do
        { if (n%2==0) { cout << n << " est pair\n" ;
                        n += 3 ;
                        continue ;
                        }
        if (n%3==0) { cout << n << " est multiple de 3\n" ;
                    n += 5 ;
                    }
        if (n%5==0) { cout << n << " est multiple de 5\n" ;
                    break ;
                    }
        n += 1 ;
        }
    while (1) ;
}


/* Résultat :
0 est pair
3 est multiple de 3
9 est multiple de 3
15 est multiple de 3
20 est multiple de 5
*/
