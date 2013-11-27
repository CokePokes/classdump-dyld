/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQHState.h>

@class GQHXML;

@interface GQHLassoState : GQHState {

	GQHXML* mNavigation;
	int mSheetCount;
	int mTableCount;
	CFStringRef mCssUri;
	CFStringRef mCurrentSheetFilename;
	CFStringRef mCurrentSheetUri;
	CGPoint mMaxCanvasPoint;
	unsigned mCurrentDrawableZOrder;
	unsigned mZOrderedDrawableCount;
	CFDictionaryRef mDrawableUidToCssZOrderClassMap;
	CFArrayRef mSheetCssUriList;
	CFStringRef mSheetCssFilename;
	CFStringRef mSheetOneCss;
	CFStringRef mSheetOneLastCSS;
	char* mFirstWorkspaceName;
	bool mIsProgressiveMode;
	GQHXML* mIndex;
	CFArrayRef mSheetFilenameList;
	CFArrayRef mSheetUriList;
	CFArrayRef mSheetCssLastUriList;
	CFStringRef mSheetCssLastFilename;

}
-(BOOL)drawablesNeedCssZOrdering;
-(void)addedDrawableWithBounds:(CGRect)arg1 ;
-(BOOL)finishMainHtml;
-(BOOL)inProgressiveMode;
-(BOOL)writeIndexPageWithIFrame:(id)arg1 ;
-(void)writeIndexPageWithDocumentSize:(CGSize)arg1 ;
-(void)beginNewSheet:(const char*)arg1 processorState:(id)arg2 ;
-(int)endSheet;
-(CFStringRef)cssZOrderClassForDrawableUid:(const char*)arg1 ;
-(unsigned)currentDrawableZOrder;
-(void)addStyle:(CFStringRef)arg1 className:(CFStringRef)arg2 srcStyle:(id)arg3 ;
-(void)writeNavigationPage:(id)arg1 ;
-(void)cacheAnchorForIndexPage:(char*)arg1 ;
-(void)writeAnchorInNavigationPage:(char*)arg1 ;
-(CFStringRef)writeTabsJS;
-(CGPoint)maxCanvasPoint;
-(CFStringRef)makeInlineStyle:(CFStringRef)arg1 ;
-(void)addCachedStyle:(CFStringRef)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(id)initWithState:(id)arg1 ;
@end

