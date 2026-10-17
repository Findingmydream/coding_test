#include<iostream>
#include<vector>

using namespace std;

string nums(string s)
{
    string answer = "";
    
    if (s.length() % 2 == 0)
    {
    
        answer += s[s.length() / 2 - 1];
        answer += s[s.length() / 2];
    }

    else{
        answer += s[s.length() / 2];

    }


    return answer;

}

string solution(string s) {
    string answer = "";

    answer = nums(s);

    return answer;

}