#include <cassert>  // assert
#include <iostream> // boolalpha, cout, endl

using namespace std;

int main () {

	const char s[4] = "abc";

	const char* r = &s[0];

	const char* a = "abc";

	char p = *a;
	cout << p << endl;

	cout << static_cast<void*>(&p) << endl;

	const int ci = 2;

	const int* q = &ci;


    return 0;}
