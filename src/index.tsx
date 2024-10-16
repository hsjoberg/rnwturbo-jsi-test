const Rnwturbo = require('./NativeRnwturbo').default;

export function multiply(a: number, b: number): number {
  return Rnwturbo.multiply(a, b);
}
