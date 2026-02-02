#include <string>
#include <vector>

using namespace std;

double getnum(vector<int> a, vector<int> b) {
    return ((double)a[1]-b[1])/(a[0]-b[0]);
}
int solution(vector<vector<int>> dots) {
    vector<vector<int>> t1 = {{0,1},{0,2},{0,3},{1,2},{1,3},{2,3}};
    vector<vector<int>> t2 = {{2,3},{1,3},{1,2},{0,3},{0,2},{0,1}};
    for (int i = 0; i < t1.size(); i++) {
        int a1 = t1[i][0], a2 = t1[i][1];
        int b1 = t2[i][0], b2 = t2[i][1];
        if (getnum(dots[a1], dots[a2]) ==
                   getnum(dots[b1], dots[b2]))
            return 1;
    }
    return 0;
}