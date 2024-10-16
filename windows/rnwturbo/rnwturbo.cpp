#include "rnwturbo.h"

namespace facebook::react {

Rnwturbo::Rnwturbo(std::shared_ptr<react::CallInvoker> jsInvoker)
    : NativeRnwturboCxxSpecJSI(std::move(jsInvoker)) {}

double Rnwturbo::multiply(double a, double b) {
    return a * b;
}

}