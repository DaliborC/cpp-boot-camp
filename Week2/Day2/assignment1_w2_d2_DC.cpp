/*
Dalibor Cuturic
Assignments 1 Week 2 Day 2-3
*/
#include <iostream>
using namespace std;

class Shape
{
    protected:
    int width{0}, height{0};
    virtual int perimeter() { return 0; }
    virtual int area() { return 0; }

public:
    Shape() {}
    Shape(int a, int b)
    {
        width = a;
        height = b;
    }

    // Overload operator ==
    bool operator==(Shape &c)
    {
        bool ret ;
        ret = (area() == c.area() && perimeter() == c.perimeter()) ;
        return ret ;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int a, int b) : Shape(a, b) {}

private:
    int area() { return width * height; }
    int perimeter() { return 2 * (width + height); }
};
class Square : public Shape
{
public:
    Square(int a) : Shape(a, a) {}

private:
    int area() { return width * height; }
    int perimeter() { return 2 * (width + height); }
};
class Triangle : public Shape
{
public:
    Triangle(int a, int b) : Shape(a, b) {}

private:
    int area() { return width * height / 2; }
    int perimeter() { return (2 * width + height); }
};
class Circle : public Shape
{
public:
    Circle(int a) : Shape(a, a) {}

private:
    // Pi = 3 and a is radius
    int area() { return width * height * 3; }
    int perimeter() { return 2 * width + 3; }
};
int main()
{
    Rectangle r1(3, 4), r2(3, 4), r3(3, 5) ;
    Triangle t1(6, 8),t2(6, 8), t3(3, 8) ;
    Square s1(3), s2(3), s3(4) ;
    Circle c1(3), c2(3), c3(4);

    cout << (r1 == r2) << endl ;
    cout << (r1 == r3) << endl ;

    cout << (t1 == t2) << endl ;
    cout << (t1 == t3) << endl ;

    cout << (s1 == s2) << endl ;
    cout << (s1 == s3) << endl ;

    cout << (c1 == c2) << endl ;
    cout << (c1 == c3) << endl ;

    cout << (c1 == t3) << endl ;



    return 0;
}