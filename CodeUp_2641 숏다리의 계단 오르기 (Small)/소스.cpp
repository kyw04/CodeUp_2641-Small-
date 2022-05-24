#include <iostream>
#include <algorithm>
using namespace std;

int f(int n, int t)
{
	if (n == 0)
		return 1;
	if (n < 0)
		return 0;

	if (!t)
		return f(n - 3, 2) + f(n - 2, t) + f(n - 1, t);
	return f(n - 2, t - 1) + f(n - 1, t - 1);
}
int main()
{
	int n;
	cin >> n;
	cout << f(n, 0);
	return 0;
}