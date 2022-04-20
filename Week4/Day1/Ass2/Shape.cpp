/*
Dalibor Cuturic
Assignments 2 Week 2 Day 5
Shape class
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