#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    auto max_i = 0;
    while (r > pow(10, max_i)) max_i++;
    
    vector<vector<int>> cal = {{5}};
    cal.resize(max_i);
    for (int i = 1; i < max_i; i++) {
        vector<int> temp;
        for (auto c: cal[i-1]) {
            temp.push_back(c*10);
            temp.push_back(c*10+5);
        }
        cal[i] = temp;
    }
    
    for (auto c: cal) {
        for (auto cc: c) {
            if (cc >= l && cc <= r) {
                answer.push_back(cc);
            }
        }
    }
    if (answer.empty())
        return {-1};
    
    return answer;
}