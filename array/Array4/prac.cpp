#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int array_size;

    std::cout << "Enter the size of the array: ";
    std::cin >> array_size;

    std::vector<std::string> input_array;
    std::unordered_set<std::string> unique_strings;

    for (int i = 0; i < array_size; ++i) {
        std::string input_string;
        std::cout << "Enter string " << i + 1 << ": ";
        std::cin >> input_string;

        // Check if the string is already seen, if not add it to both the array and the set
        if (unique_strings.find(input_string) == unique_strings.end()) {
            unique_strings.insert(input_string);
            input_array.push_back(input_string);
        }
    }

    std::cout << "\nUpdated array after removing duplicates:" << std::endl;
    for (const std::string& string : input_array) {
        std::cout << string << std::endl;
    }

    return 0;
}
