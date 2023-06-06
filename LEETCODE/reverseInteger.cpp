#include <iostream>
using namespace std;

int main()
{
    int n, reversed_number = 0, remainder;
    cout << "ENTER AN INTEGER: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;

        if ((reversed_number > INT_MAX / 10) || (reversed_number < INT_MIN / 10))
        {
            return 0;
        }

        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    cout << "REVERSED NUMBER: " << reversed_number;
    return 0;
}
