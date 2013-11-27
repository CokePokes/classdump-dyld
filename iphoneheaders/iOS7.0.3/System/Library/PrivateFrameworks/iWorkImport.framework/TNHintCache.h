/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TNPageController, TSDDrawableInfo, TNPageCoordinateDictionary;

@interface TNHintCache : NSObject {

	TNPageController* mPageController;
	TSDDrawableInfo* mInfo;
	SCD_Struct_TS267 mPageRange;
	BOOL mIsMaxColumnValid;
	BOOL mIsMaxRowValid;
	TNPageCoordinateDictionary* mHintCacheEntryDictionary;

}

@property (readonly) TNPageController * pageController; 
@property (retain) TSDDrawableInfo * info; 
-(id)p_hintCacheEntryAtCoordinate:(SCD_Struct_TS266)arg1 ;
-(id)initWithInfo:(id)arg1 pageController:(id)arg2 ;
-(SCD_Struct_TS267)pageRangeWithUpperBound:(SCD_Struct_TS266)arg1 ;
-(id)layoutAtCoordinate:(SCD_Struct_TS266)arg1 parentLayout:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(id)info;
-(id).cxx_construct;
-(id)pageController;
-(void)setInfo:(id)arg1 ;
@end

