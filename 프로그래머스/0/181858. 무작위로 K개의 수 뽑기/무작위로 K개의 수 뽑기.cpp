#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++) {
        if (find(answer.cbegin(), answer.cend(), arr[i]) == answer.end()) {
            answer.push_back(arr[i]);
        }
        if (answer.size() >= k)
            return answer;
    }
    if (k > answer.size()) {
        answer.insert(answer.end(), k-answer.size(), -1);
    }
    return answer;
}