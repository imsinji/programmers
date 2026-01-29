#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int row_count = arr.size();
    int col_count = arr[0].size();
    
    if (row_count == col_count)
        return arr;
    else if (row_count > col_count) {
        for (int i = 0; i < row_count; i++) {
            arr[i].insert(arr[i].end(), row_count-col_count , 0);
        }
    } else {
        vector<int> temp(col_count, 0);
        arr.insert(arr.end(), col_count-row_count, temp);
    }
    return arr;
}