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
