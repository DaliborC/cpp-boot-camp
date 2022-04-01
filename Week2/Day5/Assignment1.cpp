#include <iostream>

const size_t SIZE = 10;

int function()
{
    return std::rand();
}
// MUST FILL THE ARRAY FRON THE LAST INDEX
int *fillArray()
{
    int a[SIZE], *ptr;
    ptr = a ;
    // int* a = new int[SIZE];
    size_t i = SIZE; // YOU ARE NOT SUPPOSE TO CHANGE THIS
    for (; i > 0; --i)
    {
        //a[i] = function();
        ptr[i-1] = function(); // i changed to i -1
        // std::cout << "a" << i-1 << " " << a[i-1] << std::endl;
    }
    //std::cout << "fillArray: " << a[0] << std::endl;
    return ptr;
}

void printArray(int a[SIZE])
{
    // std::cout << "printArray, a: "<< a[0] << " Size: " << SIZE <<  std::endl;
    for (size_t i = 0; i < SIZE; i++)
    {
        std::cout << *a + i << std::endl;
    }
}
void printBool(bool _b)
{
    if (_b = true)
    {
        std::cout << "VALUE is TRUE" << std::endl;
    }
    else if (_b = false)
    {
        std::cout << "VALUE is FALSE" << std::endl;
    }
}
// YOU ARE NOT ALLOWED TO CHANGE THE RETURN TYPE
void resizeForMe(char *a, size_t _newSize)
{
    delete a;
    a = new char[_newSize];
}

// YOU SHALL NOT CHANGE THE MAIN FUNCTION
int main()
{
    printArray(fillArray());
    printBool(false);
    char *a = new char[SIZE];
    for (size_t i = 0; i < SIZE; i++)
        i % 2 ? a[i] = 'A' : a[i] = 'D';
    std::cout << "Size is: " << a << std::endl;
    resizeForMe(a, 100);
    for (size_t i = 0; i < 1000; i++)
        i % 2 ? a[i] = 'B' : a[i] = 'C';
    std::cout << "Size is: " << a << std::endl;
    return 0;
}
