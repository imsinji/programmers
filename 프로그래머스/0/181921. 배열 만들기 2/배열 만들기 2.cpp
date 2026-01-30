#include <string>
#include <vector>
#include <queue>

#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    queue<int> q;
    q.push(5);
    while (!q.empty()) {
        int n = q.front();
        q.pop();
        if (n > r) break;
        if (n >= l && n <= r)
            answer.push_back(n);
        q.push(n*10);
        q.push(n*10+5);
    }
    if (answer.empty())
        return {-1};
    
    return answer;
}