#include <iostream>
using namespace std;

int main()
{

    int n;
    double fact = 1;

    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "The fact is " << fact << endl;

    return 0;
}