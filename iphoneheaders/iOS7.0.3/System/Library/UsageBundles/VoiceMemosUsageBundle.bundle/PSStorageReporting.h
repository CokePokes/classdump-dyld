/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/UsageBundles/VoiceMemosUsageBundle.bundle/VoiceMemosUsageBundle
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PSStorageReporting <NSObject>
@optional
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1;
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2;
-(float)sizeForCategory:(id)arg1;
-(BOOL)deleteDataForCategory:(id)arg1 withError:(id*)arg2;

@required
-(id)usageBundleApps;
-(BOOL)allowDeletionForCategory:(id)arg1;
@end

