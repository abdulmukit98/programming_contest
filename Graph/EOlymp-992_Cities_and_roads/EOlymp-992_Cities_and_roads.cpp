#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int val, cnt=0;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>val;
			if(val==1) cnt++;
		}
	}
	cout<<cnt/2<<endl;\
	return 0;
}
