#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    auto temp = my_string.substr(s, e-s+1);
    copy(temp.crbegin(), temp.crend(), my_string.begin()+s);
    return my_string;
}