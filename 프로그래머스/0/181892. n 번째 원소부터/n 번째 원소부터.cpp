#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    return vector<int>(num_list.cbegin()+n-1, num_list.cend());
}