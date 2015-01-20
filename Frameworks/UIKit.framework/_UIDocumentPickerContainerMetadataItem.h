/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, NSURL;

@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem {
    NSString *_cachedSubtitle2;
    NSString *_cachedSubtitle;
    NSArray *_cachedTags;
    NSString *_cachedTitle;
    long long _cachedType;
    NSURL *_cachedURL;
}

- (void)_removeCachedValues;
- (void)cacheValues;
- (void)dealloc;
- (id)initWithItem:(id)arg1;
- (id)sortDate;
- (id)subtitle2;
- (id)subtitle;
- (id)tags;
- (id)title;
- (long long)type;
- (id)url;

@end