/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UsageSettings/CastleRequest.h>

@class NSArray;

@interface QuotaAppDetailsRequest : CastleRequest {

	NSArray* _bundleIds;
	NSArray* _bundleIDs;

}

@property (nonatomic,retain) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
+(Class)responseClass;
-(void)setBundleIDs:(id)arg1 ;
-(id)bundleIDs;
-(id)initWithAccount:(id)arg1 bundleIDs:(id)arg2 quotaInfo:(id)arg3 ;
-(void)dealloc;
-(id)urlRequest;
@end

