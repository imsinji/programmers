#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    std::copy(my_string.cbegin() + (my_string.size()-n), my_string.cend(), std::back_inserter(answer));
    cout << answer << endl;
    return answer;
}