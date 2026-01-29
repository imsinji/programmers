#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for (const auto& str: order) {
        int price = 4500;
        if (str.find("cafelatte") != std::string::npos) {
            price = 5000;
        }
        answer += price;
    }
    return answer;
}