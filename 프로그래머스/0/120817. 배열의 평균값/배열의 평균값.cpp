#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) {
    double answer = std::accumulate(numbers.cbegin(), numbers.cend(), 0.0) / numbers.size();
    return answer;
}