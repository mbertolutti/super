// lc509.cpp 'Fibonacci Number'

#include <fmt/core.h>

int fib(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return (fib(n - 2) + fib(n - 1));
}

int main()
{
    int n = 7;
    fmt::print("{}{}{}{}{}", "fib number ", n, " is ", fib(n), ".\n\n");
}
