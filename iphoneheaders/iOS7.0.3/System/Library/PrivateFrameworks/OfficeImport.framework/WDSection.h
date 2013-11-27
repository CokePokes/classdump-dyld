/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class WDDocument, WDText;

@interface WDSection : NSObject {

	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	WDDocument* mDocument;
	WDText* mText;
	WDText* mEvenPageHeader;
	WDText* mOddPageHeader;
	WDText* mFirstPageHeader;
	WDText* mEvenPageFooter;
	WDText* mOddPageFooter;
	WDText* mFirstPageFooter;
	SCD_Struct_WD65 mOriginalProperties;
	SCD_Struct_WD65 mTrackedProperties;

}
-(void)dealloc;
-(id)text;
-(void)setRightMargin:(long)arg1 ;
-(id).cxx_construct;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(unsigned short)columnCount;
-(void)setColumnCount:(unsigned short)arg1 ;
-(long)leftMargin;
-(long)rightMargin;
-(long)topMargin;
-(long)headerMargin;
-(long)bottomMargin;
-(BOOL)isPageWidthOverridden;
-(long)pageWidth;
-(BOOL)isPageHeightOverridden;
-(long)pageHeight;
-(BOOL)isBreakTypeOverridden;
-(int)breakType;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isTopMarginOverridden;
-(id)firstPageHeader;
-(id)oddPageHeader;
-(BOOL)isBottomMarginOverridden;
-(BOOL)isBottomBorderOverridden;
-(id)bottomBorder;
-(BOOL)isTitlePageOverridden;
-(BOOL)titlePage;
-(void)setTopMargin:(long)arg1 ;
-(void)setLeftMargin:(long)arg1 ;
-(void)setPageHeight:(long)arg1 ;
-(id)evenPageHeader;
-(id)firstPageFooter;
-(id)oddPageFooter;
-(id)evenPageFooter;
-(BOOL)isTopBorderOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isRightBorderOverridden;
-(id)topBorder;
-(id)leftBorder;
-(id)rightBorder;
-(void)setBottomMargin:(long)arg1 ;
-(void)setHeaderMargin:(long)arg1 ;
-(void)setFooterMargin:(long)arg1 ;
-(long)footerMargin;
-(void)setTextDirection:(int)arg1 ;
-(void)setResolveMode:(int)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setFormattingChanged:(BOOL)arg1 ;
-(int)resolveMode;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(void)setBreakType:(int)arg1 ;
-(void)setPageWidth:(long)arg1 ;
-(void)setPageOrientation:(int)arg1 ;
-(void)setGutterMargin:(long)arg1 ;
-(void)setBorderDepth:(int)arg1 ;
-(void)setBorderDisplay:(int)arg1 ;
-(void)setBorderOffset:(int)arg1 ;
-(void)setLineNumberStart:(short)arg1 ;
-(void)setLineNumberIncrement:(unsigned short)arg1 ;
-(void)setLineNumberDistance:(short)arg1 ;
-(void)setLineNumberRestart:(int)arg1 ;
-(void)setPageNumberFormat:(int)arg1 ;
-(void)setPageNumberStart:(unsigned short)arg1 ;
-(void)setPageNumberRestart:(BOOL)arg1 ;
-(void)setChapterNumberSeparator:(int)arg1 ;
-(void)setColumnsEqualWidth:(BOOL)arg1 ;
-(BOOL)isColumnCountOverridden;
-(void)appendColumnWidth:(long)arg1 ;
-(void)appendColumnSpace:(long)arg1 ;
-(void)setColumnSpace:(long)arg1 ;
-(void)setVerticalJustification:(int)arg1 ;
-(void)setTitlePage:(BOOL)arg1 ;
-(void)setFormattingChangeDate:(id)arg1 ;
-(BOOL)isPageOrientationOverridden;
-(int)pageOrientation;
-(BOOL)isHeaderMarginOverridden;
-(BOOL)isFooterMarginOverridden;
-(BOOL)isGutterMarginOverridden;
-(long)gutterMargin;
-(BOOL)isBorderDepthOverridden;
-(int)borderDepth;
-(BOOL)isBorderDisplayOverridden;
-(int)borderDisplay;
-(BOOL)isBorderOffsetOverridden;
-(int)borderOffset;
-(BOOL)isLineNumberStartOverridden;
-(short)lineNumberStart;
-(BOOL)isLineNumberIncrementOverridden;
-(unsigned short)lineNumberIncrement;
-(BOOL)isLineNumberDistanceOverridden;
-(short)lineNumberDistance;
-(BOOL)isLineNumberRestartOverridden;
-(int)lineNumberRestart;
-(BOOL)isPageNumberFormatOverridden;
-(int)pageNumberFormat;
-(BOOL)isPageNumberStartOverridden;
-(unsigned short)pageNumberStart;
-(BOOL)isPageNumberRestartOverridden;
-(BOOL)pageNumberRestart;
-(BOOL)isChapterNumberSeparatorOverridden;
-(int)chapterNumberSeparator;
-(BOOL)isColumnsEqualWidthOverridden;
-(BOOL)columnsEqualWidth;
-(long)columnWidthAt:(unsigned)arg1 ;
-(long)columnSpaceAt:(unsigned)arg1 ;
-(BOOL)isColumnSpaceOverridden;
-(long)columnSpace;
-(BOOL)isVerticalJustificationOverridden;
-(int)verticalJustification;
-(BOOL)isFormattingChangedOverridden;
-(BOOL)formattingChanged;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(BOOL)isFormattingChangeDateOverridden;
-(id)formattingChangeDate;
-(BOOL)isTextDirectionOverridden;
-(int)textDirection;
-(void)setPageScale:(unsigned)arg1 ;
-(unsigned)pageScale;
-(BOOL)isPageScaleOverridden;
-(BOOL)isLastColumnWidthDefined;
@end

