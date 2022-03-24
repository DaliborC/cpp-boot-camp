/*
Dalibor Cuturic
Assigment 1
array return
*/
#include<iostream>

using namespace std;

int main()
{
    int size {0};
    unsigned int upper_limit  {0}, lower_limit {0};

    cout << "Write lower array limit, integer nummer: " << endl;
    cin >> lower_limit ;
    cout << "Write upper array limit, integer nummer: " << endl;
    cin >> upper_limit ;

    cout << "\nArray : " << endl;
    if (lower_limit >= upper_limit)
    {
        int array[] = {0xFF, 0xFF} ;
        cout << "Invalid limitation range!" << endl;
        cout << array[0] << " ; " << array[1] << endl;
    }
    else {
        size = upper_limit - lower_limit;
        int array[size] {0} ;
        int index {0} ;

        for(int i = upper_limit-1 ; i > lower_limit ; --i)
        {
            array[index] = i ;
            cout << array[index] << " ; " ;
            ++index ;
        }
        cout << "Array Size: " << size-1 << endl;
    }

    return 0 ;
}