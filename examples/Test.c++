#include <cassert>   // assert
#include <iostream>  // boolalpha, cout, endl
#include <memory>    // allocator

using namespace std;

int main () {

    allocator<double> x;
    double* q = x.allocate(123456789012345LL);
    cout << q << endl;

    return 0;}
