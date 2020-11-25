/***************************************************
************** Author:- Akshat *********************
****************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
 
	string s1;
	string s2 = "aeiouy";
	int cnt;
	cin >> s1;
	for (int i = 0; i < s1.length(); i++)
	{
		cnt = 0;
		s1[i] = tolower(s1[i]);
		for (int j = 0; j < s2.length(); j++)
		{
			if (s1[i] == s2[j])
			{
				cnt++;
				break;
			}
		}
		if (cnt == 0)
		{
			cout << "." << s1[i];
		}
	}
 
}
