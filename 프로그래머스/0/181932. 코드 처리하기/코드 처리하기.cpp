#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string ret = "";
    int mode = 0;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '1') {
            mode = (mode+1)%2;
            continue;
        }
        if (i%2 == mode) {
            ret += code[i];
        }
    }
    if (ret.empty())
        return "EMPTY";
    return ret;
}