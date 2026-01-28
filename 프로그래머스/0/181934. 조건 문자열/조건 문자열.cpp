#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    bool check = false;
    if (eq == "=" && n == m)
        return 1;
    if (ineq == ">")
        return n>m;
    else
        return n<m;
}