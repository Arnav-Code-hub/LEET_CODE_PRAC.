#include <stdbool.h>

bool isPalindrome(int x) {
    // Negative numbers are never palindromes
    if (x < 0) return false;

    // Reversed number could overflow int, so use long
    int n = x;
    long sum = 0;

    while (x != 0) {
        int d = x % 10;
        sum = sum * 10 + d;
        x = x / 10;
    }

    return sum == n;
}