#include <iostream>
using namespace std;

int numberOfDigit(int N)
{
	int digit = 0;

	while (N > 0) {
		
		
		digit++;

		N /= 10;
	}
	return digit;
}

void rotate(int N, int K)
{	
	int X = numberOfDigit(N);

	K = ((K % X) + X) % X;

	int left_no = N / (int)(pow(10, X - K));
	
	N = N % (int)(pow(10, X - K));

	int left_digit = numberOfDigit(left_no);

	N = (N * (int)(pow(10, left_digit))) + left_no;
	cout << N;
}

int main()
{
	int a=12345, pos=3;

	rotate(a, pos);

	return 0;
}


