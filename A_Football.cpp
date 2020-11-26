#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
//scanf("%d", &n);
//printf("YES\n" );
using namespace std;
int main()
{
    typedef vector<int> vi;
    typedef pair<int, int> pi;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin>>str;
    int n = str.find("0000000");
    int m = str.find("1111111");
    if (n >= 0 || m >= 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
