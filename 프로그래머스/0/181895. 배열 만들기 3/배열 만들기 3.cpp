#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for (auto interval: intervals) {
        for (size_t i = interval[0]; i <= interval[1]; i++) {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}