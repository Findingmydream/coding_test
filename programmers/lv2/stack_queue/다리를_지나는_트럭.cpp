#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {

    int answer = 0;
    int currentWeight = 0;//현재 무게

    queue<int> available; //대기하고 있는 트럭을 담은 큐
    queue<int> acrossing; //건너고 있는 트럭을 담은 큐

    // 대기 트럭을 큐에 저장
    for (int i = 0; i < truck_weights.size(); i++) {
        available.push(truck_weights[i]);
    }

    // 다리의 빈 공간을 0으로 표현 왜냐고?? 0으로 초기화 해놔야 나중에 사이즈 구하거나 큐.size()를 이용해 코드 짜기 편하니까.
    for (int i = 0; i < bridge_length; i++) {
        acrossing.push(0);
    }

    while (!available.empty()) {

        answer++;

        // 1초가 지나면서 맨 앞 칸이 다리에서 빠짐
        currentWeight -= acrossing.front();
        acrossing.pop();

        // 다음 트럭이 올라갈 수 있는지 확인
        if (currentWeight + available.front() <= weight) {

            int truck = available.front();
            available.pop();

            acrossing.push(truck);
            currentWeight += truck;

        } else {
            // 트럭을 올릴 수 없으면 빈 칸
            acrossing.push(0);
        }
    }

    // 마지막 트럭이 다리를 완전히 빠져나오는 시간
    return answer + bridge_length;
}