#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

string solution(string a, string b) {
    string answer;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int max_c = max(a.size(), b.size());
    int carry = 0;
    for (int i = 0; i < max_c; i++) {
        int aa = 0, bb = 0;
        if (i < a.size())
            aa = a[i]-'0';
        if (i < b.size())
            bb = b[i]-'0';
        auto sum = carry + aa + bb;
        carry = sum/10;
        answer += to_string(sum%10);
    }
    if (carry != 0) {
        answer.push_back('1');
    }
    reverse(answer.begin(), answer.end());
    return answer;
}