#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    auto aa = max(a, b);
    auto bb = min(a, b);
    while (bb!=0) {
        auto c = aa%bb;
        aa = bb;
        bb = c;
    }
    return aa;
}

int solution(int a, int b) {
    auto bb = b/gcd(a, b);
    while (bb > 1) {
        if (bb%2 == 0) {
            bb /= 2;
        } else if (bb%5 == 0) {
            bb /= 5;
        } else {
            return 2;
        }
    }
    return 1;
}