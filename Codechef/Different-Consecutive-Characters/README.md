# Different Consecutive Characters
Chef has a binary string 
S of length 
N. Chef can perform the following operation on 
S:

Insert any character (
0 or 1) at any position in S.
Find the minimum number of operations Chef needs to perform so that no two consecutive characters are same in S.

## Input Format
The first line contains a single integer 
T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer 
N — the length of the binary string S.
The second line of each test case contains a binary string 
S of length 
N containing 
0s and 
1s only.
## Output Format
For each test case, output on a new line the minimum number of operations Chef needs to perform so that no two consecutive characters are same in S.

### Input
````
3
2
11
4
0101
5
00100
````

### Output
````
1
0
2
````

### Code
````
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
````
