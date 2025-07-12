#include<bits/stdc++.h>
using namespace std;

const int pattern[24][6] = {
	{0,1,2,3,4,5}, {0,3,1,4,2,5}, {0,4,3,2,1,5}, {0,2,4,1,3,5},
	{1,5,2,3,0,4}, {1,3,5,0,2,4}, {1,0,3,2,5,4}, {1,2,0,5,3,4},
	{2,4,0,5,1,3}, {2,5,4,1,0,3}, {2,1,5,0,4,3}, {2,0,1,4,5,3},
	{3,4,5,0,1,2}, {3,0,4,1,5,2}, {3,1,0,5,4,2}, {3,5,1,4,0,2},
	{4,2,5,0,3,1}, {4,0,2,3,5,1}, {4,3,0,5,2,1}, {4,5,3,2,0,1},
	{5,1,3,2,4,0}, {5,2,1,4,3,0}, {5,4,2,3,1,0}, {5,3,4,1,2,0}
};

bool isSame(string cube1, string cube2)
{
	for(int i=0; i<6; i++)
		if(cube1[i] != cube2[i]) return false;
	return true;
}

int main()
{
	string s;
	while(cin>>s)
	{
		if(cin.eof()) break;
		string cube1 = s.substr(0,6);
		string cube2 = s.substr(6,6);
		//cout <<cube1 <<" "<<cube2 <<endl;
		bool match = false;

		for(int i=0; i<24; i++)
		{
			string temp = "aaaaaa";
			for(int j=0; j<6; j++)
			{
				temp[j] = cube2[pattern[i][j]];
			}

			if(isSame(cube1, temp))
			{
				match = true;
				break;
			} 
		}
		
		if(match) cout<<"TRUE"<<endl; 
		else cout<<"FALSE"<<endl;
	}


	return 0;
}
