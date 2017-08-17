#import "RCTBridgeModule.h"

#if __has_include(<OneSignal/OneSignal.h>)
#import <OneSignal/OneSignal.h>
#else
#import "OneSignal.h"
#endif

@interface RCTOneSignal : NSObject <RCTBridgeModule, OSSubscriptionObserver>

- (id)initWithLaunchOptions:(NSDictionary *)launchOptions appId:(NSString *)appId;
- (id)initWithLaunchOptions:(NSDictionary *)launchOptions appId:(NSString *)appId settings:(NSDictionary*)settings;
+ (void)didReceiveRemoteNotification:(NSDictionary *)dictionary;
@end
