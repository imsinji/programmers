#include <string>
#include <vector>

using namespace std;

std::vector<string> tokenizer(string str, string separator) {
    int pos = 0;
    std::vector<string> result{};
    while (true) {
        auto new_pos = str.find(separator, pos);
        result.push_back(str.substr(pos, new_pos - pos));
        if (new_pos == std::string::npos)
            break;
        pos = new_pos + 1;
    }
    return result;
}

int solution(string binomial) {
    int answer = 0;
    auto strs = tokenizer(binomial, " ");
    int a = stoi(strs[0]);
    auto op = strs[1];
    int b = stoi(strs[2]);
    if (op == "+")
        answer = a+b;
    else if (op == "-")
        answer = a-b;
    else if (op == "*")
        answer = a*b;
    
    return answer;
}