#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter Your characters: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << ch << " is vowel" << endl;
    }
    else
    {
        cout << ch << " is not vowel" << endl;
    }

    return 0;
}