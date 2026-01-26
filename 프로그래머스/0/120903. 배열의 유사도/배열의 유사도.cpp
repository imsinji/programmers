#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    std::set<string> s2_set;
    for (auto s: s2)
        s2_set.insert(s);
    for (auto s: s1) {
        auto found = s2_set.find(s);
        if (found != s2_set.end())
            answer++;
    }
    return answer;
}