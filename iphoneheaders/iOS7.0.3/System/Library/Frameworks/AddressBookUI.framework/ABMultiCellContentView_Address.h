/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView_DisplayAlternate.h>

@class NSArray, NSMutableArray;

@interface ABMultiCellContentView_Address : ABMultiCellContentView_DisplayAlternate {

	NSArray* _lineInfos;
	NSMutableArray* _lineSubviews;
	NSRange _streetRange;
	unsigned _entryFieldIndexOfFirstStreetField;
	NSMutableArray* _verticalDividers;

}
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 ;
+(id)lineInfosForPropertyGroup:(id)arg1 info:(id)arg2 ;
+(id)streetTextForPropertyGroup:(id)arg1 info:(id)arg2 ;
+(int)calculateStreetRowsForText:(id)arg1 ;
+(unsigned)rowsForPropertyGroup:(id)arg1 info:(id)arg2 ;
-(void)reloadFromModel;
-(void)setPropertyGroupInfo:(id)arg1 ;
-(id)pickerView;
-(int)tagForPropertyKey:(id)arg1 ;
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)removeTextFieldAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(id)propertyKeyForTag:(int)arg1 ;
-(unsigned)lineIndexOfStreetField:(id)arg1 ;
-(id)streetFieldAtLineIndex:(unsigned)arg1 ;
-(void)addStreetFieldAnimated:(BOOL)arg1 ;
-(void)removeStreetFieldAtIndex:(unsigned)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)reload;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
@end

