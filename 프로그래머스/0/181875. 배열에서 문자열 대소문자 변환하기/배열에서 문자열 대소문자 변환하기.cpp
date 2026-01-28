#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <numeric>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (size_t i = 0; i < strArr.size(); i++) {
        string target = strArr[i];
        transform(
            target.begin(), target.end(), target.begin(),
            i & 1 ? ::toupper : ::tolower
        );
        answer.push_back(target);
    }
    return answer;
}