#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    return string(my_string.cbegin(), my_string.cbegin()+n);
}