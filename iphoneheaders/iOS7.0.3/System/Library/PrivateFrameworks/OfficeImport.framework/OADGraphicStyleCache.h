/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class OADGraphicFeatureCache, NSMutableDictionary;

@interface OADGraphicStyleCache : NSObject {

	OADGraphicFeatureCache* mFillCacheArray[4];
	OADGraphicFeatureCache* mStrokeCache;
	OADGraphicFeatureCache* mShadowCache;
	OADGraphicFeatureCache* mColorCache;
	OADGraphicFeatureCache* mFontFaceCache;
	OADGraphicFeatureCache* mTextStyleCache;
	OADGraphicFeatureCache* mTableIdCache;
	NSMutableDictionary* mTableStyleCache;
	OADGraphicFeatureCache* mChartIdCache;
	OADGraphicFeatureCache* mDrawableStyleCacheArray[4];

}
+(int)fillCatagory:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)strokes;
-(id)shadows;
-(unsigned)cacheDrawablePropertiesOfCategory:(int)arg1 withGraphicProperties:(id)arg2 textBodyProperties:(id)arg3 paragraphProperties:(id)arg4 characterProperties:(id)arg5 colorContext:(id)arg6 ;
-(void)cacheTableStyle:(id)arg1 ;
-(void)cacheChartStyleId:(long)arg1 ;
-(id)fontFaceCache;
-(id)colorCache;
-(unsigned)cacheFill:(id)arg1 returnCategory:(int*)arg2 ;
-(unsigned)cacheStroke:(id)arg1 ;
-(unsigned)cacheShadow:(id)arg1 ;
-(unsigned)cacheDrawablePropertiesOfCategory:(int)arg1 withFillCategory:(int)arg2 fillIndex:(unsigned)arg3 strokeIndex:(unsigned)arg4 shadowIndex:(unsigned)arg5 reflectionOpacity:(float)arg6 textStyleIndex:(unsigned)arg7 ;
-(id)tableStyleForId:(id)arg1 ;
-(id)countedDrawableStyleOfCategory:(int)arg1 atIndex:(unsigned)arg2 ;
-(id)fillsOfCategory:(int)arg1 ;
-(id)tableStyleIds;
-(id)chartStyleIds;
-(id)cachedDrawableStylesOfCategory:(int)arg1 ;
-(void)applyCachedDrawableStyle:(id)arg1 toGraphicProperties:(id)arg2 ;
-(void)applyCachedDrawableStyle:(id)arg1 toParagraphProperties:(id)arg2 ;
-(void)applyCachedDrawableStyle:(id)arg1 toTextBodyProperties:(id)arg2 ;
@end

