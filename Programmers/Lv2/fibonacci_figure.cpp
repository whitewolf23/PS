#include <vector>

using namespace std;

#define FIGURE 1234567
#define MAX_FIBO 100000

int memo[MAX_FIBO] = { 0 };

// Top-down approach
int fibo(int n)
{
	if (n < 2) return n;
	else
	{
		if (memo[n] != 0) return memo[n];
		else return memo[n] = (fibo(n - 1) + fibo(n - 2)) % FIGURE;
	}
}

// Bottom-up approach
int fibo(int n)
{
	if(n < 2) return n;
	else
	{
		int a = 0;
		int b = 1;
		for(int i = 2; i < n; ++i)
		{
			int c = a + b;
			a = b;
			b = c;
		}
		return a + b;
	}
}

int solution(int n) {
	return fibo(n);
}
