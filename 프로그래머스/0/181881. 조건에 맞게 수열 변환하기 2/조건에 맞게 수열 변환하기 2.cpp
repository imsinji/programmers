#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int x = -1;
    int count = -1;
    while (count != 0) {
        count = 0;
        for (auto& a: arr) {
            if (a>=50 && a%2==0) {
                a /= 2;
                count++;
            } else if (a <50 && a%2==1) {
                a = (a*2 + 1);
                count++;
            }
        }
        x++;
    }
    return x;
}