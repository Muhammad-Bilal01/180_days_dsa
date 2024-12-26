#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Number: ";
    cin >> n;

    // fibbo: 0 1 1 2 3 5 8 13 21...
    int start = 0, end = 1, sum = 0;

    cout << start << " " << end << " ";
    for (int i = 0; i < n; i++)
    {
        sum = start + end;
        cout << sum << " ";

        // swap
        start = end;
        end = sum;
        sum = 0;
    }

    return 0;
}