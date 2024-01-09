// チャレンジ4
// `std::vector<int>` と整数型のインデックスを引数にとる関数 `element_at` を作成してください。
// この関数では、指定したインデックスにあるvectorの要素を返し、インデックスが範囲外の場合は適切なエラーメッセージとともに `std::out_of_range` 例外をスローするようにします。
// main関数で有効なインデックスと無効なインデックスの両方を指定して `element_at` を呼び出し、例外を適切に処理してください。

#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

int element_at(const std::vector<int>& vector, const int idx);

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};
    int out_val {};
    int status {0};

    // normal case
    try {
        out_val = element_at(numbers, 4);
        std::cout << "Output value is " << out_val << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        status = 1;
    }

    // error case 1
    try {
        out_val = element_at(numbers, 7);
        std::cout << "Output is " << out_val << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        status = 1;
    }

    // error case 2
    try {
        out_val = element_at(numbers, -2);
        std::cout << "Output is " << out_val << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        status = 1;
    }

    std::cout << "return code: " << status << std::endl;
    return status;
}

int element_at(const std::vector<int>& vector, const int idx) {
    if ((idx >= vector.size())
     || (idx < 0)) {
        throw std::out_of_range("index:" + std::to_string(idx) + " is out of range.");
    }
    return vector.at(idx);
}
