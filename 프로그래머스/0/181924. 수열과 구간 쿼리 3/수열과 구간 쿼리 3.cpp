#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (auto q: queries) {
        iter_swap(arr.begin()+q[0], arr.begin()+q[1]);
    }
    return arr;
}