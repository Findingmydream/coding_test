#include <string>
#include <vector>
#include <algorithm>

using namespace std;


// 난이도 점수가 높은 묶음부터 정렬
bool compareGroup(const vector<int>& a, const vector<int>& b)
{
    return a[0] > b[0]; //난이도로 정렬 실시.
}

int solution(vector<int> picks, vector<string> minerals)
{
    int answer = 0;


    // 곡괭이로 최대 몇 개의 광물을 캘 수 있는지 계산
    int maxCount = 0;

    for (int i = 0; i < picks.size(); i++)
    {
        maxCount += picks[i] * 5;
    }


    // 광물개수 곡괭이 개수는 모르니까 그중에서 최솟값 반환
    maxCount = min(maxCount, (int)minerals.size());



    // [난이도, 다이아개수, 철개수, 돌개수]
    vector<vector<int>> groups;


    // 광물을 5개씩 묶기 곡괭이 5번까지 사용가능하므로
    for (int i = 0; i < maxCount; i += 5)
    {
        int diamond = 0;
        int iron = 0;
        int stone = 0;


        // i부터 최대 5개의 광물을 확인
        for (int j = i; j < i + 5 && j < maxCount; j++)
        {
            if (minerals[j] == "diamond")
            {
                diamond++;
            }
            else if (minerals[j] == "iron")
            {
                iron++;
            }
            else
            {
                stone++;
            }
        }


        // 돌 곡괭이로 캤을 때의 피로도를 난이도로 사용 판단하기 쉬우니까
        int score = diamond * 25
                  + iron * 5
                  + stone;


        groups.push_back({score, diamond, iron, stone});
    }


    // 깨기 어려운 묶음부터 정렬
    sort(groups.begin(), groups.end(), compareGroup);
    //sort 함수 쓰는법 (내부에 있는것을, compareGroup 으로)


    // 어려운 묶음부터 좋은 곡괭이 사용
    for (int i = 0; i < groups.size(); i++)
    {
        int diamond = groups[i][1];
        int iron = groups[i][2];
        int stone = groups[i][3];


        // 다이아 곡괭이가 있으면 사용
        if (picks[0] > 0)
        {
            answer += diamond;
            answer += iron;
            answer += stone;

            picks[0]--;
        }

        // 다이아 곡괭이가 없으면 철 곡괭이
        else if (picks[1] > 0)
        {
            answer += diamond * 5;
            answer += iron;
            answer += stone;

            picks[1]--;
        }

        // 다이아, 철 곡괭이가 없으면 돌 곡괭이
        else if (picks[2] > 0)
        {
            answer += diamond * 25;
            answer += iron * 5;
            answer += stone;

            picks[2]--;
        }
    }


    return answer;
}