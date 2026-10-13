#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution (int n, int m){
    vector<int> answer;

    pair<int, int> p = {gcd(n,m), lcm(n,m)};

    vector<int> answer;
    answer.push_back(p.first);
    answer.push_back(p.second);

    return answer;

}