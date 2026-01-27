#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    auto suffix_size = is_suffix.size();
    if (my_string.size() < is_suffix.size())
        return 0;
    return my_string.substr(my_string.size()-suffix_size, suffix_size) == is_suffix ? 1 : 0;
}