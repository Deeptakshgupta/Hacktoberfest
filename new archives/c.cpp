#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,v;
		cin>>n>>k>>v;
		int b=v*(n+k);
		int a[n];
		int sum=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		int c=abs(b-sum);
		int ans=c/k;
		if(ans>v || c%k!=0)
		{
			cout<<"-1";
		}
		else
		{
			cout<<ans;
		}
	}
}
