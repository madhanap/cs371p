#include <iostream> // cout, endl

using namespace std;

int main()
{

int i =2;
const int ci = 3;
const int* pc = &ci;

int *p = const_cast <int*> (pc);

*p = 4;


cout << " ci value is " << ci << endl;
cout << "*pc value is " << *pc << endl;
cout << "*p value is " << *p << endl;

cout << "&ci value is " << &ci << endl;
cout << "p value is " << p << endl;
cout << "pc value is " << pc << endl;

}
