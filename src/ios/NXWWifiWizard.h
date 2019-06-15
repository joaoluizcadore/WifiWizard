#import <Cordova/CDV.h>

@interface NXWWifiWizard : CDVPlugin

- (void)addNetwork:(CDVInvokedUrlCommand*)command;
- (void)removeNetwork:(CDVInvokedUrlCommand*)command;
- (void)connectNetwork:(CDVInvokedUrlCommand*)command;
- (void)disconnectNetwork:(CDVInvokedUrlCommand*)command;
- (void)listNetworks:(CDVInvokedUrlCommand*)command;
- (void)getScanResults:(CDVInvokedUrlCommand*)command;
- (void)startScan:(CDVInvokedUrlCommand*)command;
- (void)disconnect:(CDVInvokedUrlCommand*)command;
- (void)getConnectedSSID:(CDVInvokedUrlCommand*)command;
- (void)getConnectedBSSID:(CDVInvokedUrlCommand*)command;
- (void)isWifiEnabled:(CDVInvokedUrlCommand*)command;
- (void)setWifiEnabled:(CDVInvokedUrlCommand*)command;
- (void)setMulticastLock:(CDVInvokedUrlCommand*)command;
//private static final String SET_MULTICAST_LOCK = "setMulticastLock";
    

@end
