#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            for (int j = 0; j < (2 * n - 1); j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < (i + 1); j++)
            {
                cout << "*";
            }

            for (int j = 0; j < (2 * (n - i) - 3); j++)
            {
                cout << " ";
            }

            for (int j = 0; j < (i + 1); j++)
            {
                cout << "*";
            }
            cout<<endl;
        }
    }
    return 0;
}