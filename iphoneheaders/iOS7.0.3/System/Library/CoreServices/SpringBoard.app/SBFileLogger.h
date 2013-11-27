/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBFileLoggerDelegate;
@class , NSString;

@interface SBFileLogger : NSObject {

	<SBFileLoggerDelegate>* _delegate;
	int _logLevel;

}

@property (nonatomic,readonly) NSString * name; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (assign,nonatomic) <SBFileLoggerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * logPath; 
@property (nonatomic,readonly) BOOL includeConsole; 
@property (nonatomic,readonly) int maxLogCount; 
@property (nonatomic,readonly) int maxLogSize; 
@property (nonatomic,readonly) int logLevel;                                 //@synthesize logLevel=_logLevel - In the implementation block
-(id)consoleFormat:(id)arg1 withArguments:(void*)arg2 ;
-(void)reloadFromDefaults;
-(int)maxLogCount;
-(id)logPath;
-(BOOL)includeConsole;
-(int)maxLogSize;
-(id)fileFormat:(id)arg1 withArguments:(void*)arg2 ;
-(void)willBeginLoggingToPath:(id)arg1 ;
-(int)logLevel;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(BOOL)isEnabled;
-(id)name;
@end

