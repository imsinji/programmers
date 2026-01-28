#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    int from = 0;
    int to = num_list.size()-1;
    int interval = 1;
    if (n == 1) {
        to = slicer[1];
    } else if (n == 2) {
        from = slicer[0];
    } else if (n == 3 || n == 4) {
        from  = slicer[0];
        to = slicer[1];
        if (n == 4)
            interval = slicer[2];
    }
    vector<int> answer;
    for (int i = from; i <= to; i += interval) {
        answer.push_back(num_list[i]);
    }
    return answer;
}