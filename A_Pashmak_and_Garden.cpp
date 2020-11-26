#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define in(ar, n)               \
    for (int i = 0; i < n; i++) \
    cin >> ar[i]
#define in2d(ar, n, m)              \
    for (int i = 0; i < n; i++)     \
        for (int i = 0; i < m; i++) \
    cin >> ar[i]
#define print(val) cout << val << endl;
#define set(ar, n, val)         \
    for (int i = 0; i < n; i++) \
    ar[i] = val
#define for2d(n, m)             \
    for (int i = 0; i < n; i++) \
        for (int j = 0; j < m; j++)
#define fori(i, a, b) for (ll i = a; i < b; ++i)
#define c(x) cout << x << endl
#define arr(x)                  \
    int x;                      \
    cin >> x;                   \
    int arr[x];                 \
    for (int i = 0; i < x; i++) \
    {                           \
        cin >> arr[i];          \
    }
#define endl "\n"
#define F first
#define S second
#define lint long long int
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
//#define D(a,b,c,d)      pow((c-a)*(c-a)+(d-b)*(d-b),0.5)
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
    {
        c("-1");
    }
    else if (x1 == x2)
    {
        cout << x1 + abs(y1 - y2) << " " << y1 << " " << x2 + abs(y1 - y2) << " " << y2;
    }
    else if (y1 == y2)
    {
        cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y2 + abs(x1 - x2);
    }
    else
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }

    return 0;
}
