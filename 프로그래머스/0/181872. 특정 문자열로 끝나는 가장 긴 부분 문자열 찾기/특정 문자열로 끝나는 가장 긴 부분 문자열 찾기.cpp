#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    for (int i = myString.size() - pat.size(); i >= 0; i--) {
        auto pos = myString.find(pat, i);
        if (pos != std::string::npos) {
            string temp(myString.cbegin(), myString.cbegin() + pos);
            return temp+pat;
        }
    }
    return "";
}