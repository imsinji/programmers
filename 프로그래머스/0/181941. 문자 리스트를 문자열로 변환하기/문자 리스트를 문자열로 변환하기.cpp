#include <string>
#include <vector>
#include <numeric>

using namespace std;

string solution(vector<string> arr) {
    return std::accumulate(
        arr.begin(), arr.end(), string("")
    );
}