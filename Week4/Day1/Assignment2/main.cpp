/*
Dalibor Cuturic
Assignments 2 Week 4 Day 1
Template
Main
*/

#include <iostream>
#include "shape.cpp"
using namespace std;

int main()
{
    Rectangle r1(3, 4), r3(3, 5);
    Triangle t1(6, 8), t3(3, 8);
    Square s1(3), s3(4);
    Circle c1(3), c3(4);

    // Test
    // Rectangle
    cout << "****************************" << endl;
    cout << "Equal test: " << (isEqual<>(r1, r1) ? "True" : "False") << endl;
    cout << "Equal test: " << (isEqual<>(r1, r3) ? "True" : "False") << endl;
    cout << endl;
    // Triangle
    cout << "Equal test: " << (isEqual<>(t1, t1) ? "True" : "False") << endl;
    cout << "Equal test: " << (isEqual<>(t1, t3) ? "True" : "False") << endl;
    cout << endl;
    // Square
    cout << "Equal test: " << (isEqual<>(s1, s1) ? "True" : "False") << endl;
    cout << "Equal test: " << (isEqual<>(s1, s3) ? "True" : "False") << endl;
    cout << endl;
    // Circle
    cout << "Equal test: " << (isEqual<>(c1, c1) ? "True" : "False") << endl;
    cout << "Equal test: " << (isEqual<>(c1, c3) ? "True" : "False") << endl;
    cout << endl;
    //  Mixed
    cout << "Equal test: " << (isEqual<>(r1, t1) ? "True" : "False") << endl;
    cout << "Equal test: " << (isEqual<>(r1, s1) ? "True" : "False") << endl;
    cout << "Equal test: " << (isEqual<>(r1, c1) ? "True" : "False") << endl;
    cout << "Equal test: " << (isEqual<>(t1, s1) ? "True" : "False") << endl;
    cout << "Equal test: " << (isEqual<>(t1, c1) ? "True" : "False") << endl;
    cout << "Equal test: " << (isEqual<>(s1, c1) ? "True" : "False") << endl;
    // ************************************************************************
    cout << "****************************" << endl;
    // Rectangle
    cout << "Less test: " << (isLess<>(r1, r1) ? "True" : "False") << endl;
    cout << "Less test: " << (isLess<>(r1, r3) ? "True" : "False") << endl;
    cout << endl;
    // Triangle
    cout << "Less test: " << (isLess<>(t1, t1) ? "True" : "False") << endl;
    cout << "Less test: " << (isLess<>(t1, t3) ? "True" : "False") << endl;
    cout << endl;
    // Square
    cout << "Less test: " << (isLess<>(s1, s1) ? "True" : "False") << endl;
    cout << "Less test: " << (isLess<>(s1, s3) ? "True" : "False") << endl;
    cout << endl;
    // Circle
    cout << "Less test: " << (isLess<>(c1, c1) ? "True" : "False") << endl;
    cout << "Less test: " << (isLess<>(c1, c3) ? "True" : "False") << endl;
    cout << endl;
    //  Mixed
    cout << "Less test: " << (isLess<>(r1, t1) ? "True" : "False") << endl;
    cout << "Less test: " << (isLess<>(r1, s1) ? "True" : "False") << endl;
    cout << "Less test: " << (isLess<>(r1, c1) ? "True" : "False") << endl;
    cout << "Less test: " << (isLess<>(t1, s1) ? "True" : "False") << endl;
    cout << "Less test: " << (isLess<>(t1, c1) ? "True" : "False") << endl;
    cout << "Less test: " << (isLess<>(s1, c1) ? "True" : "False") << endl;
    // ************************************************************************
    cout << "****************************" << endl;
    // Rectangle
    cout << "Greater test: " << (isGreater<>(r1, r1) ? "True" : "False") << endl;
    cout << "Greater test: " << (isGreater<>(r1, r3) ? "True" : "False") << endl;
    cout << endl;
    // Triangle
    cout << "Greater test: " << (isGreater<>(t1, t1) ? "True" : "False") << endl;
    cout << "Greater test: " << (isGreater<>(t1, t3) ? "True" : "False") << endl;
    cout << endl;
    // Square
    cout << "Greater test: " << (isGreater<>(s1, s1) ? "True" : "False") << endl;
    cout << "Greater test: " << (isGreater<>(s1, s3) ? "True" : "False") << endl;
    cout << endl;
    // Circle
    cout << "Greater test: " << (isGreater<>(c1, c1) ? "True" : "False") << endl;
    cout << "Greater test: " << (isGreater<>(c1, c3) ? "True" : "False") << endl;
    cout << endl;
    //  Mixed
    cout << "Greater test: " << (isGreater<>(r1, t1) ? "True" : "False") << endl;
    cout << "Greater test: " << (isGreater<>(r1, s1) ? "True" : "False") << endl;
    cout << "Greater test: " << (isGreater<>(r1, c1) ? "True" : "False") << endl;
    cout << "Greater test: " << (isGreater<>(t1, s1) ? "True" : "False") << endl;
    cout << "Greater test: " << (isGreater<>(t1, c1) ? "True" : "False") << endl;
    cout << "Greater test: " << (isGreater<>(s1, c1) ? "True" : "False") << endl;

    return 0;
}