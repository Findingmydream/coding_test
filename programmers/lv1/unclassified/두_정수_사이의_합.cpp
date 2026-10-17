#include <string>
#include <vector>

using namespace std;

long long sum(int a, int b)
{
    long long sum = 0;
    
    if(a > b)
    {
        for(int i = b; i <= a; i++)
        {
            sum += i;
        }

    }
    else if (a < b)
    {

        for (int i = a ; i <= b; i++)
        {
            sum += i;
        }

    }

    else
    {
        sum = a;
    }

    return sum;
}


long long solution(int a, int b) {
    
    long long answer = 0;
    answer = sum(a,b);
    return answer;
}

// 간단버전`

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long solution(int a, int b){

    long long answer = 0;

    int begin = min(a,b);
    int end = max(a,b);

    for (int i = begin; i <= end; i++)
    {

        answer += i;

    }


    return answer;
}
