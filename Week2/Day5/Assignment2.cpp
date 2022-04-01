/*
Dalibor Cuturic
Assignments 2 Week 2 Day 5
Testing
*/
#include <iostream>
using namespace std;

class Shape
{
    // protected:
public:
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
        bool ret;
        ret = (area() == c.area() && perimeter() == c.perimeter());
        return ret;
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