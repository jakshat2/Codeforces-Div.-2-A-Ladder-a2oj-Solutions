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
#define int long long int
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
#define vipii vector<pair<int, int>>
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i=0, j=0, n, m;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        if (i % 4 == 2)
        {
            for (j = 1; j < m; j++)
            {
                cout << ".";
            }cout<<"#"<<endl;
            
        }
        else if (i % 4 == 0)
        {
            cout << "#";
            for (j = 1; j < m; j++)
            {
                cout << ".";
            }
            cout << endl;
        }
        else
        {
            for (j = 1; j <= m; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }

    return 0;
}