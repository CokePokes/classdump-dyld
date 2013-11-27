/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OADCharacterProperties.h>

@class OADBulletSize, OADBulletColor, OADBulletFont, OADBulletProperties, OADTextSpacing, NSMutableArray;

@interface OADParagraphProperties : OADCharacterProperties {

	OADBulletSize* mBulletSize;
	OADBulletColor* mBulletColor;
	OADBulletFont* mBulletFont;
	OADBulletProperties* mBulletProperties;
	OADTextSpacing* mLineSpacing;
	OADTextSpacing* mBeforeSpacing;
	OADTextSpacing* mAfterSpacing;
	NSMutableArray* mTabStops;
	double mLeftMargin;
	double mRightMargin;
	double mIndent;
	double mDefaultTab;
	int mLevel;
	int mBulletCharSet;
	unsigned char mAlign;
	unsigned char mWrap;
	unsigned char mFontAlign;
	unsigned mIsRightToLeft : 1;
	unsigned mIsLatinLineBreak : 1;
	unsigned mIsHangingPunctuation : 1;
	unsigned mHasTabStops : 1;
	unsigned mHasLeftMargin : 1;
	unsigned mHasRightMargin : 1;
	unsigned mHasLevel : 1;
	unsigned mHasIndent : 1;
	unsigned mHasAlign : 1;
	unsigned mHasDefaultTab : 1;
	unsigned mHasIsRightToLeft : 1;
	unsigned mHasWrap : 1;
	unsigned mHasFontAlign : 1;
	unsigned mHasIsLatinLineBreak : 1;
	unsigned mHasIsHangingPunctuation : 1;
	unsigned mHasBulletCharSet : 1;

}
+(id)defaultProperties;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(void)setRightMargin:(double)arg1 ;
-(id)lineSpacing;
-(void)setLineSpacing:(id)arg1 ;
-(double)leftMargin;
-(double)rightMargin;
-(void)setLeftMargin:(double)arg1 ;
-(void)setIndent:(double)arg1 ;
-(void)setBulletProperties:(id)arg1 ;
-(double)indent;
-(id)bulletProperties;
-(id)bulletSize;
-(double)nonOveridenLeftMargin;
-(BOOL)hasBulletSize;
-(BOOL)hasBulletFont;
-(id)bulletFont;
-(BOOL)hasBulletColor;
-(id)bulletColor;
-(BOOL)hasBulletProperties;
-(BOOL)hasAlign;
-(BOOL)hasLeftMargin;
-(BOOL)hasIndent;
-(BOOL)hasLineSpacing;
-(BOOL)hasBeforeSpacing;
-(id)beforeSpacing;
-(BOOL)hasAfterSpacing;
-(id)afterSpacing;
-(id)initWithDefaults;
-(void)removeUnnecessaryOverrides;
-(void)overrideWithProperties:(id)arg1 ;
-(void)setBeforeSpacing:(id)arg1 ;
-(void)setAfterSpacing:(id)arg1 ;
-(void)setDefaultTab:(double)arg1 ;
-(void)setIsRightToLeft:(BOOL)arg1 ;
-(void)setFontAlign:(int)arg1 ;
-(void)setIsLatinLineBreak:(BOOL)arg1 ;
-(void)setIsHangingPunctuation:(BOOL)arg1 ;
-(void)setBulletCharSet:(int)arg1 ;
-(void)setBulletSize:(id)arg1 ;
-(void)setBulletColor:(id)arg1 ;
-(void)setBulletFont:(id)arg1 ;
-(BOOL)hasTabStops;
-(BOOL)hasRightMargin;
-(BOOL)hasLevel;
-(BOOL)hasDefaultTab;
-(BOOL)hasIsRightToLeft;
-(BOOL)hasWrap;
-(BOOL)hasFontAlign;
-(BOOL)hasIsLatinLineBreak;
-(BOOL)hasIsHangingPunctuation;
-(BOOL)hasBulletCharSet;
-(void)clearTabStops;
-(unsigned)tabStopCount;
-(id)tabStopAtIndex:(unsigned)arg1 ;
-(id)addTabStop;
-(double)defaultTab;
-(BOOL)isRightToLeft;
-(int)fontAlign;
-(BOOL)isLatinLineBreak;
-(BOOL)isHangingPunctuation;
-(int)bulletCharSet;
-(id)tabStops;
-(int)align;
-(void)setAlign:(int)arg1 ;
-(int)wrap;
-(void)setWrap:(int)arg1 ;
@end

