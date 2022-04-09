/*
Dalibor Cuturic
Assignments 2 Week 3 Day 4
EC2++

Write a function which can encode the information in the given figure:
• Speed / 20 (So 1=20km/h, 2=40km/h,…)
• Distance / 150 (So 1=150mm, 2=300mm,…)
*/

#include <iostream>
#include <bitset>
#include <bits/stdc++.h>
#include <cstddef>

using namespace std;
int dist_from_car(string, int);

int main()
{
    // Speed(4), Front(3), Rear(3), Right(3), Left(3)
    //   1011       101      001      011      011

    ////////////////////
    // USER INPUT!!!!
    ////////////////////
    // Add values to array:
    // Speed(km/h),Front(mm),Rear(mm), Right(mm),Left(mm)
    // int in_values[] = {30, 160, 320, 470, 670};
    int in_values[] = {170, 10, 820, 970, 670};
    //*******************************************************

    // Set the values of speed range
    // 0-20 = 0 ; 21-40 = 1; 41-60 = 2, ... etc
    cout << "****************" << endl;
    cout << "Speed is: " << in_values[0] << endl;
    // 16 elements for 4-bit
    for (int i = 0; i < 17; ++i)
    {
        if (in_values[0] > (i * 20) && in_values[0] <= ((i + 1) * 20))
        {
            in_values[0] = i;
            break;
        }
    }
    cout << "Speed is now: " << in_values[0] << endl;
    cout << "Speed is binary: " << bitset<16>(in_values[0]) << endl
         << endl;

    // Define differnt dstance postions
    string string_length[4] = {"front", "rear", "right", "left"};

    for (int i = 1; i < 5; ++i)
    {
        // Call function for setting the distance range
        in_values[i] = dist_from_car(string_length[i - 1], in_values[i]);
    }

    cout << "\n****************" << endl;
    // Speed(4), Front(3), Rear(3), Right(3), Left(3)
    // Print out in correct format and position
    // Speed
    cout << "Output: " << endl << endl ;
    for (int i = 12; i < 16; ++i)
        cout << (1 & (in_values[0] >> (15 - i)));
    // front
    for (int i = 13; i < 16; ++i)
        cout << (1 & (in_values[1] >> (15 - i)));
    // rear
    for (int i = 13; i < 16; ++i)
        cout << (1 & (in_values[2] >> (15 - i)));
    // right
    for (int i = 13; i < 16; ++i)
        cout << (1 & (in_values[3] >> (15 - i)));
    // left
    for (int i = 13; i < 16; ++i)
        cout << (1 & (in_values[4] >> (15 - i)));

    cout << "\n\nSpeed(4), Front(3), Rear(3), Right(3), Left(3): " << endl
         << endl;

    return 0;
}

int dist_from_car(string s, int len_in)
{
    // 0-150 = 0 ; 151-300 = 1; 301-450 = 2, ... etc
    // Set the distance range
    // 8 elements for 3-bit
    for (int i = 0; i < 8; ++i)
    {
        if (len_in > (i * 150) && len_in <= ((i + 1) * 150))
        {
            cout << s << " distance: " << len_in << " mm " << endl;
            cout << s << " is now : " << i << endl;
            cout << s << " is binary " << bitset<16>(i) << endl
                 << endl;
            return i;
            break;
        }
    }
    return 0;
}