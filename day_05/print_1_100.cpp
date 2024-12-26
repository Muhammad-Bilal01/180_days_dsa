#include <iostream>
using namespace std;

int main()
{

    int n = 1;
    int end = 100;
    int jump = 3;

    for (int i = n; i < end; i = i + jump)
    {
        cout << i << " ";
    }

    return 0;
}