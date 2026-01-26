#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    std::copy(numbers.cbegin()+num1, numbers.cbegin()+num2+1, std::back_inserter(answer));
    return answer;
}