#include <string>
#include <vector>

// 최소공배수
using namespace std;

int gcd(int aa, int bb) {
    int a = max(aa, bb);
    int b = min(aa, bb);
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lm(int a, int b) {
    return a*b/gcd(a, b);
}

int solution(int n) {
    auto l = lm(n, 6);
    return l/6;
}