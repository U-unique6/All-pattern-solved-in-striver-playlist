#include <bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int y = 0; y < n - i - 1; y++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{

    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int y = 0; y < n - i - 1; y++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{

    int n;
    cin >> n;
    pattern1(n);
    pattern2(n);

    return 0;
}