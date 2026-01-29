#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    for (int i = 0; i < str_list.size(); i++) {
        if (str_list[i] == "l") {
            answer = vector<string>(str_list.cbegin(), str_list.cbegin()+i);
            break;
        } else if (str_list[i] == "r" && i < (str_list.size()-1)) {
            answer = vector<string>(str_list.cbegin()+i+1, str_list.cend());
            break;
        }
    }
    return answer;
}