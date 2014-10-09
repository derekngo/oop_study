#include <iostream>
#include <list>
using namespace std;

template <typename T1, typename T2>
T1 remove1(T1 b, T1 e, const T2& val) {
	T1 curr = b;
	while (b != e) {
		if (*b != val) {
			*curr = *b;
			curr++;
		}
		b++;
	}
	return curr;
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
	list<int> x = { 1, 2, 3, 4 };
	std::list<int>::iterator b_it = x.begin();
	std::list<int>::iterator e_it = x.end();
	std::cout << boolalpha;
	printContents(b_it, e_it);
	e_it = remove1(b_it, e_it, 3);
	printContents(b_it, e_it);
	return 0;
}
