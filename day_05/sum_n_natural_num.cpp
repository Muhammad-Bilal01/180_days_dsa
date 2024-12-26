#include <iostream>
using namespace std;

int main()
{

    int n;
    int sum = 0;

    cout << "Enter Number: ";
    cin >> n;

    // for (int i = 1; i <= n; i = i + 1)
    // {
    //     sum = sum + i;
    // }

    // direct formula

    sum = ((n * (n + 1)) / 2);

    cout << "The sum of " << n << " natural number is " << sum << endl;

    return 0;
}