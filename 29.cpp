#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            int l = 0;
            k = (2 * i + 1);
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            while (l != k)
            {
                cout << i + 1;
                l++;
            }
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            cout << endl;
        }

        else
        {
            int l = 0;
            k = (2 * i - 1);
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            cout<<i+1;
            while (l != k)
            {
                cout << "0";
                l++;
            }
            cout<<i+1;
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}