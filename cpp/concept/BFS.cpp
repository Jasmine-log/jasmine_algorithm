
#include <iostream>
#include <queue>

using namespace std;

#define MAX_N 10

int N, E;
int Graph[MAX_N][MAX_N];

void BFS(int node)
{

    bool visited[MAX_N] = {false};
    queue<int> bfsQ;
    visited[node] = true;
    bfsQ.push(node);

    while (!bfsQ.empty())
    {
        int cur = bfsQ.front();
        bfsQ.pop();

        for (int next = 0; next < N; next++)
        {
            if (!visited[next] && Graph[cur][next])
            {
                visited[next] = true;
                bfsQ.push(next);
            }
        }
    }
}

int maine()
{

    cin >> N >> E;

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        Graph[u][v] = Graph[v][u] = 1;
    }

    BFS(0);

    return 0;
}