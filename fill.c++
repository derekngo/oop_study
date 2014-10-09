#include <iostream>
#include <vector>
using namespace std;

template <typename T1, typename T2>
void fill1(T1 b, T1 e, const T2& val) {
	while (b != e) {
		*b = val;
		b++;
	}
}

template <typename I1>
void printContents(I1 b, I1 e) {
	std::string a;
	a += "[";
	while (b != e) {
		a += std::to_string(*b) + ", ";
		std::cout << *b << std::endl;
		b++;
	}
	a += "]";
	std::cout << a << std::endl;
}

int main() {
	// std::vector<int> x(3);
	std::vector<int> x = { 1, 2, 3 };
	printContents(x.begin(), x.end());
	fill1(x.begin(), x.end(), 4);
	printContents(x.begin(), x.end());
	return 0;
}
