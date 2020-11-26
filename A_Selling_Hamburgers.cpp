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
		int n,m;
        cin>>n>>m;
        int a[n],b[m];
        int count = n+m;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        for (int i = 0; i < n || i<m; i++)
        {
            if(a[i]==b[i] ||a[i]==a[i+1]||b[i]==b[i+1]){
                count--;
            }
        }
        cout<<count<<endl;
        
        
        
        

	}

#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
	return 0;
}
