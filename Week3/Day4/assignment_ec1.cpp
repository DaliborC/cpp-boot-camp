/*
Dalibor Cuturic
Assignments 1 Week 3 Day 4
EC++
*/

#include <iostream>
#include <bitset>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    // Seat Belts(5), Windows(4), Doors(4), Lights(3)
    //     10111        0100        1011      011
    uint16_t car{0b1011101001011011};

    cout << bitset<16>(car) << " " << endl;
    cout << "****************" << endl;
    for (int i = 0; i < 16; ++i)
        cout << (1 & (car >> (15 - i)));

    cout << endl << endl ;

    for (int i = 0; i < 16; ++i)
    {
        if (i < 5)
            cout << "Belt " << i + 1 << " => " << (1 & (car >> (15 - i))) << endl;
        if (i < 9 && i > 4)
            cout << "Window " << i + 1 << " => " << (1 & (car >> (15 - i))) << endl;
        if (i < 13 && i > 8)
            cout << "Door " << i + 1 << " => " << (1 & (car >> (15 - i))) << endl;
        if (i > 12)
            cout << "Light " << i + 1 << " => " << (1 & (car >> (15 - i))) << endl;
    }

    return 0;
}