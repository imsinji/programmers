#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> arr) {
    int target_n = pow(2, ceil(log2(arr.size()))) - arr.size();
    arr.insert(arr.end(), target_n, 0);
    return arr;
}