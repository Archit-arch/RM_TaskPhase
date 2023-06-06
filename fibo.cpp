#include <iostream>
#include <unordered_map>
#include <chrono>

// Function to compute the nth Fibonacci number using memoization
long long fibonacci(int n, std::unordered_map<int, long long>& memo) {
    if (n <= 1) {
        return n;
    }

    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    long long fib = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    memo[n] = fib;
    return fib;
}

int main() {
    std::unordered_map<int, long long> memo;

    std::cout << "First 40 terms of the Fibonacci sequence:" << std::endl;

    auto start = std::chrono::steady_clock::now();

    for (int i = 0; i < 40; i++) {
        long long fib = fibonacci(i, memo);
        std::cout << fib << " ";
    }

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << std::endl;
    std::cout << "Execution time: " << duration << " milliseconds" << std::endl;

    return 0;
}