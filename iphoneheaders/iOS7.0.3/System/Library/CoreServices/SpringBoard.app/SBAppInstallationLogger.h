/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBFileLogger.h>

@interface SBAppInstallationLogger : SBFileLogger {

	BOOL _enabled;

}
-(void)reloadFromDefaults;
-(BOOL)includeConsole;
-(BOOL)isEnabled;
-(id)name;
@end

