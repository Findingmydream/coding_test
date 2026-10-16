#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<utility>

using namespace std;

int solution(vector<int> priorities, int location){

    int answer = 0;

    //큐에 대기중인 프로세스 중 우선순위가 더 높은 프로세스가 있다면 방금 꺼낸 프로세스를 다시 큐에 넣는다.
    //리턴값 = 해당 location에 있는게 몇번쨰에 실행되는지 반환
    //location 은 걍 위치 그 위치에 있는 값이 언제나오냐를 반환해라.

    //priority랑 순서를 담는 페어를 선언해야함 
    priority_queue<int> pq;
    queue<pair<int,int>> processes;


    for(int i = 0 ; i < priorities.size(); i++){
    pq.push(priorities[i]);
    processes.push(make_pair(priorities[i],i));
    }


    while(!processes.empty()){
        //while(!q.empty())
        pair<int,int> current = processes.front(); //제일 앞에 있는 값으로 계산하려고
        processes.pop();// 확인한애는 삭제(큐에서 삭제됨)
        //몇번째에 나오냐를 반환해야하는데 
       if (current.first == pq.top()) {

        // 실제 프로세스 실행
        answer++;
        pq.pop();

        // 내가 찾는 프로세스라면 실행 순서 반환
        if (location == current.second) {
            return answer;
        }
    }
    else {
        // 우선순위가 더 높은 프로세스가 있으므로 뒤로 이동
        processes.push(current);
    }
}
    
    return answer;
}

/*
while (!processes.empty()) {

    pair<int, int> current = processes.front();
    processes.pop();

    if (current.first == pq.top()) {

        // 실제 프로세스 실행
        answer++;
        pq.pop();

        // 내가 찾는 프로세스라면 실행 순서 반환
        if (location == current.second) {
            return answer;
        }
    }
    else {
        // 우선순위가 더 높은 프로세스가 있으므로 뒤로 이동
        processes.push(current);
    }
}
*/




