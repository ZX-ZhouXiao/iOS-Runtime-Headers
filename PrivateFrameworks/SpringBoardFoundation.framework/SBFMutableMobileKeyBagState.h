/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMutableMobileKeyBagState : SBFMobileKeyBagState

@property (nonatomic) double backOffTime;
@property (nonatomic) long long escrowCount;
@property (nonatomic) unsigned int failedAttemptCount;
@property (nonatomic) int lockState;
@property (nonatomic) BOOL permanentlyBlocked;
@property (nonatomic) BOOL recoveryEnabled;
@property (nonatomic) BOOL recoveryPossible;
@property (nonatomic) BOOL recoveryRequired;
@property (nonatomic) BOOL shouldWipe;

- (id)_mutableState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithMKBLockStateInfo:(id)arg1;
- (void)setBackOffTime:(double)arg1;
- (void)setEscrowCount:(long long)arg1;
- (void)setFailedAttemptCount:(unsigned int)arg1;
- (void)setLockState:(int)arg1;
- (void)setPermanentlyBlocked:(BOOL)arg1;
- (void)setRecoveryEnabled:(BOOL)arg1;
- (void)setRecoveryPossible:(BOOL)arg1;
- (void)setRecoveryRequired:(BOOL)arg1;
- (void)setShouldWipe:(BOOL)arg1;

@end
