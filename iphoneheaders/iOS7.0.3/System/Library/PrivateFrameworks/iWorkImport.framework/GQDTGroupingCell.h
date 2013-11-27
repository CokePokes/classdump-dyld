/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDTCell.h>

@interface GQDTGroupingCell : GQDTCell {

	unsigned short mLevel;
	unsigned short mRowIdx;
	unsigned short mRowCount;
	BOOL mIsCollapsed;
	id mValue;
	id mFormat;
	CFBundleRef mProcessorBundle;
	BOOL mHasValidFormulaValue;
	CFStringRef mFormulaValue;

}
+(CFStringRef)displayTypeString:(int)arg1 ;
-(void)setProcessorBundle:(CFBundleRef)arg1 ;
-(CFStringRef)createFormattedValue;
-(BOOL)hasFormulaValue;
-(int)readValue:(xmlTextReaderRef)arg1 ;
-(int)readElement:(xmlTextReaderRef)arg1 ;
-(int)readAttributes:(xmlTextReaderRef)arg1 ;
-(int)readRootFormat:(xmlTextReaderRef)arg1 ;
-(unsigned short)rowIdx;
-(void)dealloc;
-(unsigned short)level;
-(id)value;
-(BOOL)isCollapsed;
-(unsigned short)rowCount;
@end

