#include <iostream>
using namespace std;
int sum(int, int); // function prototyping

// prime number call by value
bool primeNumber(int num)
{
    bool is_prime = true;
    if (num == 0 || num == 1)
    {
        is_prime = false;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

// call by reference swapping using pointers
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// call by reference swapping using C++ Reference Variables
void swapReferenceVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// return by reference
int &returnRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    // prime number
    int prime;
    cout << "Enter a number to check wether it is prime number or not." << endl;
    cin >> prime;
    cout << primeNumber(prime);

    // sum
    cout << "\nThe Sum is " << sum(3, 4) << endl;

    // swapping using pointers
    int a = 4, b = 5;
    cout << "The value of a is " << a << " and the value of b is " << b << " Before Swapping using pointers" << endl;
    swap(&a, &b);
    cout << "The value of a is " << a << " and the value of b is " << b << " After Swapping using pointers" << endl;

    // swapping using C++ Reference Variables
    int x = 34, y = 45;
    cout << "The value of x is " << x << " and the value of y is " << y << " Before Swapping using reference variables" << endl;
    swapReferenceVar(x, y);
    cout << "The value of x is " << x << " and the value of y is " << y << " After Swapping using reference variables" << endl;

    // return by reference
    int v = 34, w = 45;
    returnRef(v, w) = 1024;
    cout << "The value of v is " << v << " and the value of w is " << w << endl;
}

// call by value
int sum(int num1, int num2)
{
    int add = num1 + num2;
    return add;
}