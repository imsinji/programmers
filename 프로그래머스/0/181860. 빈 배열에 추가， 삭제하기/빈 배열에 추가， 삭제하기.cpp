#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for (int i = 0; i < flag.size(); i++) {
        if (flag[i]) {
            vector<int> temp(arr[i]*2, arr[i]);
            copy(temp.cbegin(), temp.cend(), std::back_inserter(answer));
        } else {
            answer = vector<int>(answer.cbegin(), answer.cend()-arr[i]);
        }
    }
    return answer;
}