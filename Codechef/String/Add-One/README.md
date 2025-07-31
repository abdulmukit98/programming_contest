# Add One
You are given a large number N. You need to print the number N+1.

Note: The number is very large and it will not fit in standard integer data type. You have to take the input as String and then manipulate the digits to convert it to N+1.

## Input Format
The first line of the input contains a single integer T - the number of test cases. The description of T test cases follows.

The first line of each test case contains a single integer N.

## Output Format
For each test case, print a single line containing one integer - the number N+1.
Constraints 1≤T≤100
<br>
1≤N≤10^200000−1
the sum of the number of digits of all N in a single test file does not exceed 4⋅10^5

## Input
````
6
99
17
1
599
10000000000000000000
549843954323494990404
````

## Output
````
100
18
2
600
10000000000000000001
549843954323494990405
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
  		string num;
  		cin>>num;
  		int n = num.size();
  
  		int digit, carry = 0;
  		for(int i=n-1; i>=0; i--)
  		{
  			digit = num[i] - '0';
  			digit = digit + carry;
  			if(i == n-1) digit += 1;
  			carry = 0;
  
  			if(digit >= 10)
  			{
  				carry = digit/10;
  				digit = digit%10;
  				
  			}
  			num[i] = 48 + digit;
  		}
  		if(carry > 0) cout<<carry;
  		cout<<num<<endl;
  	}
  
  	return 0;
  }
````
