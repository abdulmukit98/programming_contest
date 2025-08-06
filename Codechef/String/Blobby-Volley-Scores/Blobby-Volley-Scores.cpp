#include <bits/stdc++.h>
using namespace std;
int main() 
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		string game;
		cin>>game;
		
		int alice = 0, bob = 0;
		if(game[0] == 'A') alice = 1;

		for(int i=1; i<n; i++)
		{
			if(game[i-1] == game[i] && game[i]=='A') alice++;
			else if(game[i-1] == game[i] && game[i]=='B') bob++;
		}
		cout<<alice<<" "<<bob<<endl;
	}

    return 0;
}
