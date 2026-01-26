#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string str1, string str2) {
    auto size1 = str1.length();
    auto size2 = str2.length();
    for (int i = 0; i < (size1-size2+1); ++i) {
        // auto aa = str1.substr(i, size2);
        // cout << aa << endl;
        if (str2 == str1.substr(i, size2))
            return 1;
    }
    return 2;
}