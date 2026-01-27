#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, int n) {
    string answer = my_string.substr(my_string.size() - n);
    cout << answer << endl;
    return answer;
}