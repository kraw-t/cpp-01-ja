// チャレンジ3
// `std::vector<int>` を引数にとり、各要素の値を2倍にした新しい `std::vector<int>` を返す関数 `double_elements` を作成してください。
// 次に、範囲ベースのforループを使用して、元のvectorと新しいvectorの両方の要素を出力します。

#include <iostream>
#include <vector>

std::vector<int> double_elements(const std::vector<int>& original_vector);

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> doubled_numbers;

    doubled_numbers = double_elements(numbers);
    
    // 各々の要素を出力
    std::cout << "Original vector." << std::endl;
    for (auto num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl << "Doubled vector." << std::endl;
    for (auto num : doubled_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

std::vector<int> double_elements(const std::vector<int>& original_vector) {
    // vectorの各要素を2倍したvectorを返す
    std::vector<int> doubled_numbers;
    
    for (int i = 0; i < original_vector.size(); i++) {
        doubled_numbers.push_back(original_vector.at(i) * 2);
    }
    return doubled_numbers;
}
