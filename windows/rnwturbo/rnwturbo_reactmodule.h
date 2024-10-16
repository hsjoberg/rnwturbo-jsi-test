#pragma once

#include "pch.h"
#include "resource.h"

#if __has_include("codegen/NativeRnwturboDataTypes.g.h")
  #include "codegen/NativeRnwturboDataTypes.g.h"
#endif
#include "codegen/NativeRnwturboSpec.g.h"

#include "NativeModules.h"

namespace winrt::rnwturbo
{

REACT_MODULE(Rnwturbo)
struct Rnwturbo
{
  using ModuleSpec = rnwturboCodegen::RnwturboSpec;

  REACT_INIT(Initialize)
  void Initialize(React::ReactContext const &reactContext) noexcept;

  REACT_SYNC_METHOD(multiply)
  double multiply(double a, double b) noexcept;

private:
  React::ReactContext m_context;
};

} // namespace winrt::rnwturbo