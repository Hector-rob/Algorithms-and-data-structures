
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//https://www.techiedelight.com/depth-first-search/
//https://www.techiedelight.com/breadth-first-search/


struct Edge {
	int src, dest;
};


class Graph{
    int v;
 
    // Number of edges
    int e;
 
    // Adjacency matrix
    int** adj;
public:
	vector<vector<int>> adjList;

	//https://stackoverflow.com/questions/15999123/const-before-parameter-vs-const-after-function-name-c
	Graph(vector<Edge> const& edges, int N)
	{

		adjList.resize(N);

		for (auto& edge : edges) //ya muy utilizado en lenguajes como Python, Ruby, C# entre otros
		{
			adjList[edge.src].push_back(edge.dest);
			adjList[edge.dest].push_back(edge.src);
		}
	}
    void addEdge(int start, int e);
    Graph(int v, int e);
};


void BFS(Graph const& graph, int v, vector<bool>& discovered)
{
	queue<int> q;

	discovered[v] = true;

	q.push(v);

	while (!q.empty())
	{
		v = q.front();
		q.pop();
		cout << v << " ";

		// do for every edge (v -> u)
		for (int u : graph.adjList[v])
			if (!discovered[u])
			{
				discovered[u] = true;
				q.push(u);
			}
	}
}


void DFS(Graph const& graph, int v, vector<bool>& discovered)
{
	discovered[v] = true;

	cout << v << " ";

	// do for every edge (v -> u)
	for (int u : graph.adjList[v])
	{
		if (!discovered[u])
			DFS(graph, u, discovered);
	}
}

void Graph::addEdge(int start, int e)
{
 
    // Considering a bidirectional edge
    adj[start][e] = 1;
    adj[e][start] = 1;
}

Graph::Graph(int v, int e)
{
    this->v = v;
    this->e = e;
    adj = new int*[v];
    for (int row = 0; row < v; row++) {
        adj[row] = new int[v];
        for (int column = 0; column < v; column++) {
            adj[row][column] = 0;
        }
    }
}

int main()
{
	vector<Edge> edges = {
		//0 is unconnected node
		{1, 2}, {1, 7}, {1, 8}, {2, 3}, {2, 6}, {3, 4},
		{3, 5}, {8, 9}, {8, 12}, {9, 10}, {9, 11}
	};

	int N = 13;

	Graph graph(edges, N);

	vector<bool> discovered(N);

	for (int i = 0; i < N; i++)
		if (discovered[i] == false)
			DFS(graph, i, discovered);


	std::cout << std::endl;

	vector<bool> discoveredB(N, false);
	for (int i = 0; i < N; i++) {
		if (discoveredB[i] == false) {
			BFS(graph, i, discoveredB);
		}
	}

    int v = 5, e = 4;
 
    // Create the graph
    Graph G(v, e);
    G.addEdge(0, 1);
    G.addEdge(0, 2);
    G.addEdge(1, 3);

	return 0;
}