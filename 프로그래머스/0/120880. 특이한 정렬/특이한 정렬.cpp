#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    transform(
        numlist.cbegin(), numlist.cend(), back_inserter(answer),
        [n](int _) { return _-n;}
    );
    sort(answer.begin(), answer.end(),
        [n](int a, int b) {
           return (abs(a) < abs(b)) || (abs(a) == abs(b) && a > b);
        });
    transform(
        answer.cbegin(), answer.cend(), answer.begin(),
        [n](int _) { return _+n;}
    );
    return answer;
}