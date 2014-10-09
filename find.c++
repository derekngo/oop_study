#include <iostream>
#include <list>
using namespace std;

template <typename T1, typename T2>
T1 find1(T1 b, T1 e, const T2& val) {
	while (b != e) {
		if (*b == val) {
			return b;
		}
		b++;
	}
	return e;
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
	const list<int> x = { 1, 2, 3, 4 };
	std::cout << boolalpha;
	std::cout << (find1(x.begin(), x.end(), 3) != x.end()) << std::endl;
	return 0;
}
