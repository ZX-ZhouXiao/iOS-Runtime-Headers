/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFPowerManager : NSObject {
    float  _batteryLevel;
    int  _batteryState;
    NSObject<OS_dispatch_queue> * _clientQueue;
    BOOL  _hasBattery;
    unsigned int  _interestNotification;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    BOOL  _running;
}

@property float batteryLevel;
@property int batteryState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) BOOL hasBattery;
@property (nonatomic, readonly) unsigned int interestNotification;
@property (nonatomic, readonly) struct IONotificationPort { }*notificationPort;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isRunning, nonatomic) BOOL running;

+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_deregisterForPowerSourceNotifications:(BOOL)arg1;
- (void)_registerForPowerSourceNotifications;
- (float)batteryLevel;
- (int)batteryState;
- (id)clientQueue;
- (void)dealloc;
- (BOOL)hasBattery;
- (id)init;
- (unsigned int)interestNotification;
- (BOOL)isRunning;
- (struct IONotificationPort { }*)notificationPort;
- (void)notifyBatteryLevelChange:(float)arg1;
- (void)notifyBatteryStateChange:(int)arg1;
- (id)propertyQueue;
- (void)setBatteryLevel:(float)arg1;
- (void)setBatteryState:(int)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)start;
- (void)stop;
- (void)updateBatteryState:(unsigned int)arg1;

@end
