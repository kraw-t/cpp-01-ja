// チャレンジ3
// ヘッダーファイル `math_operations.h` をインクルードするC++プログラムを作成してください。
// このヘッダーファイルでは、名前空間 `MathOps` 内に基本的な算術演算 (`addition`、`subtraction`、`multiplication`、`division`) の関数を宣言します。
// これらの関数を別のファイル `math_operations.cpp` で実装し、メインのプログラムファイル `main.cpp` でこれらの関数を使用します。
// このプログラムでは、ユーザーに2つの数値と実行する演算の入力を求め、結果を表示するものとします。
// 
// ### 例1
// 入力: Enter a calculation: 4 / 5
// 出力: Result: 0.8
// ### 例2
// 入力: Enter a calculation: 24 - 6
// 出力: Result: 18

#include <iostream>
#include "math_operations.h"

int main(void) {
  double num1 {};  // 入力される一つ目の数
  double num2 {};  // 入力される一つ目の数
  char ope {};     // 入力される演算子
  double out {};   // 出力数

  std::cout << "Enter a calculation: ";
  std::cin >> num1 >> ope >> num2;
  // std::cout << num1 << " " << ope << " " << num2 << std::endl;

  if (ope == '+') {
    out = MathOps::addition(num1, num2);
  } else if (ope == '-') {
    out = MathOps::subtraction(num1, num2);
  } else if (ope == '*') {
    out = MathOps::multiplication(num1, num2);
  } else if (ope == '/') {
    out = MathOps::division(num1, num2);
  } else {
    std::cout << "Error: 不正な演算子が入力されました" << std::endl;
    return 1;
  }

  std::cout << "Result: " << out << std::endl;
  return 0;
}
