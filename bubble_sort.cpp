/*
Dalibor Cuturic
Assigment 1
limited array return
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

    // Bubble sort
    //****************************************************
    for(int i = 0 ; i < array_size; ++i)
    {
        for(int j = 0 ; j < array_size-1-i; ++j)
        {
            if(array_to_sort[j] > array_to_sort[j+1])
            {   
                // Swap
                int temp = array_to_sort[j] ;
                array_to_sort[j] = array_to_sort[j+1] ;
                array_to_sort[j+1] = temp ;
                pass++ ;
            }
        }
    }
    //**************************************************

    cout << "Bubble ascending order sorted array: " << endl;

    for(int i = 0 ; i < array_size ; ++i)
    {
        cout << array_to_sort[i] << " ; " ;
    }
    cout << endl;
    cout << "Nuber of pass: " << pass << endl;

    return 0 ;
}