#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for (int num: indices) {
        my_string[num] = ' ';
    }
    for (auto s: my_string) {
        if (s != ' ')
            answer += s;
    }
    return answer;
}