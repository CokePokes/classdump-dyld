/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface ISFairPlayRentalInfo : NSObject {

	unsigned long _playbackDuration;
	unsigned long _playbackStartTime;
	unsigned long _rentalDuration;
	unsigned long _rentalStartTime;

}

@property (assign,nonatomic) unsigned long playbackDuration;               //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (assign,nonatomic) unsigned long playbackStartTime;              //@synthesize playbackStartTime=_playbackStartTime - In the implementation block
@property (assign,nonatomic) unsigned long rentalDuration;                 //@synthesize rentalDuration=_rentalDuration - In the implementation block
@property (assign,nonatomic) unsigned long rentalStartTime;                //@synthesize rentalStartTime=_rentalStartTime - In the implementation block
-(unsigned long)rentalDuration;
-(unsigned long)rentalStartTime;
-(unsigned long)playbackStartTime;
-(void)setPlaybackStartTime:(unsigned long)arg1 ;
-(void)setRentalDuration:(unsigned long)arg1 ;
-(void)setRentalStartTime:(unsigned long)arg1 ;
-(unsigned long)playbackDuration;
-(void)setPlaybackDuration:(unsigned long)arg1 ;
@end

