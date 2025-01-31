#include <iostream>
using namespace std;

// Linear Way
int sqrt(int x)
{
    // x = 0 or x = 1
    if (x == 0 || x == 1)
    {
        return x;
    }

    for (long i = 2; i < x; i++)
    {

        if (i * i == x)
        {
            return i;
        }
        else if (i * i > x)
        {
            return i - 1;
        }
    }

    return x - 1;
}

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    cout << "The sqrt is " << sqrt(num) << " of the " << num << endl;

    return 0;
}