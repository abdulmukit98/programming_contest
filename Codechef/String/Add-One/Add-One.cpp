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
