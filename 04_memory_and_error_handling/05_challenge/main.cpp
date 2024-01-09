// チャレンジ5
// 次のコードの出力はどのようになりますか。
// 必要に応じて、cppreference.comにある `std::vector` のドキュメントを参照してください。

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    std::cout << "Initial size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    // → 定義しただけなので、sizeは0、capacityも0

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    // → 3つpush_backしたので、sizeが3になる。
    //    capacityはsizeに対応できなくなると倍々で増えていく模様で、size=3の場合はcapacity=4となる
    //    またeraseしても一度増えたcapacityは減らない（いずれも以下の検証による）

    // numbers.push_back(1);
    // std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    // numbers.push_back(2);
    // std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    // numbers.push_back(3);
    // std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    // numbers.push_back(4);
    // std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    // numbers.push_back(5);
    // std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    // numbers.push_back(6);
    // std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    // numbers.erase(numbers.begin());
    // numbers.erase(numbers.begin());
    // std::cout << "After adding elements: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    //         ↓
    //     Initial size: 0, capacity: 0
    //     After adding elements: size: 1, capacity: 1
    //     After adding elements: size: 2, capacity: 2
    //     After adding elements: size: 3, capacity: 4
    //     After adding elements: size: 4, capacity: 4
    //     After adding elements: size: 5, capacity: 8
    //     After adding elements: size: 6, capacity: 8
    //     After adding elements: size: 4, capacity: 8

    numbers.reserve(10);
    std::cout << "After reserving space: size: " << numbers.size() << ", capacity: " << numbers.capacity() << std::endl;
    // → 10 reserveしたので、capacityが10に増える、sizeは変わらない。
    //    この状態でpush_backし続けてsizeが10を超えると、倍になる(20になる)のは変わらない

}
