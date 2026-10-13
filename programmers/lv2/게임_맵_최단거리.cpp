#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int solution(vector<vector<int>> maps)
{
    int row = maps.size(); //행의 개수
    int col = maps[0].size();//열의 개수

    //방문여부
    vector<vector<bool>> visited(row, vector<bool>(col, false));//크기가 col이고, 모든 값이 false인 bool 벡터를 하나 만들어라.
    //시작점부터 몇 칸 이동했는지
    vector<vector<int>> distance(row, vector<int>(col, 0));
    //상하좌우 그래프에서 이동하기 위한 값
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0 ,-1 ,1};

    queue<pair<int, int>> q;

    //시작점( 0 , 0)을 큐에 넣는다.
    q.push({0, 0});

    //시작위치 방문처리
    visited[0][0] = true;
    //시작위치도 1칸으로 계산하므로 거리 1
    distance[0][0] = 1;
    


    while (!q.empty())
    {
        //큐 제일 앞에 있는 위치의 x값을 가져옴
        int x = q.front().first;

        //큐 제일 앞에 있는 위치의 y값을 가져옴
        int y = q.front().second;

        //방금 가져온 위치를 큐에서 제거한다.
        q.pop();

        if (x == row - 1 && y == col - 1)
        {

            //도착했다면 지금까지 이동한 칸 수를 반환한다
            return distance[x][y];
        }

        for (int i = 0; i < 4; i++)
        {
            // 다음에 갈 x좌표 계산한다.
            int nextX = x + dx[i];
            // 다음에 갈 y좌표 계산한다.
            int nextY = y + dy[i];

            //다음 위치가 맵 밖인지 확인한다.
            if (nextX < 0 || nextX >= row ||
                nextY < 0 || nextY >= col)
            {
                //맵 밖이면 이번 방향은 무시하고 다음 방향을 확인한다.
                continue;
            }
            if (maps[nextX][nextY] == 0)
            {
                //벽이면 갈 수 없으므로 무시한다.
                continue;
            }

            if(visited[nextX][nextY] == true)
            {
                //이미 방문했다면 또 갈 필요 없으므로 무시한다.
                continue;
            }
              // 이 위치는 이제 발견했으므로 방문처리
            visited[nextX][nextY] = true;


            // 다음 칸의 거리 = 현재 칸의 거리 + 1
            distance[nextX][nextY] = distance[x][y] + 1;


            // 나중에 이 위치에서도 상하좌우를 탐색해야 하므로
            // 큐 뒤에 추가
            q.push({nextX, nextY});
        }
    }


    // 큐가 다 빌 때까지 목적지에 도착하지 못했다면
    // 목적지로 갈 수 없다는 뜻
    return -1;
}

    