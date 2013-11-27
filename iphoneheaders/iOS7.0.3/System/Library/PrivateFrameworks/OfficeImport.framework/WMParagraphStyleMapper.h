/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CMMapper.h>

@class WDParagraphProperties, WDParagraph, WMParagraphStyle;

@interface WMParagraphStyleMapper : CMMapper {

	WDParagraphProperties* wdParaProperties;
	WDParagraph* wdParagraph;
	WMParagraphStyle* mStyle;

}
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDParagraph:(id)arg1 parent:(id)arg2 isInTextFrame:(BOOL)arg3 ;
-(BOOL)isListItem;
-(void)mapListStyleAt:(id)arg1 state:(id)arg2 ;
-(void)destyleEmptyParagraph;
-(bool)checkListId:(int)arg1 level:(int)arg2 ;
-(void)mapBulletAt:(id)arg1 forLevel:(id)arg2 forIndex:(int)arg3 listState:(id)arg4 isOutline:(BOOL)arg5 ;
-(id)bulletLabelAtLevel:(id)arg1 forIndex:(int)arg2 bulletFormat:(int)arg3 listState:(id)arg4 ;
-(id)labelStringWithGap:(id)arg1 ;
@end

