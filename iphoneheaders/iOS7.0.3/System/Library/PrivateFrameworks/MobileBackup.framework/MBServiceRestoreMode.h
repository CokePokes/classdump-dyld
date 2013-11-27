/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface MBServiceRestoreMode : NSObject {

	int _type;
	NSString* _value;
	int _errorCode;

}

@property (nonatomic,readonly) int type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * typeString; 
@property (nonatomic,readonly) NSString * value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) int errorCode;                                            //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) NSString * errorString; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (getter=isBackgroundApp,nonatomic,readonly) BOOL backgroundApp; 
@property (getter=isBackgroundFile,nonatomic,readonly) BOOL backgroundFile; 
@property (getter=didSucceed,nonatomic,readonly) BOOL successful; 
@property (getter=didFail,nonatomic,readonly) BOOL failed; 
@property (getter=wasCancelled,nonatomic,readonly) BOOL cancelled; 
+(id)foregroundRestoreMode;
+(id)backgroundAppRestoreModeWithBundleID:(id)arg1 errorCode:(int)arg2 ;
+(id)backgroundFileRestoreModeWithPath:(id)arg1 ;
+(id)backgroundAppRestoreModeWithBundleID:(id)arg1 ;
+(id)stringForErrorCode:(int)arg1 ;
+(id)restoreModeWithType:(int)arg1 value:(id)arg2 ;
+(id)stringForType:(int)arg1 ;
-(BOOL)isBackgroundApp;
-(BOOL)isBackgroundFile;
-(BOOL)didFail;
-(id)initWithType:(int)arg1 value:(id)arg2 errorCode:(int)arg3 ;
-(id)bundleID;
-(BOOL)didSucceed;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(int)type;
-(id)path;
-(id)value;
-(id)typeString;
-(BOOL)wasCancelled;
-(BOOL)isForeground;
-(id)errorString;
-(int)errorCode;
@end

