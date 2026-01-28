#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    size_t pos = 0;
    while (true) {
        auto new_pos = my_string.find(" ", pos);
        auto temp = my_string.substr(pos, new_pos-pos);
        answer.push_back(temp);
        if (new_pos == std::string::npos)
            break;
        pos = new_pos+1;
    }
    return answer;
}