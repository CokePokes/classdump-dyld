/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/demod
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface MSDProgress : NSObject {

	int _stage;
	int _percent;

}

@property (assign) int stage;                                            //@synthesize stage=_stage - In the implementation block
@property (assign) int percent;                                          //@synthesize percent=_percent - In the implementation block
@property (nonatomic,readonly) NSString * stageDescription; 
+(id)progressWithStage:(int)arg1 percent:(int)arg2 ;
+(id)progressWithStage:(int)arg1 ;
-(id)stageDescription;
-(int)stage;
-(void)setStage:(int)arg1 ;
-(int)percent;
-(void)setPercent:(int)arg1 ;
@end

