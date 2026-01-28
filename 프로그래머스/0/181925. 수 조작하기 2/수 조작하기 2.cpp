#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<int> numLog) {
    map <int, string> m = { {1, "w"}, {-1, "s"}, {10, "d"}, {-10, "a"} };
    string answer = "";
    for (int i = 0; i < numLog.size() -1; i++) {
        answer += m[numLog[i+1] - numLog[i]];
    }
    return answer;
}