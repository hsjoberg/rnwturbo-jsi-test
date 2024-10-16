#include "codegen-jsi/rnwturboJSI.h"

#include <winrt/Microsoft.ReactNative.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <TurboModuleProvider.h>

namespace facebook::react {

/*class*/ class Rnwturbo : react::NativeRnwturboCxxSpecJSI {
public:
Rnwturbo(std::shared_ptr<react::CallInvoker> jsInvoker);


double multiply(jsi::Runtime &rt, double a, double b);
};

struct RnwturboPackageProvider
    : winrt::implements<RnwturboPackageProvider, winrt::Microsoft::ReactNative::IReactPackageProvider> {
  void CreatePackage(winrt::Microsoft::ReactNative::IReactPackageBuilder const &packageBuilder) noexcept {
    winrt::Microsoft::ReactNative::AddTurboModuleProvider<Rnwturbo>(packageBuilder, L"RnwturboCxx");
  }
};

}