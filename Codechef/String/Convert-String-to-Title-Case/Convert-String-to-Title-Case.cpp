#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		string text;
		getline(cin, text);
		
		stringstream ss(text);
		string word;
		vector<string> arr;
		while( ss >> word )
		{
			arr.push_back(word);
		}

		for(int i=0; i<arr.size(); i++)
		{	
			bool lower = false;
			for(int j=0; j<arr[i].size(); j++)
			{
				if(arr[i][j] <'A' || arr[i][j]>'Z') 
				{
					lower = true;
					break;
				}
			}
			if(lower == true)
			{	
				arr[i][0] = toupper(arr[i][0]);
				cout<<arr[i][0];

				for(int k=1; k<arr[i].size();k++)
					cout<<(char)tolower(arr[i][k]);
			}
			else if (lower == false)
			{
				for(auto k: arr[i])
					cout<<k;
			}

			if(i!=arr.size()-1)
				cout<<' ';
		}
		cout<<endl;
	}

	return 0;
}
