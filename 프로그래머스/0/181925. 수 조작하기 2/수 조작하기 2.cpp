#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for (int i = 0; i < numLog.size() -1; i++) {
        auto diff = numLog[i+1] - numLog[i];
        if (diff == 1)
            answer += "w";
        else if (diff == -1)
            answer += "s";
        else if (diff == 10)
            answer += "d";
        else if (diff == -10)
            answer += "a";
    }
    return answer;
}