/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@class NSString;

@interface PLConfigLogger : PLLogger

@property (nonatomic,readonly) NSString * crashReporterKey; 
@property (nonatomic,readonly) NSString * bootArgs; 
@property (nonatomic,readonly) int autolockTime; 
@property (nonatomic,readonly) double backlightLevel; 
@property (nonatomic,readonly) BOOL noWatchdogs; 
@property (nonatomic,readonly) BOOL disableCABlanking; 
-(double)backlightLevel;
-(void)log;
-(id)osType;
-(id)crashReporterKey;
-(id)bootArgs;
-(int)autolockTime;
-(id)basebandFirmware;
-(BOOL)noWatchdogs;
-(BOOL)disableCABlanking;
@end

