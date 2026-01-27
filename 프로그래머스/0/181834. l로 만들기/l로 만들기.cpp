#include <string>
#include <vector>
#include <cctype>
#include <iostream>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (auto s: myString) {
        answer += s < 'l' ? 'l' : s;
    }
    return answer;
}