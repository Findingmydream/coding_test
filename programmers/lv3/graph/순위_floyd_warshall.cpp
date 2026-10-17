#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<vector<int>> results) {
    int answer = 0;

    // graph[i][j] == 1
    // i번 선수가 j번 선수를 이긴다
    vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));

    // 직접 경기 결과 저장
    for (auto result : results) {
        int win = result[0];
        int lose = result[1];

        graph[win][lose] = 1;
    }

    // 플로이드-워셜
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {

                // i가 k를 이기고
                // k가 j를 이긴다면
                // i도 j를 이긴다.
                if (graph[i][k] && graph[k][j]) {
                    graph[i][j] = 1;
                }
            }
        }
    }

    // 순위를 확정할 수 있는 선수 찾기
    for (int i = 1; i <= n; i++) {
        int count = 0;

        for (int j = 1; j <= n; j++) {
            if (i == j) continue;

            // i가 j를 이겼거나
            // j가 i를 이겼다면
            // 둘의 순위를 비교할 수 있다.
            if (graph[i][j] || graph[j][i]) {
                count++;
            }
        }

        // 나를 제외한 n-1명과의 승패 관계를
        // 모두 알고 있다면 순위 확정
        if (count == n - 1) {
            answer++;
        }
    }

    return answer;
}