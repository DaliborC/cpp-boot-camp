/*
Dalibor Cuturic
Assigment 1 day 2-3
array without the repeated numbers
*/
#include <iostream>
#include <iomanip>

using namespace std;

int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new);

int main()
{
    int n_old{10}, n_new{10}, answer{0};
    int arr1[]{1, 2, 3, 3, 3, 4, 4, 5, 5, 5};
    int arr2[n_old]{0};

    answer = removeDuplicates(arr1, n_old, arr2, &n_new);

    if (answer == 0)
        cout << "ERROR" << endl;

    cout << "Original sorted array: " << endl;
    for (int i = 0; i < n_old; ++i)
        cout << setw(4) << arr1[i];

    cout << endl;

    cout << "Removed duplicates array: " << endl;
    for (int i = 0; i < n_new; ++i)
        cout << setw(4) << arr2[i];

    cout << endl;
    cout << "New array size is:  " << n_new << endl;
    return 0;
}

int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
{
    if (n_old == 0)
        return n_old;

    int counter = 0;
    for (int i = 0; i < n_old - 1; ++i)
    {
        if (arr_old[i] != arr_old[i + 1])
        {
            arr_new[counter++] = arr_old[i];
        }
    }
    // In sortet array last one is largest
    arr_new[counter] = arr_old[n_old - 1];
    // size of a new array
    *n_new = counter + 1;

    return 1;
}