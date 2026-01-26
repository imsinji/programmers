#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string str1, string str2) {
    if (std::string::npos != str1.find(str2))
        return 1;
    return 2;
}