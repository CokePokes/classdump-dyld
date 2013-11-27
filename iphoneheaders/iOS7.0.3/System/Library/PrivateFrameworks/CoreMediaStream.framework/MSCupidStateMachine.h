/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMediaStream/MSStreamsProtocolDelegate.h>

@class NSString, NSMutableDictionary, MSBackoffManager;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {

	NSString* _personID;
	NSString* _manifestPath;
	NSMutableDictionary* _userManifest;
	MSBackoffManager* _streamsBackoffManager;
	MSBackoffManager* _MMCSBackoffManager;
	BOOL _hasDeactivated;

}

@property (nonatomic,retain) NSMutableDictionary * _userManifest;              //@synthesize userManifest=_userManifest - In the implementation block
@property (nonatomic,readonly) NSString * personID;                            //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) BOOL hasDeactivated;                              //@synthesize hasDeactivated=_hasDeactivated - In the implementation block
-(void)dealloc;
-(void)deactivate;
-(void)forget;
-(id)initWithPersonID:(id)arg1 ;
-(id)_latestNextActivityDate;
-(void)_updateMasterManifest;
-(BOOL)hasDeactivated;
-(void)_didReceiveStreamsRetryAfterDate:(id)arg1 ;
-(void)_backoffStreamsBackoffTimer;
-(void)_resetStreamsBackoffTimer;
-(void)_didReceiveMMCSRetryAfterDate:(id)arg1 ;
-(void)_backoffMMCSBackoffTimer;
-(void)_resetMMCSBackoffTimer;
-(void)_abort;
-(void)protocol:(id)arg1 didReceiveRetryAfterDate:(id)arg2 ;
-(void)_forget;
-(id)_userManifest;
-(void)_commitUserManifest;
-(void)setHasDeactivated:(BOOL)arg1 ;
-(void)set_userManifest:(id)arg1 ;
-(id)personID;
-(void).cxx_destruct;
@end

