#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

const vector<vector<int>> dir = {{1,0}, {0,1}, {-1,0}, {0,-1}};
vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector(n, -1));
    
    int mode = 0;
    int x = 0, y = 0, c = 1;
    for (int i = 0; i < n*n; i++) {
        answer[x][y] = c;
        int new_x, new_y;
        while (true) {
            new_x = x+dir[mode][0];
            new_y = y+dir[mode][1];
            if (new_x >= 0 && new_x < n
                && new_y >= 0 && new_y < n
                && answer[new_x][new_y] == -1)
                break;
            else
                mode = (mode+1)%4;
        }
        
        x += new_x;
        y += new_y;
        c++;
    }
    return answer;
}