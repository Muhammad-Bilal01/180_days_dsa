#include <iostream>
using namespace std;

int main()
{

    // mark grading
    int marks;
    cout << "Enter your marks: ";
    char grade;
    cin >> marks;

    if (marks > 80)
    {
        grade = 'A';
    }
    else if (marks > 70)
    {
        grade = 'B';
    }
    else if (marks > 60)
    {
        grade = 'B';
    }
    else if (marks > 50)
    {
        grade = 'C';
    }
    else if (marks > 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "Your grade is " << grade << endl;

    return 0;
}