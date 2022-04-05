/*
Dalibor Cuturic
Assignments 1 Week 3 Day 2
Template
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

class Shape
{
    // protected:
public:
    int width{0}, height{0};
    // virtual int area() { return 0; }
    // virtual int perimeter() { return 0; }

public:
    Shape() {}
    Shape(int a, int b)
    {
        width = a;
        height = b;
    }

    /*
            // Overload operator ==
            bool operator==(Shape &c)
            {
                bool ret;
                ret = (area() == c.area() && perimeter() == c.perimeter());
                return ret;
            }
    */
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
    cout << "Template test: " << (isEqual<>(r1, r1) ? "True" : "False") << endl;
    cout << "Template test: " << (isEqual<>(r1, r3) ? "True" : "False") << endl;
    cout << endl;
    // Triangle
    cout << "Template test: " << (isEqual<>(t1, t1) ? "True" : "False") << endl;
    cout << "Template test: " << (isEqual<>(t1, t3) ? "True" : "False") << endl;
    cout << endl;
    // Square
    cout << "Template test: " << (isEqual<>(s1, s1) ? "True" : "False") << endl;
    cout << "Template test: " << (isEqual<>(s1, s3) ? "True" : "False") << endl;
    cout << endl;
    // Circle
    cout << "Template test: " << (isEqual<>(c1, c1) ? "True" : "False") << endl;
    cout << "Template test: " << (isEqual<>(c1, c3) ? "True" : "False") << endl;
    cout << endl;
    //  Mixed
    cout << "Template test: " << (isEqual<>(r1, t1) ? "True" : "False") << endl;
    cout << "Template test: " << (isEqual<>(r1, s1) ? "True" : "False") << endl;
    cout << "Template test: " << (isEqual<>(r1, c1) ? "True" : "False") << endl;
    cout << "Template test: " << (isEqual<>(t1, s1) ? "True" : "False") << endl;
    cout << "Template test: " << (isEqual<>(t1, c1) ? "True" : "False") << endl;
    cout << "Template test: " << (isEqual<>(s1, c1) ? "True" : "False") << endl;

    return 0;
}