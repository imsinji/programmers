#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    if (dot.size() != 2)
        return -1;
    if (dot[0] == 0 || dot[1] == 0)
        return -1;
    
    auto x = dot[0];
    auto y = dot[1];
    if (x > 0 && y > 0)
        return 1;
    else if (x < 0 && y > 0)
        return 2;
    else if (x < 0 && y < 0)
        return 3;
    else if (x > 0 && y < 0)
        return 4;
    
    return -1;
}