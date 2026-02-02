#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    istringstream ss(polynomial);
    string token;
    int x = 0;
    int c = 0;
    while (ss >> token) {
        if (token == "+")
            continue;
        if (token == "x") {
            x++;
        } else if (token.back() == 'x') {
            int i = stoi(token);
            x += i;
        } else {
            int i = stoi(token);
            c += i;
        }
    }
    string answer = "";
    if (x != 0) {
        if (x != 1)
            answer += to_string(x);
        answer += "x";
    }
    if (c != 0) {
        if (!answer.empty())
            answer += " + ";
        answer += to_string(c);
    }
    return answer;
}