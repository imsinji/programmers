#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    unordered_map<int, int> m;
    for (int i = 0; i < rank.size(); i++) {
        if (attendance[i])
            m[rank[i]] = i;
    }
    int answer = 0;
    int mul = 10000;
    for (int i = 1; i <= rank.size(); i++) {
        if (auto found = m.find(i); found != m.end()) {
            answer += found->second*mul;
            mul /= 100;
            if (mul == 0)
                break;
        }
    }
    
    return answer;
}