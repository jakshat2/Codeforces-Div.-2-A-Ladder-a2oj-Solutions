#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
//scanf("%d", &n);
//printf("YES\n" );
using namespace std;
int main()
{
	typedef vector<int> vi;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, a, b, d;
		cin >> n;
		vi v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		if (n == 1)
		{
			cout << v[0] << endl;
		}
		else if (n == 2)
		{
			d = max(v[0], v[1]);
			cout << d << endl;
		}
		else if (n == 3)
		{
			sort(v.begin(), v.end());
			d = max(v[0] + v[1], v[2]);
			cout << d << endl;
		}
		else
		{
			sort(v.begin(), v.end());
			a = max(v[0] + v[3], v[1] + v[2]);
			b = max(v[0] + v[1] + v[2], v[3]);
			d = min(a, b);
			cout << d << endl;
		}
	}

// #ifndef ONLINE_JUDGE
// 	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
// #endif
	return 0;
}