#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter Number: ";
    cin >> n;

    if (n < 2)
    {
        cout << "Not Prime";
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "Not Prime";
                return 0;
            }
            else
            {
                cout << "Prime";
                return 0;
            }
        }
    }

    return 0;
}