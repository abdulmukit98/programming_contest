#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N, K;
		cin>>N>>K;
		int val;
		while(N--)
		{
			cin>>val;
			if(K-val >= 0)
			{
				K = K-val;
				cout<<"1";
			}
			else cout<<"0";
		}
		cout<<"\n";
	}

	return 0;
}
