/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OADColorPalette;
@class OADDefaultProperties, OADStyleMatrix, OADFontScheme, OADColorScheme, OADColorMap, ;

@interface OADDrawingTheme : NSObject {

	OADDefaultProperties* mShapeDefaults;
	OADDefaultProperties* mLineDefaults;
	OADDefaultProperties* mTextDefaults;
	OADStyleMatrix* mStyleMatrix;
	OADFontScheme* mFontScheme;
	OADColorScheme* mColorScheme;
	OADColorMap* mColorMap;
	<OADColorPalette>* mColorPalette;

}

@property (nonatomic,readonly) OADDefaultProperties * shapeDefaults; 
@property (nonatomic,readonly) OADDefaultProperties * lineDefaults; 
@property (nonatomic,readonly) OADDefaultProperties * textDefaults; 
@property (nonatomic,readonly) OADStyleMatrix * styleMatrix; 
@property (nonatomic,readonly) OADFontScheme * fontScheme; 
@property (nonatomic,retain) OADColorScheme * colorScheme; 
@property (nonatomic,readonly) OADColorMap * colorMap; 
@property (nonatomic,retain) <OADColorPalette> * colorPalette; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)styleMatrix;
-(id)colorMap;
-(id)fontScheme;
-(void)setColorPalette:(id)arg1 ;
-(id)colorPalette;
-(id)lineDefaults;
-(id)shapeDefaults;
-(id)textDefaults;
-(id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3 ;
-(void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2 ;
@end

