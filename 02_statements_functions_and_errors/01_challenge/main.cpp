// チャレンジ1
// ユーザーに数値の入力を求め、その値が正、負、ゼロのどれであるかを表示するプログラムを作成してください。

#include <iostream>

int main() {
  int num {};
  std::cout << "Please enter the number (integer): ";
  std::cin >> num;
  
  std::cout << "Number " << num << " is ";
  if (num > 0) {
    std::cout << "plus.";
  } else if (num == 0) {
    std::cout << "zero.";
  } else { // num < 0
    std::cout << "minus.";
  }
  std::cout << std::endl;

  return 0;
}
