#include <string>
#include <vector>
#include <cctype>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (auto s: my_string) {
        if (isdigit(s) == 1) {
            std::string c{s};
            answer += stoi(c);
        }
    }
    return answer;
}