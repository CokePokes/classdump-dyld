/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>

@class NSString;

@interface SBTTYPromptAlert : SBAlert {

	NSString* _number;
	int _uid;

}
+(void)displayForNumber:(id)arg1 addressBookUID:(int)arg2 ;
+(BOOL)dialNumberPromptingIfNecessary:(id)arg1 addressBookUID:(int)arg2 urlAddition:(id)arg3 ;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(id)initWithNumber:(id)arg1 addressBookUID:(int)arg2 ;
-(void)dealloc;
-(void)activate;
-(id)number;
-(int)addressBookUID;
-(BOOL)hasTranslucentBackground;
@end

