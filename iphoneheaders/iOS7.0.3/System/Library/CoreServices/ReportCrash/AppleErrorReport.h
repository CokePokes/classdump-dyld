/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ReportCrash/ReportCrash-Structs.h>
@class NSString;

@interface AppleErrorReport : NSObject {

	NSString* _incidentID;
	NSString* _logType;
	NSString* _deviceID;

}
+(void)logSafely:(/*^block*/ id)arg1 ;
+(id)aslMsgToString:(aslmsgRef)arg1 ;
+(id)systemIDWithDescription:(BOOL)arg1 ;
+(id)xattr_name;
+(unsigned char)executeWithTimeout:(unsigned)arg1 Code:(/*^block*/ id)arg2 ;
+(id)kernelVersionDescription;
+(id)systemVersionDescription;
-(BOOL)isAppleTV;
-(id)logType;
-(BOOL)isInternalOrCarrierInstall;
-(id)incidentID;
-(void)dealloc;
-(id)description;
-(id)initWithType:(id)arg1 ;
-(unsigned)uid;
-(id)deviceID;
-(id)hardwareModel;
-(BOOL)isCarrierInstall;
-(BOOL)isInternalInstall;
@end

