/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAWebSiteSearch : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSString * provider;
@property(copy) NSString * query;

+ (id)siteSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siteSearch;

- (id)groupIdentifier;
- (id)provider;
- (void)setQuery:(id)arg1;
- (id)query;
- (void)setProvider:(id)arg1;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;

@end
