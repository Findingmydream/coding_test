#include <vector>
#include <algorithm>

  using namespace std;

  vector<int> solution(vector<int> answers) {
      vector<vector<int>> patterns = {
          {1, 2, 3, 4, 5},
          {2, 1, 2, 3, 2, 4, 2, 5},
          {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}
      };

      vector<int> scores(3, 0);

      for (int i = 0; i < answers.size(); i++) {
          for (int j = 0; j < 3; j++) {
              if (answers[i] == patterns[j][i % patterns[j].size()])
              // patterns의 1번째와 2번째 3번째 마다 pattern을 돈다.
              //
              //
              {
               //answer[i]값과 patterns의 값이 같다면 score++
                scores[j]++;
              }
          }
      }

      int maxscore = *max_element(scores.begin(), scores.end());

      vector<int> answer;
      for (int j = 0; j < 3; j++) {
          if (scores[j] == maxscore) {
              answer.push_back(j + 1);
          }
      }

      return answer;
  }
