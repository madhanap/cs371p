#include <iostream> // cout, endl

struct A {
    char c1;
    int  i;
    char c2;
    char c3;};

struct B : A {
    char c4;};

int main () {
    using namespace std;
    cout << "Test.c++" << endl;

    cout << sizeof(char) << endl;
    cout << sizeof(int)  << endl;
    cout << sizeof(A)    << endl;
    cout << sizeof(B)    << endl;

    cout << "Done." << endl;
    return 0;}

/*
% g++ -v
gcc version 4.2.1 (Based on Apple Inc. build 5658) (LLVM build 2336.11.00)

% g++ -pedantic -std=c++98 -Wall Test.c++ -o Test.c++.appx
% Test.c++.appx
Test.c++
1
4
8
12
Done.

% clang++ -v
Apple LLVM version 4.2 (clang-425.0.24) (based on LLVM 3.2svn)

% clang++ -pedantic -std=c++11 -Wall -Wno-sizeof-array-argument Test.c++ -o Test.c++.appy
% Test.c++.appy
Test.c++
1
4
8
12
Done.
*/
