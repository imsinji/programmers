#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    auto func = [k](int _) { return k%2 == 0 ? _+k : _*k; };
    vector<int> answer;
    std::transform(arr.cbegin(), arr.cend(), std::back_inserter(answer), func);
    return answer;
}