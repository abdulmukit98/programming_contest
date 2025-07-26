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
