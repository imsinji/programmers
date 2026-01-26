#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int rr = sqrt(n);
    return n%rr == 0 ? 1 : 2;
}