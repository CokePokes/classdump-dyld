/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/XPCServices/com.apple.datadetectors.AddToRecentsService.xpc/com.apple.datadetectors.AddToRecentsService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataDetectorsUI/DDAddToRecentsInterface.h>

@class NSString;

@interface DDAddToRecentsService : NSObject <DDAddToRecentsInterface> {

	NSString* _bundleIdentifier;

}
-(id)initWithClientProcessIdentifier:(int)arg1 ;
-(void)addResultToRecents:(id)arg1 eventDate:(id)arg2 subject:(id)arg3 weight:(id)arg4 metadata:(id)arg5 userInitiated:(BOOL)arg6 completionBlock:(/*^block*/ id)arg7 ;
-(void).cxx_destruct;
@end

