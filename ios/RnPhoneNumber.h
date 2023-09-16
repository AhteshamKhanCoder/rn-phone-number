
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnPhoneNumberSpec.h"

@interface RnPhoneNumber : NSObject <NativeRnPhoneNumberSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RnPhoneNumber : NSObject <RCTBridgeModule>
#endif

@end
