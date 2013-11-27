/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBIcon.h>

@class SBIcon;

@interface SBPlaceholderIcon : SBIcon {

	id _nodeIdentifier;
	SBIcon* _icon;

}
+(id)emptyPlaceholder;
+(id)grabbedIconPlaceholder;
+(id)placeholderNodeIdentifierForIcon:(id)arg1 ;
+(id)placeholderForIcon:(id)arg1 ;
+(void)setGrabbedIcon:(id)arg1 ;
-(BOOL)shouldCacheImageForFormat:(int)arg1 ;
-(id)automationID;
-(BOOL)isEmptyPlaceholder;
-(BOOL)isGrabbedIconPlaceholder;
-(id)nodeIdentifier;
-(BOOL)matchesRepresentation:(id)arg1 ;
-(BOOL)isPlaceholderForIcon:(id)arg1 ;
-(id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2 ;
-(id)generateIconImage:(int)arg1 ;
-(void)dealloc;
-(id)representation;
-(BOOL)isPlaceholder;
@end

