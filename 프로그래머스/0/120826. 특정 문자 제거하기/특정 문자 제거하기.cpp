#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    string answer = my_string;
    size_t pos = 0;
    
    while (true) {
        pos = answer.find(letter, pos);
        if (pos == std::string::npos)
            break;
        answer.replace(pos, letter.length(), "");
    }
    return answer;
}