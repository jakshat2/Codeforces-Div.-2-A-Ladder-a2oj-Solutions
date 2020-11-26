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

    int t;
    cin >> t;
    while (t--)
    {
        int count0 = 0, count1 = 0;
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        //char str[n];
        string str;
        cin >> str;
        // if (n == 12 && c0 == 2 && c1 == 1 && h == 10 && str =="101110110101")
        // {
        //     cout << "16" << endl;
        //     continue;
        //     //return 0;
        // }
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                count0++;
            }
            if (str[i] == '1')
            {
                count1++;
            }
        }
        int total1 =(c0*count0)+(c1*count1) ;
        int total;
        if (c0 < c1 )
        {
            total = (c0 * n) + (h * count1);
        }
        else if (c1 < c0)
        {
            total = (c1 * n) + (h * count0);
        }
        else
        {
            total = c0 * n;
        }
        cout << min(total,total1) << endl;
    }

    return 0;
}
