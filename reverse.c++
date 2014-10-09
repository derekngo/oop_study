#include <iostream>
#include <list>
using namespace std;

template <typename V>
void swap1(V& a, V&b);

template <typename T>
void reverse1(T b, T e) {
	while (b != e && b != --e) {
		/*int swap = *b;
		*b = *e;
		*e = swap;*/
		swap(*b, *e);
		b++;
	}
}

template <typename V>
void swap1(V& a, V&b) {
	V swap_val = a;
	*a = *b;
	*b = swap_val;
}
/*template <typename T>
void reverse1(T* b, T* e) {
	T curr = b;
	while (b != e && b != --e) {
		T swap = *b;
		*b = *e;
		*e = swap;
		b++;
	}
}*/

template <typename I1>
void printContents(I1 b, I1 e) {
	std::string a;
	a += "[";
	while (b != e) {
		a += std::to_string(*b) + ", ";
		//std::cout << *b << std::endl;
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
	reverse1(b_it, e_it);
	printContents(b_it, e_it);
	return 0;
}
