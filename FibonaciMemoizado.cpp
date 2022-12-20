#include <iostream>

#define NIL 0
#define MAX 1000

long int lookup_table[MAX] = {};

using namespace std;

long int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

long int fib_mem(int n) {
    assert(n < MAX);
    if(lookup_table[n] == NIL) {
        if(n <= 1)
            lookup_table[n] = n;
        else
            lookup_table[n] = fib_mem(n-1) + fib_mem(n-2);
    }
    return lookup_table[n];
}

int main() {
    int n;
    long int fibonnaci, fibonacci_mem;
    cout << " n = "; cin >> n;

    // naive solution
    fibonnaci = fib(n);

    // memoized solution
    // initialize();
    fibonacci_mem = fib_mem(n);

    cout << fibonnaci << endl << fibonacci_mem << endl;

    return 0;
}
