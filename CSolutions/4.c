#include <stdio.h>

/* Project Euler #4:
 * A palindromic number reads the same both ways.
 * The largest palindrome made from the product of
 * two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of
 * two 3-digit numbers.*/

/* Not Complete Yet! */

int is_palindrome(char *str);
char* reverse(char *str);
char* to_string(int number);

int main()
{
    int product;
    int max = 0;
    char *str_number;
    for (int x = 100; x < 1000; x++) {
        for (int y = 100; y < 1000; y++) {
            product = x * y;
        }
    }
    return 0;
}

char* to_string(int number)
{
    int rem;
    int len = 0;
    int n = number;
    while (number != 0) {
        len++;
        n /= 10;
    }
    char str[len];
    n = number;
    for (int i = 0; i < len; i++) {
        rem = n % 10;
        n /= 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
    return str;
}
