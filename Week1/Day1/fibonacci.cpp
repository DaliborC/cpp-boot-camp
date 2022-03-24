/*
Dalibor Cuturic
Assigment 1
recursive Fibonacci 
*/
#include<iostream>

using namespace std;

int main()
{
    int fib_lim {0} , i {0};

    int fibRec(int a) ;

    cout << "Enter the number of terms of Fibonacci series : ";
    cin >> fib_lim;
    cout << "Fibonnaci Series : " << endl;
    while(i < fib_lim) {
        cout << " " << fibRec(i);
        i++;
    }
    
    cout << endl;

    return 0;
}

int fibRec(int n)
{
    if (n == 1 || n == 0)
        return n ;
    else
        return (fibRec(n-1) + fibRec(n-2)) ;
}