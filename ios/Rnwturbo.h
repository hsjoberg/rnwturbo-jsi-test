
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnwturboSpec.h"

@interface Rnwturbo : NSObject <NativeRnwturboSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Rnwturbo : NSObject <RCTBridgeModule>
#endif

@end
