#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter Age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Eligible" << endl;
    }
    else
    {
        cout << "Not Eligible" << endl;
    }

    return 0;
}