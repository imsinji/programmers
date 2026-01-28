#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    for (size_t i = arr.size()%2==0?1:0; i < arr.size(); i += 2) {
        arr[i] += n;
    }
    return arr;
}