🔍 EOlymp - 992: Cities and Roads সমস্যা ব্যাখ্যা (বাংলায়)

এই সমস্যাটি একটি গ্রাফ ভিত্তিক গণনার সমস্যা, যেখানে আমাদের একটি adjacency matrix দেওয়া হয় এবং **আমাদের বের করতে হয় মোট কতটি road (edge) আছে।**

📋 সমস্যার বিবরণ:
একটি গ্রহে n টি শহর আছে।

শহরগুলো একটি n × n matrix দিয়ে উপস্থাপন করা হয়েছে।

matrix[i][j] = 1 হলে বুঝায় শহর i এবং j এর মধ্যে একটি রাস্তা আছে।

যেহেতু গ্রাফটি undirected, তাই matrix[i][j] = matrix[j][i] হবে।

✅ আমাদের কাজ:

মোট কতটি রাস্তা আছে তা বের করা।

🧠 মূল ধারণা:
Matrix-এ যতগুলো 1 আছে, তার অর্ধেকই হলো মোট edge সংখ্যা।

কারণ প্রতিটি রাস্তা দুইবার গণনা হয়: i → j এবং j → i

Input:
````
5
0 1 0 0 0 
1 0 1 1 0 
0 1 0 0 0 
0 1 0 0 0 
0 0 0 0 0
````

Output:
````
3
````

## Code:
````
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int val, cnt=0;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>val;
			if(val==1) cnt++;
		}
	}
	cout<<cnt/2<<endl;\
	return 0;
}
````
