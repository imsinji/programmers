#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers) {
    std::priority_queue<int> max_queue;
    for (auto n: numbers)
        max_queue.push(n);
    auto mm = max_queue.top();
    max_queue.pop();
    auto nn = max_queue.top();
    return mm * nn;
}