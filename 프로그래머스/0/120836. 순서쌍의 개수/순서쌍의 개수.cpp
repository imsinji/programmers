#include <string>
#include <vector>

using namespace std;

// 약수의 갯수를 구해야 함
int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0)
            answer++;
    }
    return answer;
}