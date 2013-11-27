/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPOffscreenColumn.h>

@class TPPageController;

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {

	unsigned _pageIndex;
	TPPageController* _pageController;

}

@property (nonatomic,readonly) unsigned startCharIndex; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) unsigned startAnchoredCharIndex; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned nextWidowPullsDownFromCharIndex; 
-(NSRange)anchoredRange;
-(void)trimToCharIndex:(unsigned)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned)arg3 ;
-(unsigned)startCharIndex;
-(unsigned)startAnchoredCharIndex;
-(unsigned)nextWidowPullsDownFromCharIndex;
-(id)initWithPageIndex:(unsigned)arg1 pageController:(id)arg2 ;
-(const SCD_Struct_TS572*)p_targetFirstHint;
-(const SCD_Struct_TS572*)p_targetLastHint;
-(void)dealloc;
-(NSRange)range;
@end

