#include <string>
#include <vector>

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

int solution(int n) {
    return n / gcd(n, 6);
}