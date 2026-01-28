#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int sum1 = arr1.size();
    int sum2 = arr2.size();
    if (sum1 == sum2) {
        sum1 = accumulate(arr1.cbegin(), arr1.cend(), 0);
        sum2 = accumulate(arr2.cbegin(), arr2.cend(), 0);
    }
    if (sum1 > sum2) return 1;
    else if (sum1 < sum2) return -1;
    else return 0;
}