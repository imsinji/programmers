#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer = arr;
    for (int i = 0; i < query.size(); i++) {
        int q = query[i];
        if (i%2 == 0) {
            answer = vector(answer.cbegin(), answer.cbegin()+q+1);
        } else {
            answer = vector(answer.cbegin()+q, answer.cend());
        }
    }
    return answer;
}