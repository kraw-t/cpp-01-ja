// チャレンジ2
// C++11以降では4番目のタイプの記憶域期間が追加されています。
// 何という記憶域期間ですか。
// この記憶域期間を持つ `int` 型の変数 `thread_data` を宣言し、値10で初期化するには、どのようにしますか。

// 4番目のタイプの記憶域期間について
// スレッド記憶域期間：C言語はC11から、C++言語はC++11から対応
// スレッドごとに別個にメモリ領域を確保、そのスレッドが生きているあいだが記憶域期間となる

// 参考
// https://cpprefjp.github.io/lang/cpp11/thread_local_storage.html

#include <iostream>
#include <thread>

int main(void) {
  thread_local int thread_data {10};

  std::thread t1([]{
    std::cout << "thread1: " << ++thread_data << std::endl;
  });

  std::thread t2([]{
    std::cout << "thread2: " << thread_data << std::endl;
  });

  t1.join();
  t2.join();
  return 0;
}
