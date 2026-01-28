#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    return string(myString.cbegin(), myString.cbegin()+myString.rfind(pat)+pat.size());
}