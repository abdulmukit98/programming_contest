# Convert String to Title Case
Given a string S consisting of only lowercase and uppercase English letters and spaces, your task is to convert it into title case. In title case, the first letter of each word is capitalized while the rest are in lowercase, except for words that are entirely in uppercase (considered as acronyms), which should remain unchanged.

# Note:
Words are defined as contiguous sequences of English letters separated by spaces. <br>
Acronyms are words that are entirely in uppercase and should remain unchanged. <br>
Assume the input does not contain leading, trailing, or multiple spaces between words.
## Input Format
The first line contains a single integer T, the number of test cases.
Each of the next T lines contains a string S.
## Output Format
For each test case, print a single line containing the string S converted into title case.

Input:
````
5
Helloe world
this is a CODECHEF problem
WELCOME to the JUNGLE
the quick BROWN fOx
programming in PYTHON
````

Output:
````
Helloe World
This Is A CODECHEF Problem
WELCOME To The JUNGLE
The Quick BROWN Fox
Programming In PYTHON
````

## Code
````
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
````
