#include <string>
#include <vector>
#include <numeric>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    string aa = std::accumulate(
        arr.begin(), arr.end(), answer,
        [](string a, string b) { return a + b; }
    );
    return aa;
}