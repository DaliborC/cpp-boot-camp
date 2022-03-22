/*
Dalibor Cuturic
Assigment 1
selection sort
*/
#include<iostream>

using namespace std;

int main()
{
    const int array_size = 16 ;
    int array_to_sort[] {-14, 33, 27, 10, 35, -19, 42, 44, 140, 330, 270, 100, 350, 190, 420, 440} ;
    int pass {0};

    cout << "Original array: " << endl;

    for(int i = 0 ; i < array_size ; ++i)
    {
        cout << array_to_sort[i] << " ; " ;
    }
    cout << endl;

    // Selection sort
    //****************************************************
    for(int i = 0 ; i < array_size-1; ++i)
    {
        int max_index = i ;
        for(int j = i+1 ; j < array_size; ++j)
        {
            if(array_to_sort[max_index] > array_to_sort[j])
            {
                // Set max
                max_index = j ;
            }
        }
        if( max_index != i)
        {
            // Swap
            int temp = array_to_sort[max_index] ;
            array_to_sort[max_index] = array_to_sort[i] ;
            array_to_sort[i] = temp ;
            pass++ ;
        }
    }
    //**************************************************

    cout << "Selection ascending order sorted array: : " << endl;

    for(int i = 0 ; i < array_size ; ++i)
    {
        cout << array_to_sort[i] << " ; " ;
    }
    cout << endl;

    cout << "Nuber of pass: " << pass << endl;

    return 0 ;
}