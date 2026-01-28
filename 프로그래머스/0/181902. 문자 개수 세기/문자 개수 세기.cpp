#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    int for_upper = 'A';
    int for_lower = 'a' - 26;
    for (auto s: my_string) {
        int idx = 0;
        if (isupper(s))
            idx = s - for_upper;
        else if (islower(s))
            idx = s - for_lower;
        answer[idx]++;
    }
    return answer;
}