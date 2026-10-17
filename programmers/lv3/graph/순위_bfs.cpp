#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int bfs(vector<vector<int>> &graph, int start, int n)
{
    vector<bool> visited(n + 1, false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    int cnt = 0;

    while(!q.empty())
    {
        int current = q.front();
        q.pop();

        //현재 선수와 연결된 선수를 탐색하라.







    }

}l`