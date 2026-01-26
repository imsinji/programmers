#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    int cnt = money/5500;
    int remain = money - cnt*5500;
    return {cnt, remain};
}