/***************************************************
************** Author:- Akshat *********************
****************************************************/
#include <iostream>
using namespace std;
int main()
{
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 92) {
            a[i] += 32;
            //cout << a[i] << " ";
 
        }
        if (b[i] < 92) {
            b[i] += 32;
            //cout << b[i] << " ";
 
        }
    }
    if (a < b)
    {
        cout << -1;
    }
    else if (a > b)
    {
        cout << 1;
    }
    else if (a == b)
    {
        cout << 0;
    }
}
