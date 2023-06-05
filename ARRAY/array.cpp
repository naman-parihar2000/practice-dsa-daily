#include <iostream>
using namespace std;

int main()
{

    int marks[100];

    int n;
    cout << "Enter number of students ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> marks[n];
    }

    for (int i = 0; i < n; i++)
    {
        cout << marks[n ] << " ,";
    }
    cout<<endl;
    return 0;
}