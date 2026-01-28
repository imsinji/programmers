#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for (int i = 0; i < my_string.size(); i++) {
        if (find(indices.cbegin(), indices.cend(), i) == indices.end())
            answer += my_string[i];
    }
    return answer;
}