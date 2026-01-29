#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int x = 0;
    while (true) {
        auto temp = arr;
        for (auto& a: arr) {
            if (a>=50 && a%2==0) {
                a /= 2;
            } else if (a <50 && a%2==1) {
                a = (a*2 + 1);
            }
        }
        if (arr == temp) {
            return x;
        }
        x++;
    }
    return -1;
}