#include <iostream> //for input and output
#include <string>   //for string variables
#include <cmath>    //for power function


using namespace std;

double power(double base, int exponent)
{
    switch (exponent)
    {
        case 0:
            return 0;
            break;
        case 1:
            return base;
            break;
        default:
            return base * power(base, exponent - 1);
            break;
    }
}

int main()
{
    string hello = "Hello world!";
    double base;
    int exponent;
    int input = 1;
    double input1;

    cout << hello << " Please enter a base and an exponent: " << endl;
    cin >> base >> exponent;
    cout << power(base, exponent) << endl;
    cout << "The size of an integer is " << sizeof(int) << " Bytes" << endl;
    input1 = static_cast<double>(input) / 3;
    cout << input1;

    return 0;
}


