# 📘  সমস্যা সংক্ষেপ (বাংলায়)
তোমাকে একটি undirected graph দেওয়া হয়েছে adjacency matrix আকারে। তোমার কাজ হলো নির্ধারণ করা — এই গ্রাফটি tree কিনা।

## ✅ Tree এর শর্ত:
Connected হতে হবে — সব node একে অপরের সাথে সংযুক্ত।

Cycle-free হতে হবে — কোনো cycle থাকা যাবে না।

Edge সংখ্যা = Node সংখ্যা - 1 হতে হবে।

## 🧠 সমাধান কৌশল (DFS + Adjacency List)
Adjacency matrix থেকে adjacency list তৈরি করো।

DFS চালিয়ে:

সব node-এ পৌঁছানো যায় কিনা (connectedness)

DFS চলাকালীন যদি কোনো node-এ আবার ফিরে যাই (excluding parent), তাহলে cycle আছে

শেষে check করো edge সংখ্যা n - 1 কিনা

### Code
````
  #include<bits/stdc++.h>
  using namespace std;
  
  vector<vector<int>> graph;
  vector<bool> visited;
  bool cycle = false;
  
  void dfs(int node, int parent)
  {
  	visited[node] = true;
  	for(int adj: graph[node])
  	{
  		if(visited[adj] == false) dfs(adj, node);
  		else if(visited[adj] == true && adj != parent) {
  			cycle = true;
  		}
  	}
  }
  
  int main()
  {
  	int n; 
  	cin>>n;
  
  	graph.resize(n);
  	visited.resize(n, false);
  
  	int val, cnt = 0, root;
  	for(int i=0; i<n; i++)
  	{
  		for(int j=0; j<n; j++)
  		{
  			cin>>val;
  			if(val==1)
  			{
  				cnt++;
  				graph[i].push_back(j);
  				root = i;
  			}
  		}
  	}
  
  	
  	cnt = cnt /2;
  	
  	dfs(root, -1);
  	bool connected = true;
  	for(int i=0; i<n; i++)
  	{
  		if(!visited[i])
  		{
  			connected = false;
  			break;
  		}
  	}
  
  	// one less edge in tree
  	if(cnt == n-1){
  		if(cycle == false && connected) cout<<"YES";
  		else cout<<"NO"<<endl;
  	}
  	else cout<<"NO"<<endl;
  
  	return 0;
  }
````

