#include <string>
#include <vector>

using namespace std;

bool check(int n) {
    if (n/3!=0 && n%3==0)
        return true;
    while (n!=0) {
        if (n%10==3)
            return true;
        n /= 10;
    }
    return false;
}
int solution(int n) {
    for (int i = 1; i <= n; i++) {
        if (check(i)) {
            n++;
        }
    }
    return n;
}