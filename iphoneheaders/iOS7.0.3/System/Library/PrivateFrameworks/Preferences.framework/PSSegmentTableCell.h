/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSControlTableCell.h>

@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell {

	NSArray* _values;
	NSDictionary* _titleDict;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)setValue:(id)arg1 ;
-(id)titleLabel;
-(void)setBackgroundView:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)canReload;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)newControl;
-(id)controlValue;
-(void)setValues:(id)arg1 titleDictionary:(id)arg2 ;
@end

