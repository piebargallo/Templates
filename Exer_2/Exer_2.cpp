/* Calculate the n number in the Fibonacci series at compile time using template recursion. The Fibonacci series
   starts with 0 and 1, and any subsequent value is the sum of the two previous values, so: 0, 1, 1, 2, 3, 5, 8,
   13, 21, 34, 55, 89, and so on. */

#include <iostream>
using std::cout;
using std::endl;

template <unsigned int n>
class Fibonacci
{
public:
	static const unsigned long long value{ Fibonacci<n - 2>::value + Fibonacci<n - 1>::value };
};

template <>
class Fibonacci<0>
{
public:
	static const unsigned long long value{ 0 };
};

template <>
class Fibonacci<1>
{
public:
	static const unsigned long long value{ 1 };
};


int main()
{
	cout << Fibonacci<0>::value << endl;
	cout << Fibonacci<1>::value << endl;
	cout << Fibonacci<2>::value << endl;
	cout << Fibonacci<3>::value << endl;
	cout << Fibonacci<4>::value << endl;
	cout << Fibonacci<5>::value << endl;
	cout << Fibonacci<6>::value << endl;
	cout << Fibonacci<7>::value << endl;
	cout << Fibonacci<8>::value << endl;
	cout << Fibonacci<9>::value << endl;
	cout << Fibonacci<10>::value << endl;
	cout << Fibonacci<11>::value << endl;
}