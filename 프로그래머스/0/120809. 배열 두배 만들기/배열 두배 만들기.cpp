#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    auto to_double = [](int _) { return _ * 2;};
    std::vector<int> result;
    std::transform(numbers.begin(), numbers.end(), std::back_inserter(result), to_double);
    return result;
}