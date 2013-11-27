/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsWorkout/SWSyncServiceConnection.h>

@protocol SWSyncServiceConnectionDelegateSWGenerateTokenConnectionDelegate;
@class , NSString;

@interface SWGenerateTokenConnection : SWSyncServiceConnection {

	<SWSyncServiceConnectionDelegate><SWGenerateTokenConnectionDelegate>* _delegate;
	NSString* _PIN;

}

@property (assign,nonatomic) <SWSyncServiceConnectionDelegate><SWGenerateTokenConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * PIN;                                                                             //@synthesize PIN=_PIN - In the implementation block
-(id)initWithPIN:(id)arg1 host:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)PIN;
-(void)handleResponse:(id)arg1 ;
@end

