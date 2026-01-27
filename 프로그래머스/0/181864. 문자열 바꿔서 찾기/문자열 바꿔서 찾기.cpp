#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string myString, string pat) {
    for (auto& s: myString) {
        s = s == 'A' ? 'B' : 'A'; 
    }
    return myString.find(pat) == std::string::npos ? 0 : 1;
}