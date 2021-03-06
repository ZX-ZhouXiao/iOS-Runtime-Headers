/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {
    NSXPCConnection * _connection;
    BOOL  _isValid;
    NSString * _machName;
}

@property (nonatomic) BOOL isValid;
@property (nonatomic, retain) NSString *machName;

+ (id)differentialPrivacyRecorderForEmoji:(id)arg1 usageMode:(id)arg2;
+ (id)serviceInterface;

- (void).cxx_destruct;
- (void)_disconnect;
- (id)_initWithoutConnection;
- (void)createConnectionIfNecessary;
- (void)dealloc;
- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(id)arg1;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3;
- (void)didViewEmojiIndex:(int)arg1 forCategory:(id)arg2;
- (id)initWithMachName:(id)arg1;
- (BOOL)isValid;
- (id)machName;
- (void)setIsValid:(BOOL)arg1;
- (void)setMachName:(id)arg1;
- (void)writeEmojiDefaults;

@end
