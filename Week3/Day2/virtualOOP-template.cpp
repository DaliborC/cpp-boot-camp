/*
Dalibor Cuturic
Assignments 1 Week 3 Day 2
Template

Write a function template which receives two of any shapes from last week’s assignment, compares them, and
prints out the result.
*/
#include <iostream>
using namespace std;

template <typename T1, typename T2>
bool isEqual(T1 t1, T2 t2)
{
    bool ret;
    ret = (t1.area() == t2.area() && t1.perimeter() == t2.perimeter());
    return ret;
}

template <typename T1, typename T2>
bool isLess(T1 t1, T2 t2)
{
    bool ret;
    ret = (t1.area() < t2.area() && t1.perimeter() < t2.perimeter());
    return ret;
}

template <typename T1, typename T2>
bool isGreater(T1 t1, T2 t2)
{
    bool ret;
    ret = (t1.area() > t2.area() && t1.perimeter() > t2.perimeter());
    return ret;
}

class Shape
{
public:
    int width{0}, height{0};

public:
    Shape() {}
    Shape(int a, int b)
    {
        width = a;
        height = b;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int a, int b) : Shape(a, b) {}

    // private:
    int area() { return width * height; }
    int perimeter() { return 2 * (width + height); }
};
class Square : public Shape
{
public:
    Square(int a) : Shape(a, a) {}

    // private:
    int area() { return width * height; }
    int perimeter() { return 2 * (width + height); }
};
class Triangle : public Shape
{
public:
    Triangle(int a, int b) : Shape(a, b) {}

    // private:
    int area() { return width * height / 2; }
    int perimeter() { return (2 * width + height); }
};
class Circle : public Shape
{
public:
    Circle(int a) : Shape(a, a) {}

    // private:
    //  Pi = 3 and a is radius
    int area() { return width * height * 3; }
    int perimeter() { return 2 * width + 3; }
};
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