/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface DaemonCachedObject : NSObject {

	NSObject<OS_dispatch_source>* _expirationTimer;
	id _object;
	id object;

}

@property (nonatomic,retain) id object; 
-(void)setExpirationTimer:(id)arg1 ;
-(id)copyExpirationTimer;
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
@end

