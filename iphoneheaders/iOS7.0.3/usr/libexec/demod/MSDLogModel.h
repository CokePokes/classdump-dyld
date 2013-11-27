/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/demod
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <demod/demod-Structs.h>
@interface MSDLogModel : NSObject {

	_sFILE* _logFP;

}

@property (assign) _sFILE* logFP;              //@synthesize logFP=_logFP - In the implementation block
+(id)sharedInstance;
-(BOOL)enableLogToFilesUnder:(id)arg1 prefix:(id)arg2 expireDays:(int)arg3 ;
-(void)logWithFormat:(id)arg1 andArgs:(void*)arg2 ;
-(void)logMessage:(id)arg1 ;
-(_sFILE*)logFP;
-(void)setLogFP:(_sFILE*)arg1 ;
-(id)fileNameForTodayUnder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)enableLogToFile:(id)arg1 ;
-(BOOL)logToFileEnabled;
@end

