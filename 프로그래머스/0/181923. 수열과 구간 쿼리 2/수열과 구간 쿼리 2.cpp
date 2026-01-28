#include <string>
#include <vector>
#include <cmath>

using namespace std;
const int MAX_VAL = 999999;
vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto q: queries) {
        auto s = q[0], e = q[1], k = q[2];
        int min_val = MAX_VAL;
        for (int i = s; i <= e; i++) {
            if (arr[i] > k) {
                min_val = min(arr[i], min_val);
            }
        }
        if (min_val == MAX_VAL) 
            min_val = -1;
        answer.push_back(min_val);
    }
    return answer;
}