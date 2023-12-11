// チャレンジ3
// C++の関数 `power` は、`base` と `exponent` という2つの引数をとります。
// `exponent` のデフォルト値は2で、`power` は `base` を `exponent` 回累乗した結果を返します。
// baseを3、exponentを4としてこの関数を呼び出してください。

#include <iostream>
#include <climits>

int power(int base, int exponent = 2);

int main() {
  std::cout << "power(3,4) = " << power(3,4) << std::endl;
}

int power(int base, int exponent) {
  // baseをexponet回累乗した結果を返す
  // int型をオーバー/アンダーフローする場合はINT_MAXを返す
  long calc_tmp {static_cast<long>(base)};

  for (int i = 1; i < exponent; i++) {
    calc_tmp *= static_cast<long>(base);

    // オーバー/アンダーフローチェック
    if ((calc_tmp > static_cast<long>(INT_MAX))
     || (-calc_tmp > static_cast<long>(INT_MAX))) {
      calc_tmp = static_cast<long>(INT_MAX);
      break;
    }
  }
  return static_cast<int>(calc_tmp);
}
