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

	string s,g="";
    cin >> s;
    int i=0;
    bool space=1;
    while (i<s.length())
    {
        if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && i<s.length())
        {
            i+=3;
            if (space==0)
                g+=" ";
            space=1;
        }
        else
        {
            g+= s[i];
            i++;
            space=0;
        }
    }
    if (g[g.length()-1] == ' ')
        cout<<g.substr(0,g.length()-1);
    else
        cout<<g;

	return 0;
}
