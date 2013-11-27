/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
@class NSData, NSDate, PLLogger;

@interface PLBasebandMessage : NSObject {

	NSData* rawData;
	unsigned ticksInGoodState;
	unsigned ticksInGPSONState;
	double timeCalibration;
	NSDate* _apTimestamp;
	PLLogger* _logger;

}

@property (nonatomic,readonly) NSData * rawData; 
@property (nonatomic,readonly) unsigned ticksInGoodState; 
@property (nonatomic,readonly) unsigned ticksInGPSONState; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSDate * apTimestamp;                      //@synthesize apTimestamp=_apTimestamp - In the implementation block
@property (nonatomic,readonly) NSDate * calibratedTimestamp; 
@property (assign,nonatomic) double timeCalibration; 
@property (retain) PLLogger * logger;                                     //@synthesize logger=_logger - In the implementation block
+(id)messageWithData:(id)arg1 ;
-(void)dealloc;
-(id)timestamp;
-(id)initWithData:(id)arg1 ;
-(id)rawData;
-(id)logger;
-(void)logEntry:(id)arg1 withBody:(id)arg2 ;
-(void)setTimeCalibration:(double)arg1 ;
-(double)timeCalibration;
-(void)logWithLogger:(id)arg1 ;
-(unsigned)ticksInGoodState;
-(unsigned)ticksInGPSONState;
-(BOOL)isTimestampValid:(SCD_Struct_PL16*)arg1 ;
-(id)calibratedTimestamp;
-(id)apTimestamp;
-(void)setLogger:(id)arg1 ;
-(BOOL)isCalibratedDateGood;
@end

