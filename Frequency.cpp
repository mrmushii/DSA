#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::unordered_map<int, int> frequencyMap;

    // Calculate frequency of each element
    for (int i = 0; i < n; ++i) {
        frequencyMap[arr[i]]++;
    }

    std::cout << "Frequency of each element:\n";
    for (const auto& pair : frequencyMap) {
        std::cout << "Element: " << pair.first << ", Frequency: " << pair.second << std::endl;
    }

    return 0;
}
