#include <string>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int a, int b, int c, int d) {
    unordered_map<int, int> m;
    for (auto v: {a, b, c, d}) {
        m[v]++;
    }
    
    int type = -1;
    if (m.size() == 4) {
        type = 4;
    }
    else if (m.size() == 3) {
        type = 3;
    }
    else if (m.size() == 1)
        type = 0;
    else {
        for (auto mm: m) {
            if (mm.second == 3) {
                type = 1;
                break;
            } else if (mm.second == 2) {
                type = 2;
                break;
            }
        }
    }
    
    int p = -1, q = -1, r = -1;
    for (auto mm: m) {
        if (type == 0) {
            p = mm.first;
            break;
        } else if (type == 1) {
            if (mm.second == 3)
                p = mm.first;
            else
                q = mm.first;
        } else if (type == 2) {
            if (p == -1)
                p = mm.first;
            else
                q = mm.first;
        } else if (type == 3) {
            if (mm.second == 2)
                p = mm.first;
            else if (q == -1)
                q = mm.first;
            else
                r = mm.first;
        }
    }
    if (type == 0)
        return 1111*p;
    else if (type == 1)
        return pow(10*p+q, 2);
    else if (type == 2)
        return (p+q)*abs(p-q);
    else if (type == 3)
        return q*r;
    else
        return min(min(a,b), min(c,d));
}