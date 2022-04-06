/*
Dalibor Cuturic
Assignments 2 Week 3 Day 3
random number and amount of duplicates
*/

#include <iostream>
#include <map>
#include <iterator>

using namespace std;
int main()
{
    map<int, int> my_map;
    map<int, int>::iterator itr;
    int size{10000}, rand_nr{0};

    int nbr_of_elements{0};
    for (int i = 0; i < size; ++i)
    {
        // Create random number
        rand_nr = rand() % 33;
        // Check if number allredy exist in the map
        if (my_map.find(rand_nr) != my_map.end())
        {
            // If allredy exist, increase the value (duplicates) by 1
            my_map[rand_nr] = my_map.find(rand_nr)->second + 1 ;
            nbr_of_elements++ ;
        }
        else
        {
            // Add a new one and set value to 1
            my_map[rand_nr] = 1;
            nbr_of_elements++ ;
        }
    }

    cout << endl;
    cout << "My map, random number with amout of duplicated values: " << endl ;
    for (itr = my_map.begin(); itr != my_map.end(); ++itr)
    {
        cout << " There is: " << itr->second << "\tduplicates of number: " << itr->first << endl;
    }
    cout << endl;
    cout << "There are: " << nbr_of_elements << "  int numbers in map." << endl;

    return 0;
}