#include <string>
#include <vector>
#include <cctype>
#include <iostream>

using namespace std;

string solution(string myString) {
    string answer = "";
    string target = "l";
    for (auto s: myString) {
        if (int(s) < int(target[0]))
            answer += target;
        else answer += s;
    }
    return answer;
}