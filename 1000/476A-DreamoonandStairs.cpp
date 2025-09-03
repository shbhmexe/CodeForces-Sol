//Question 47
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    std::cin >> n >> m;

    // Calculate the minimum possible moves to climb n stairs.
    int min_moves = (n + 1) / 2;
    
    // Start with min_moves and find the first value that is a multiple of m.
    int result = min_moves;
    while (result % m != 0) {
        result++;
    }

    // If the result requires more moves than stairs, it's impossible.
    if (result > n) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << result << std::endl;
    }

    return 0;
}