#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define c(x)            cout<<x<<endl
#define arr(x)			int x; cin>>x; int arr[x]; for(int i=0;i<x;i++){cin>>arr[i];}
#define endl			"\n"
#define F              	first
#define S              	second
#define int             long long int
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
//mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    arr(n)
    int t1[1000],t2[5000],t3[5000],count1=0,count2=0,count3=0,w,s;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            t1[count1]=i+1;
            count1++;
        }else if(arr[i]==2){
            t2[count2]=i+1;
            count2++;
        }else if(arr[i]==3){
            t3[count3]=i+1;
            count3++;
        }
    }
    w=min(count1,count2);
    s=min(w,count3);
    c(s);
    for(count1=0,count2=0,count3=0;count1<s,count2<s,count3<s;count1++,count2++,count3++){
        cout<<t1[count1]<<" "<<t2[count2]<<" "<<t3[count3]<<endl;
    }
    return 0;
}



