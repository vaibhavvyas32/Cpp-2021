#include <iostream>
using namespace std;

// Program for checking whether given number is prime or not. Using break statement in loops.

int main()
{
    int n, i;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non Prime" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Prime" << endl;
    }

    return 0;
}