/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface PCLogging : NSObject
+(void)initialize;
+(void)enableLoggingForCustomHandler:(/*^block*/ id)arg1 ;
+(id)logFileDirectory;
+(BOOL)loggingEnabledForLevel:(int)arg1 ;
+(void)enableConsoleLoggingForLevel:(int)arg1 ;
+(void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3 ;
+(void)logKeepAliveInterval:(double)arg1 forServiceIdentifier:(id)arg2 ;
+(void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3 arguments:(void*)arg4 ;
+(id)_fileNameForIdentifier:(id)arg1 ;
+(id)_facilityForIdentifier:(id)arg1 ;
+(/*^block*/ id)_formatBlock;
+(void)_configureLogFacilityIfNeeded:(id)arg1 ;
+(void)_appendString:(id)arg1 toFileNamed:(id)arg2 ;
+(id)getMainBundleId;
+(void)enableFileLogging:(BOOL)arg1 ;
@end

