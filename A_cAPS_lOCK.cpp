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
    if(str[0]>='a'&&str[0]<='z'){
        str[0]-=32;
    }
    for (int i = 1; i < str.size(); i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
        str[i]+=32;
        }
    }
    cout<<str;
    

   return 0;
}
