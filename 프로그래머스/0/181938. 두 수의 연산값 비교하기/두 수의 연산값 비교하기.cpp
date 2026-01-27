#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    auto r1_s = to_string(a)+to_string(b);
    int r1 = stoi(r1_s);
    int r2 = 2*a*b;
    return r1 >= r2 ? r1 : r2;
}