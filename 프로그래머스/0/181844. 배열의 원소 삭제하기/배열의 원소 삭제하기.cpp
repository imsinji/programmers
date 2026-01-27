#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for (auto del: delete_list) {
        arr.erase(
            remove_if(
                arr.begin(), arr.end(),
                [del](int _) { return _ == del; }
            ), arr.end()
        );
    }
    return arr;
}