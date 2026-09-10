#include <iostream>
#include <vector>
#include <utility>   

template<typename T>
void BubbleSort(std::vector<T>& vec) {
    bool swapped;
    for (size_t i = 0; i < vec.size(); ++i) {
        swapped = false;
        for (size_t j = 0; j + 1 < vec.size() - i; ++j) {
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    setlocale(LC_ALL, "");
    std::vector<int> numbers = { 5, 2, 9, 1, 5, 6 };

    std::cout << "До сортировки: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    BubbleSort(numbers);

    std::cout << "После сортировки: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}
