#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

/**
 * @brief checks if a number is a palindrome.
 * @param num the number to check.
 * @return 1 if num is a palindrome, 0 otherwise.
 */
bool isPalindrome(int num) {
    std::string str = std::to_string(num);
    std::string rev{str};
    std::reverse(rev.begin(), rev.end());
    return rev == str;
}

int main() {
    std::vector<int> arr{0};

    for (int i = 99; i <= 999; ++i) {
        for (int j = i; j >= 99; --j) {

            if (isPalindrome(i * j))
                arr.push_back(i * j);
        }
    }
    std::cout << "Max palindrome: " << *std::max_element(arr.begin(), arr.end()) << std::endl;
}
