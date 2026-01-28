#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    while (true) {
        auto pos = rny_string.find("m");
        if (pos == std::string::npos)
            break;
        rny_string.replace(pos, 1, "rn");
    }
    return rny_string;
}