#include <iostream>
using namespace std;

/* Project Euler #6:
 * The sum of the squares of the first ten natural numbers is,
 *
 * 1^2 + 2^2 + ... + 10^2 = 385
 * The square of the sum of the first ten natural numbers is,
 *
 * (1 + 2 + ... + 10)^2 = 55^2 = 3025
 * Hence the difference between the sum of the squares of the first 
 * ten natural numbers and the square of the sum is 3025 − 385 = 2640.
 *
 * Find the difference between the sum of the squares of the first 
 * one hundred natural numbers and the square of the sum. */

int main()
{
    int sumOfSquares = 0;
    int squareOfSums = 0;
    for(int x = 0; x <= 100; x++)
    {
        sumOfSquares += x*x;
        squareOfSums += x;
    }
    squareOfSums *= squareOfSums;
    // Answer: 25164150
    cout << "Diff between sum of squares and square of sums: "
         << squareOfSums - sumOfSquares << endl;
    return 0;
}
