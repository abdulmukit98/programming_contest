EOlymp - 982: Connectivity সমস্যা ব্যাখ্যা (বাংলায়)

এই সমস্যাটি একটি গ্রাফ থিওরি ভিত্তিক সহজ কিন্তু গুরুত্বপূর্ণ সমস্যা। আমাদের কাজ হলো — **একটি undirected graph দেওয়া হলে, সেটি connected কিনা তা নির্ধারণ করা।**

📋 সমস্যার বিবরণ:
তোমাকে দেওয়া হবে:

n → মোট node সংখ্যা (1 ≤ n ≤ 100)

m → মোট edge সংখ্যা (1 ≤ m ≤ 10⁴)

এরপর m টি লাইন থাকবে, প্রতিটিতে দুটি সংখ্যা u এবং v — অর্থাৎ u এবং v এর মধ্যে একটি edge আছে।

তোমার কাজ:

যদি সব node একে অপরের সাথে কোনো না কোনোভাবে সংযুক্ত থাকে, তাহলে প্রিন্ট করো "YES"

না হলে প্রিন্ট করো "NO"

🧠 সমাধান কৌশল:
আমরা DFS (Depth-First Search) বা BFS (Breadth-First Search) ব্যবহার করে দেখতে পারি — একটি node থেকে শুরু করে সব node-এ পৌঁছানো যায় কিনা।

Input:
````
3 2
1 2
3 2
````

Output: **YES**

Input:
````
3 1
1 3
````

Output: **NO**

Code:
````
#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > graph;	
vector<bool> visited;

void dfs(int node)
{
	visited[node] = true;

	for(int adj: graph[node])
	{
		if(!visited[adj])
		{
			dfs(adj);
		}
	}
}

int main()
{
	int node, edge;
	cin>>node>>edge;

	graph.resize(node+1);
	visited.resize(node+1, false);
	
	int a,b;
	for(int i=0; i<edge; i++)
	{
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}


	dfs(1);
	bool connected = true;
	for(int i=1; i<=node; i++)
	{
		if(visited[i] == false)
		{
			connected = false;
			break;
		}
	}

	cout<< (connected? "YES" : "NO")<<endl;

	return 0;
}
````
