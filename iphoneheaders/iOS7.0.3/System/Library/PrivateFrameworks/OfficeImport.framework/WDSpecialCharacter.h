/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

@interface WDSpecialCharacter : WDRun {

	WDCharacterProperties* mProperties;
	int mType;

}
-(void)dealloc;
-(id)properties;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(void)setCharacterType:(int)arg1 ;
-(void)clearProperties;
-(int)characterType;
@end

