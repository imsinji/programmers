#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

string solution(vector<string> str_list, string ex) {
    return std::accumulate(
        str_list.cbegin(), str_list.cend(), string(""),
        [ex](string a, string b) { 
            return b.find(ex) == std::string::npos ? (a+b) : a; }  
    );
}