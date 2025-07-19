🔍 HackerRank - BFS: Shortest Reach in a Graph সমস্যার বাংলা বিশ্লেষণ

এই সমস্যা একটি গ্রাফ থিওরি ভিত্তিক BFS (Breadth-First Search) সমস্যা, যেখানে আমাদের একটি unweighted, undirected graph দেওয়া হয় এবং একটি নির্দিষ্ট node থেকে সবচেয়ে কম দূরত্বে অন্য node-গুলোতে পৌঁছানোর দূরত্ব বের করতে হয়।

📋 সমস্যার বিবরণ:
গ্রাফে n টি node এবং m টি edge আছে।

প্রতিটি edge-এর দৈর্ঘ্য 6 (fixed weight)।

একটি node s থেকে শুরু করে, আমাদের বের করতে হবে:

s থেকে অন্য প্রতিটি node-এ পৌঁছাতে সর্বনিম্ন দূরত্ব কত?

যদি কোনো node-এ পৌঁছানো না যায়, তাহলে তার জন্য -1 প্রিন্ট করতে হবে।

🧠 সমাধান কৌশল:
এই সমস্যার জন্য আমরা ব্যবহার করবো BFS, কারণ BFS সবসময় unweighted graph-এ shortest path বের করতে সবচেয়ে উপযুক্ত।

✅ BFS Steps:
একটি queue তৈরি করো এবং s node কে enqueue করো।

একটি distance[] array রাখো, যেখানে সব node-এর জন্য initial value -1 থাকবে।

s node-এর distance হবে 0।

BFS চালিয়ে প্রতিটি neighbor-এর distance হবে current node-এর distance + 6।

Input:
````
4 2
1 2
1 3
1
````

Output:
````
6 6 -1
````

Input:
````
3 1
2 3
2
````

Output:
````
-1 6
````
## BFS
![IMG_20250719_194835](https://github.com/user-attachments/assets/d5836ddc-65d2-4952-bf4e-f1ed5a15aec5)

## Code
````
#include<bits/stdc++.h>
using namespace std;

vector<int> level; 
vector< vector<int> > graph;
queue<int> qlist;

void bfs(int node)
{
	qlist.push(node);
	while(!qlist.empty())
	{
		int current = qlist.front();
		qlist.pop();
		for(int i: graph[current])
		{
			if(level[i] == -1)
			{
				level[i] = level[current] + 6;
				qlist.push(i);
			}
		} 
	}		
}

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int node, edge;
		cin>>node>>edge;

		level.resize(node+1, -1);
		graph.resize(node+1);

		int u,v;
		while(edge--)
		{
			cin>>u>>v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		int s;
		cin>>s;
		level[s] = 0;
		bfs(s);

		for(int i=1; i<=node; i++)
		{
			if(level[i]==0) continue;
			cout<<level[i];
			if(i != node)cout<<" ";
		}
		cout<<endl;
		graph.clear();
		level.clear();
	}

	return 0;
}
````
