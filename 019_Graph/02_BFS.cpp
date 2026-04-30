#include <iostream>
using namespace std;

class Graph
{
    int n;
    vector<vector<int>> adj;

public:
    Graph(int n){
        this->n = n;
        adj.resize(n);
    }

    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printGraph(){
        for (int i = 0; i < n; i++){
            cout << i << " -> ";
            for (int v : adj[i]){
                cout << v << " ";
            }
            cout << endl;
        }
    }

    void bfs(){
        queue<int> q;
        vector<bool> vis(n, false);

        for (int i = 0; i < n; i++){

            if (!vis[i]){
                q.push(i);
                vis[i] = true;
                while (!q.empty()){
                    int u = q.front();
                    q.pop();
                    cout << u << " ";
                    vector<int> neigh = adj[u];
                    for (int v : neigh){
                        if (!vis[v]){
                            vis[v] = true;
                            q.push(v);
                        }
                    }
                }
            }
        }
        cout << endl;
    }

    void dfs(int u, vector<bool> &vis){
        vis[u] = true;
        cout << u << " ";

        vector<int> neigh = adj[u];

        for (auto it : neigh){
            if (!vis[it]){
                dfs(it, vis);
            }
        }
    }
};

int main()
{
    Graph g(7);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    g.addEdge(5, 6);

    g.printGraph();
    g.bfs();

    vector<bool> vis(7,false);
    g.dfs(0,vis);

    return 0;
}