#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for (const auto& str: quiz) {
        istringstream ss(str);
        int op = 1;
        string token;
        vector<int> values;
        while(ss >> token) {
            if (token == "+" || token == "=") {
                op = 1;
                continue;
            } else if (token == "-") {
                op = -1;
                continue;
            } else {
                values.push_back(stoi(token)*op);
            }
        }
        if (values[0] + values[1] == values[2])
            answer.push_back("O");
        else
            answer.push_back("X");
    }
    return answer;
}