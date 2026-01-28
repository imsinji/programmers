#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> tokenizer(string str, string separator) {
    int pos = 0;
    vector<string> result;
    while (true) {
        auto new_pos = str.find(separator, pos);
        auto text = str.substr(pos, new_pos - pos);
        if (text != "")
            result.emplace_back(text);
        if (new_pos == std::string::npos)
            break;
        pos = new_pos + 1;
    }
    return result;
}

vector<string> solution(string myString) {
    vector<string> answer = tokenizer(myString, "x");
    sort(answer.begin(), answer.end());
    return answer;
}