#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
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
#define w(x)  int x; cin >> x; while (x--)
#define c(x) cout<<x<<endl
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char str[100];
    gets(str);
    int n = strlen(str);
    sort(str,str+n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(str[i]>=97&&str[i]<=122&&str[i]!=str[i+1])
        {
            count++;
        }
    }
    c(count);
    
    
    
    

    return 0;
}
