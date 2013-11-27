/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString;

@interface RadioLikeRequest : RadioRequest {

	long long _itemID;
	int _likeStatus;
	SSURLConnectionRequest* _request;
	int _seedType;
	NSString* _stationHash;
	long long _stationID;
	BOOL _isSeed;

}

@property (assign,nonatomic) int likeStatus;              //@synthesize likeStatus=_likeStatus - In the implementation block
@property (assign,nonatomic) BOOL isSeed;                 //@synthesize isSeed=_isSeed - In the implementation block
-(int)likeStatus;
-(id)initWithTrack:(id)arg1 station:(id)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setLikeStatus:(int)arg1 ;
-(void)startWithLikeCompletionHandler:(/*^block*/ id)arg1 ;
-(id)init;
-(id)initWithTrackID:(id)arg1 station:(id)arg2 ;
-(id)initWithItemID:(long long)arg1 seedType:(int)arg2 station:(id)arg3 ;
-(BOOL)isSeed;
-(void)setIsSeed:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

