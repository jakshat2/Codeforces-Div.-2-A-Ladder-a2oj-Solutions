#include <bits/stdc++.h>
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
bool findRoots(int b, int c)
{
    bool flag = 1;
    int a = 1;
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
    if (d > 0)
    {
        double x = -b + sqrt_val;
        double y = -b - sqrt_val;
        int root1 = (x) / (2 * a);
        int root2 = (y) / (2 * a);

        if (root1 + root2 == -1 * b && root1 * root2 == c)
        {
            if(root1+root2==b && root1*root2==c){flag=1;}
        }
        else
            flag = 0;
    }
    else if (d == 0)
    {
        int root = -b / (2 * a);
        if (root + root == -1 * b && root * root == c)
        {
            if(root+root==b && root*root==c){flag=1;}
        }
        else
            flag = 0;
    }
    else
    {
        flag = 0;
    }
    return flag;
}
int32_t main()
{
    int s, p;
    cin >> s >> p;
    int x = findRoots(s, p);
    if (x == 1)
    {
        c("Yes");
    }
    else
    {
        c("No");
    }
    return 0;
}
