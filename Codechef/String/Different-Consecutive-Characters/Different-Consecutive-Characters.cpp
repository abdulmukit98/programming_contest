#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		string s;
		cin>>s;
		int count = 0;

		for(int i=0; i<s.size()-1; i++)
		{
			if(s[i] == s[i+1])
			{
				count++;
				if(s[i] == '1') s.insert(i+1, "0");
				else if(s[i] =='0') s.insert(i+1, "1");
			}
		}
		
		cout<<count<<endl;
		//cout<<s<<endl;	
	}

	return 0;
}
