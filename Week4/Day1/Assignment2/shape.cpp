/*
Dalibor Cuturic
Assignments 2 Week 4 Day 1
Template
shape heder
*/

// #include <iostream>
// using namespace std;

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