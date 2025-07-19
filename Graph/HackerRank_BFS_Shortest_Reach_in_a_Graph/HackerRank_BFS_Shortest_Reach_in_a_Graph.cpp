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
