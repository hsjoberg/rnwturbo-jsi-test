#include "pch.h"

#include "rnwturbo.h"

namespace winrt::rnwturbo
{

// See https://microsoft.github.io/react-native-windows/docs/native-modules for details on writing native modules

void Rnwturbo::Initialize(React::ReactContext const &reactContext) noexcept {
  m_context = reactContext;
}

double Rnwturbo::multiply(double a, double b) noexcept {
  return a * b;
}

} // namespace winrt::rnwturbo