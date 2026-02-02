#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    map<int, vector<int>> m;
    for (int i = 0; i < score.size(); i++) {
        auto sc = score[i];
        auto sum = sc[0]+sc[1];
        m[sum].push_back(i);
    }
    vector<int> answer;
    answer.resize(score.size());
    int current_rank = 1;
    for (auto iter = m.rbegin(); iter != m.rend(); ++iter) {
        auto target = *iter;
        for (auto ind: target.second) {
            answer[ind] = current_rank;
        }
        current_rank += target.second.size();
    }
    return answer;
}