#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto q: queries) {
        auto s = q[0], e = q[1], k = q[2];
        vector<int> temp(arr.cbegin()+s, arr.cbegin()+e+1);
        sort(temp.begin(), temp.end());
        int num = -1;
        for (auto t: temp) {
            if (t > k) {
                num = t;
                break;
            }
        }
        answer.push_back(num);
    }
    return answer;
}