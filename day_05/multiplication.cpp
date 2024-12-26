#include <iostream>
using namespace std;

int main()
{

    int table;

    cout << "Enter table no: ";
    cin >> table;

    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << table << " X " << i << " = " << table * i << endl;
    }

    return 0;
}