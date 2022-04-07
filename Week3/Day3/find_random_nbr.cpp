/*
Dalibor Cuturic
Assignments 3 Week 3 Day 3
find random number between 1024 random numbers
*/

#include <iostream>
#include <set>
#include <iterator>

using namespace std;
int main()
{
    set<int> my_set;
    set<int>::iterator itr;
    int size{1024}, check{0};
    unsigned int rand_nr{0}, low_limit{0}, high_limit{0}, nbr_loops{0};

    for (int i = 0; i < size; ++i)
    {
        // Create and insert random numbers
        my_set.insert(rand());
    }

    // Create random nuber to find
    rand_nr = rand();

    nbr_loops = low_limit = high_limit = 0;

    // Upper limits, always correct
    high_limit = *my_set.upper_bound(rand_nr);

    // Define the number of steps from the upper bound towards first element
    // If nuber exist in set, 2 steps otherwise 1 step
    if (rand_nr == *my_set.find(rand_nr))
        check = 2;
    else
        check = 1;

    // Loop from upper bound back to begin, exit when step equal
    for (itr = my_set.find(high_limit); itr != my_set.begin(); --itr)
    {
        if (nbr_loops == check)
        {
            low_limit = *itr;
            break;
        }
        nbr_loops++;
    }

    // Check if searched one is the last one or larger
    int last_nbr{0} ;
    last_nbr = *prev(my_set.end());
    if (rand_nr == last_nbr || rand_nr > last_nbr)
        high_limit = rand_nr;

    cout << "****************************" << endl;
    cout << "rand_nr: " << rand_nr << endl;
    cout << low_limit << " < " << rand_nr << " < " << high_limit << endl;
    cout << "Nbr of lookups: " << nbr_loops << endl;
    cout << "****************************" << endl;
}