#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for (auto q: queries) {
        int s = q[0], e = q[1];
        reverse(my_string.begin()+s, my_string.begin()+e+1);
    }
    return my_string;
}