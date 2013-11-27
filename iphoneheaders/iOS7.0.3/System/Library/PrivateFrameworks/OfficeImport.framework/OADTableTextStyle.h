/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject {

	OADFontReference* mFontReference;
	OADColor* mColor;
	int mBold;
	int mItalic;

}
+(id)defaultStyle;
+(id)defaultColor;
+(id)defaultFontReference;
+(int)defaultBold;
+(int)defaultItalic;
-(void)dealloc;
-(id)init;
-(id)color;
-(void)setColor:(id)arg1 ;
-(int)bold;
-(int)italic;
-(id)shallowCopy;
-(void)setBold:(int)arg1 ;
-(void)setItalic:(int)arg1 ;
-(id)fontReference;
-(void)setFontReference:(id)arg1 ;
-(void)applyOverridesFrom:(id)arg1 ;
@end

