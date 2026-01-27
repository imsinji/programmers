#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = my_string;
    for (size_t i = 0; i < overwrite_string.size(); ++i) {
        answer[i+s] = overwrite_string[i];
    }
    return answer;
}