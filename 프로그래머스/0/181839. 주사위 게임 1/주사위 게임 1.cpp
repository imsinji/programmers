#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    bool is_a_odd = a%2!=0;
    bool is_b_odd = b%2!=0;
    if (is_a_odd && is_b_odd)
        return pow(a,2) + pow(b,2);
    else if (is_a_odd || is_b_odd)
        return (a+b)*2;
    else
        return abs(a-b);
}