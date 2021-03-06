/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIFetchSpeechAlternatives : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *requestId;
@property (readonly) Class superclass;

+ (id)fetchSpeechAlternatives;
+ (id)fetchSpeechAlternativesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)requestId;
- (BOOL)requiresResponse;
- (void)setRequestId:(id)arg1;

@end
