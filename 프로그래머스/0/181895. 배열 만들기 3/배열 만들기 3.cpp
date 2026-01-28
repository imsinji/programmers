#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    auto a1 = intervals[0][0];
    auto b1 = intervals[0][1];
    auto a2 = intervals[1][0];
    auto b2 = intervals[1][1];
    
    copy(arr.cbegin()+a1, arr.cbegin()+b1+1, std::back_inserter(answer));
    copy(arr.cbegin()+a2, arr.cbegin()+b2+1, std::back_inserter(answer));
    return answer;
}