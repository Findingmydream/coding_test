
//내가 실수한 코드
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;  // == return
    vector<int> release_day;
    //진도가 100% 일때 서비스 배포 가능
    //개발 속도 차이있음 but 순서대로 배포해야함
    //progresses 작업진도 speed 속도
    //각 배포마다 몇 개의 기능이 배포되는지 return 
    //release_day 변수로 잡기 
    int available = 1;

    //루프 돌려서 배포 소요일을 각각 구한다 
    // release day도 배열을 선언해야하나
    for(int i = 0 ; i < progresses.size(); i++){
        release_day[i] = (100 - progresses[i]) / speeds[i];
        //벡터에는 push_back을 해줘야지 이런식으로 값 선언은 하면 안된다.

    }

    for(int i = 1 ; i < release_day.size(); i++){
        if(release_day[i] <= release_day[i - 1]){
            // 5 < 1 전보다 배포일정이 빨라서 뒤에꺼를 배포 못하는 경우
            available++;
            answer.push_back(available);
        }

        else{// release_day[i] > release_day[i - 1];

            answer.push_back(available);
        }

    }


    return answer;
}


//풀이

#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    vector<int> release_day;

    // 1. 각 기능의 완료 날짜 계산
    for (int i = 0; i < progresses.size(); i++)
    {
        int day = (100 - progresses[i] + speeds[i] - 1) / speeds[i];
        release_day.push_back(day);
    }

    // 2. 배포 묶음 계산
    int releaseDay = release_day[0];
    int available = 1;

    for (int i = 1; i < release_day.size(); i++)
    {
        if (release_day[i] <= releaseDay)
        {
            available++;
        }
        else
        {
            answer.push_back(available);

            releaseDay = release_day[i];
            available = 1;
        }
    }

    // 3. 마지막 배포 묶음 저장
    answer.push_back(available);

    return answer;
}










