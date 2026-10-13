#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int solution (int n, vector<vector<int>> edge) {


    //방문 처리 벡터 그래프 생성
    vector<bool> isvisited (n + 1, false);
    //2차원 그래프 생성, 간선의 정보 받을
    vector<vector<int>> graph(n + 1);
    //자료형 int 두개 담을 queue 생성
    queue<pair<int, int>> q;

    for (int i = 0 ; i < edge.size(); i++)
    {
        int from = edge[i][0];
        int to = edge[i][1];
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    //거리 저장
    vector<int> distances (n + 1, 0);


    //만들었으면 뭐해야지? 첫번째 꺼는 방문처리를 해야지
    //1부터 노드 시작이니까 첫번째 자리는 1이겠지?
    isvisited[1] = true;
    q.push({1, 0});

    int max_dist = 0;

   while (!q.empty()) {
        int curr = q.front().first;
        int dist = q.front().second;
        q.pop();

        distances[curr] = dist;
        if (dist > max_dist) max_dist = dist;
    
        // graph[curr]에는 현재 노드(curr)와 연결된 이웃 노드들의 번호가 들어있습니다.
// 예: graph[1]에 {2, 3}이 있다면 graph[1].size()는 2입니다.

for (int i = 0; i < graph[curr].size(); i++) {
    int next = graph[curr][i]; // curr번 노드와 연결된 i번째 이웃 노드의 번호

    // 아직 이 이웃 노드를 방문하지 않았다면
    if (isvisited[next] == false) {
        isvisited[next] = true;             // 방문했다고 표시
        q.push({next, dist + 1});            // 큐에 {다음 노드 번호, 현재거리 + 1}을 넣음
    }
}
   }
    
    

    // 5. 작성 중이셨던 answer에 가장 먼 노드 개수 계산
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        if (distances[i] == max_dist) {
            answer++;
        }
    }

    return answer;
}  
    
    
    
    
