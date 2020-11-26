#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
//scanf("%d", &n);
//printf("YES\n" );
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string str;
    cin>>str;
    int count1=0,count0=0;
    // if(str.length()<6){
    //     cout<<"no";
    //     return 0;
    // }
    
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if(str[i]=='1'){
    //         count1++;
    //     }
    // }
    // if(count1==0){
    //     cout<<"no";
    //     return 0;
    // }
    for(int i = 0; i < str.length(); i++){
        if(str[i]=='1'){
            for(int j=i;j<str.length();j++){
                if(str[j]=='0')
                    count0++;
            }
            break;
        }
    }
    if(count0>=6){
        cout<<"yes";
        return 0;
    }
	cout<<"no";
}
 //If the string contains no ones then the answer is "NO" as the remainig number must be positive. 
 //Otherwise we can find the leftmost one and check if it is followed by at least six zeroes.