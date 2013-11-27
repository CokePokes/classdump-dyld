/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PDAnimationInfoData;

@interface PDAnimationInfo : NSObject {

	PDAnimationInfoData* mEntrance;
	PDAnimationInfoData* mExit;
	PDAnimationInfoData* mMedia;

}

@property (nonatomic,retain) PDAnimationInfoData * mediaData; 
-(void)dealloc;
-(void)setEntranceData:(id)arg1 ;
-(id)entranceData;
-(void)setExitData:(id)arg1 ;
-(id)exitData;
-(id)mediaData;
-(void)setMediaData:(id)arg1 ;
@end

