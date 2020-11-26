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
		int n;
        cin>>n;
        int arr[n],b[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            b[i]=arr[i]+arr[n-i-1];
        }
        for(int i=0;i<n;i++){
            cout<<b[i];
        }

	}

	return 0;
}
