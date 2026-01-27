#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for (auto del: delete_list) {
        auto found = std::find(arr.cbegin(), arr.cend(), del);
        if (found != arr.cend())
            arr.erase(found);
    }
    return arr;
}