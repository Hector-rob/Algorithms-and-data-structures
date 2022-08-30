//Act 4.1 - Grafo: sus representaciones y sus recorridos
//Héctor Robles Villarreal A01634105
//Sábado 13 de noviembre de 2021

#ifndef GRAFO_H
#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
using namespace std;

struct Edge {
	int src, dest;
};

class Graph {
	public:
		vector<vector<int>> adjList;
		Graph(vector<Edge> const& , int);
		static void BFS(Graph const&, int, vector<bool>&);
		static void DFS(Graph const&, int, vector<bool>&);
		static void loadGraph(string);

};

Graph::Graph(vector<Edge> const& edges, int nodes){
	adjList.resize(nodes);
		for (auto& edge : edges)
		{
			adjList[edge.src].push_back(edge.dest);
			adjList[edge.dest].push_back(edge.src);
		}
	}

void Graph::loadGraph(string archivo){
	ifstream ifs;
    vector<Edge> aristas;
    ifs.open("grafo.txt");
    string line;
	int nodos;
	int arcos;
    ifs >> nodos;
    ifs >> arcos;
    Edge arista;
    int source;
    int dest;
    int cont = 0;
    aristas.resize(nodos);
    while(ifs >> source >> dest){
        arista.src = source;
        arista.dest = dest;
        aristas[cont] = arista;
        cont++;
    }
    ifs.close();
	Graph graph(aristas,nodos);
	vector<bool> discovered(nodos);
	cout << "\nRecorrido del grafo por profundidad (DFS): " << endl;
	for (int i = 0; i < nodos; i++)
		if (discovered[i] == false)
			Graph::DFS(graph, i, discovered);
	cout << std::endl;
	vector<bool> discoveredB(nodos, false);
	cout << "\nRecorrido del grafo por anchura (BFS):" << endl;
	for (int i = 0; i < nodos; i++) {
		if (discoveredB[i] == false) {
			Graph::BFS(graph, i, discoveredB);
		}
	}
	cout << endl << endl;
}

void Graph::BFS(Graph const& graph, int v, vector<bool>& discovered){ //Time complexity O(n) Space complexity O(w) w = anchura
	queue<int> q;
	discovered[v] = true;
	q.push(v);
	while (!q.empty()){
		v = q.front();
		q.pop();
		cout << v << " ";
		// do for every edge (v -> u)
		for (int u : graph.adjList[v])
			if (!discovered[u]){
				discovered[u] = true;
				q.push(u);
			}
	}
}

void Graph::DFS(Graph const& graph, int v, vector<bool>& discovered){//Time complexity O(n) Space complexity O(h) h = altura
	discovered[v] = true;
	cout << v << " ";
	// do for every edge (v -> u)
	for (int u : graph.adjList[v])
	{
		if (!discovered[u])
			Graph::DFS(graph, u, discovered);
	}
}

#endif //Grafo.h