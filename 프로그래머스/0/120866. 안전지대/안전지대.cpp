#include <string>
#include <vector>

using namespace std;

vector<vector<int>> t = {{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1}};
int solution(vector<vector<int>> board) {
    int dan_area = 0;
    int x_count = board.size();
    int y_count = board[0].size();
    for (int i = 0; i < x_count; i++) {
        for (int j = 0; j < y_count; j++) {
            if (board[i][j] == 1)
                dan_area++;
            else {
                for (auto candi: t) {
                    int new_i = i+candi[0], new_j = j+candi[1];
                    if (new_i < 0 || new_i >= x_count ||
                       new_j < 0 || new_j >= y_count)
                        continue;
                    if (board[new_i][new_j] == 1) {
                        dan_area++;
                        break;
                    }
                }
            }
        }
    }
    
    return x_count*y_count-dan_area;;
}