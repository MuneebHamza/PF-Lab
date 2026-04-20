#include <iostream>
using namespace std;

int factorial(int number)
{
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
        result *= i;
    }
    return result;
}

bool issStrong(int number, int result)
{
    int sum = 0;
    int temp = number;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return sum == number;
}

void checkStrong(int number, int result)
{
    if (issStrong(number, result))
    {
        cout <<"Strong Number." << endl;
    }
    else
    {
        cout << "Not strong number." << endl;
    }
} 

int main()
{
    int number;
    cin >> number;
    int result = factorial(number);
    checkStrong(number, result);
    return 0;
}
