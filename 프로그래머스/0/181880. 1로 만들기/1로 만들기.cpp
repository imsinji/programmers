#include <string>
#include <vector>

using namespace std;

int get_solution(int num) {
    int count = 0;
    while (num != 1) {
        num /= 2;
        count++;
    }
    return count;
}

int solution(vector<int> num_list) {
    int answer = 0;
    for (auto num: num_list) {
        answer += get_solution(num);
    }
    return answer;
}