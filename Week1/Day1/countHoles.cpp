/*
Dalibor Cuturic
Assigment 1
countHoles
*/

#include <iostream>

using namespace std;

int countHoles(int);

int main()
{
    int nbrStyle{0}, nbr_of_holes{0} ;

    cout << "Write a integer number " << endl;
    cin >> nbrStyle;

    cout << "In number: " << nbrStyle << " there is: " << countHoles(nbrStyle) << " holes." << endl;

    return 0;
}

int countHoles(int nbr)
{
    int nbr_of_holes {0} , temp {0};

    temp = nbr ;

    while (nbr % 10 != 0)
    {
        nbr = nbr % 10 ;
        if (nbr == 1 || nbr == 2 || nbr == 3 || nbr == 5 || nbr == 7)
        {
            nbr_of_holes += 0 ;
        }
        else if (nbr == 0 || nbr == 4 || nbr == 6 || nbr == 9)
        {
            nbr_of_holes += 1;
        }
        else if (nbr == 8)
            nbr_of_holes += 2;

        
        nbr = (temp - nbr) / 10;
        temp = nbr ;
    }

    return nbr_of_holes ;
}