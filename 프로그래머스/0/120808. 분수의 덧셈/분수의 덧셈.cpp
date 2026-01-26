#include <string>
#include <vector>
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int aa = a > b ? a : b;
    int bb = a < b ? a : b;
	int c;
	while (bb != 0)
	{
		c = aa % bb;
		aa = bb;
		bb = c;
	}
	return aa;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    auto numer = numer1 * denom2 + numer2 * denom1;
    auto denom = denom1 * denom2;
    auto g = gcd(numer,denom);
    return {numer/g, denom/g};
}