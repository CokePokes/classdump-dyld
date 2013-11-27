/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation {

	NSString* _badgeValue;
	NSString* _bundleIdentifier;

}

@property (retain) NSString * badgeValue;                    //@synthesize badgeValue=_badgeValue - In the implementation block
@property (retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)uniqueKey;
-(void)dealloc;
-(id)bundleIdentifier;
-(void)setBadgeValue:(id)arg1 ;
-(id)badgeValue;
-(void)run;
-(void)setBundleIdentifier:(id)arg1 ;
@end

