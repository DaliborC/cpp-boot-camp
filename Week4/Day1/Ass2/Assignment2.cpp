/*
Dalibor Cuturic
Assignments 2 Week 2 Day 5
Testing
*/

#include <iostream>
#include "Shape.cpp"
using namespace std;

int main()
{
    Rectangle r1(3, 4), r3(3, 5);
    Triangle t1(6, 8), t3(3, 8);
    Square s1(3), s3(4);
    Circle c1(3), c3(4);

    // Test
    cout << "Rectangle vs Rectangle: " << (r1 == r1 ? "True" : "False") << endl;
    cout << "Rectangle vs Rectangle:3 " << (r1 == r3 ? "True" : "False") << endl;
    cout << endl;
    cout << "Trianle vs Triangle: " << (t1 == t1 ? "True" : "False") << endl;
    cout << "Trianle vs Triangle3: " << (t1 == t3 ? "True" : "False") << endl;
    cout << endl;
    cout << "Square vs Square: " << (s1 == s1 ? "True" : "False") << endl;
    cout << "Square vs Square3: " << (s1 == s3 ? "True" : "False") << endl;
    cout << endl;
    cout << "Circle vs Circle: " << (r1 == r1 ? "True" : "False") << endl;
    cout << "Circle vs Circle:3 " << (r1 == r3 ? "True" : "False") << endl;
    cout << endl;
    cout << "Rectangle vs Triangle: " << (r1 == t1 ? "True" : "False") << endl;
    cout << "Rectangle vs Square: " << (r1 == s1 ? "True" : "False") << endl;
    cout << "Rectangle vs Circle: " << (r1 == c1 ? "True" : "False") << endl;
    cout << "Triangle vs Square: " << (t1 == s1 ? "True" : "False") << endl;
    cout << "Triangle vs Circle: " << (t1 == s1 ? "True" : "False") << endl;
    cout << "Square vs Circle: " << (s1 == c1 ? "True" : "False") << endl;

    return 0;
}