# Problem Statement
Easy Pronunciation
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 
4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string 
S consisting of 
N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters 
{
a
,
e
,
i
,
o
,
u
}
{a,e,i,o,u} and the consonants are the other 
21 characters.

<br><br>

## Code
````
  #include<iostream>
  #include<string>
  using namespace std;
  int main()
  {
  	int T;
  	cin>>T;
  	while(T--)
  	{
  		int n;
  		cin>>n;
  		string word;
  		cin>>word;
  
  		bool prev = false;
  		int cnt = 0;
  		for(int i=0; i<n; i++)
  		{
  			if(word[i]!='a'&&word[i]!='e'&&word[i]!='i'&&word[i]!='o'&& word[i]!='u')
  			{
  				if(prev == false) 
  				{
  					prev = true;
  					cnt = 1;
  				}
  				else if(prev == true)
  					cnt++;
  
  				if(cnt >= 4)
  				{
  					// constant hard
  					cout<<"NO\n";
  					break;
  				}
  			}
  
  			else
  			{
  				cnt = 0;
  				prev = false;
  			}
  		}
  		if(cnt<4) cout<<"YES\n";
  	}
  }

````
