#include <cassert>
#include "math_operations.h"

namespace MathOps {

// arg1 + arg2 を計算して返す関数
double addition(double arg1, double arg2) {
  return (arg1 + arg2);
}

// minuend - subtrahend を計算して返す関数
double subtraction(double minuend, double subtrahend) {
  return (minuend - subtrahend);
}

// arg1 * arg2 を計算して返す関数
double multiplication(double arg1, double arg2) {
  return (arg1 * arg2);
}

// numerator / denominator を計算して返す関数
// ゼロ割時はアサーション
double division(double numerator, double denominator) {
  assert(denominator != 0.0);
  return (numerator / denominator);
}

}  // MatnOps
