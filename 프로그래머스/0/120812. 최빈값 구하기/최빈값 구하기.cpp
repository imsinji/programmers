#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<int> array) {
    std::map<int, int> result;
    for (auto n: array) {
        result[n]++;
    }
    int max_n = 0;
    int max_value = 0;
    bool is_dup = false;
    for (auto r: result) {
        cout << r.first << endl;
        cout << r.second << endl;
        if (max_value < r.second) {
            max_n = r.first;
            max_value = r.second;
            is_dup = false;
        } else if (max_value == r.second) {
            is_dup = true;
        }
    }
    return is_dup ? -1 : max_n;
}