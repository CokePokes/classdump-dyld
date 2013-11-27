/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKGridLayoutMetrics.h>

@interface GKSectionMetrics : GKGridLayoutMetrics {

	BOOL _incrementalRevealConsumesPadding;
	unsigned _alignment;
	float _lineSpacing;
	float _interitemSpacing;
	float _desiredItemWidth;
	float _desiredItemHeight;
	unsigned _lastLineItemAlignment;
	unsigned _maximumVisibleItemCount;
	unsigned _incrementalRevealItemCount;
	float _incrementalRevealTextOffset;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) UIEdgeInsets padding;                               //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) unsigned alignment;                                 //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) float lineSpacing;                                  //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) float interitemSpacing;                             //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) float desiredItemWidth;                             //@synthesize desiredItemWidth=_desiredItemWidth - In the implementation block
@property (assign,nonatomic) float desiredItemHeight;                            //@synthesize desiredItemHeight=_desiredItemHeight - In the implementation block
@property (assign,nonatomic) unsigned lastLineItemAlignment;                     //@synthesize lastLineItemAlignment=_lastLineItemAlignment - In the implementation block
@property (assign,nonatomic) unsigned maximumVisibleItemCount;                   //@synthesize maximumVisibleItemCount=_maximumVisibleItemCount - In the implementation block
@property (assign,nonatomic) unsigned incrementalRevealItemCount;                //@synthesize incrementalRevealItemCount=_incrementalRevealItemCount - In the implementation block
@property (assign,nonatomic) float sectionHeaderHeight; 
@property (assign,nonatomic) float showMoreHeight; 
@property (assign,nonatomic) BOOL sectionHeadersShouldPin; 
@property (assign,nonatomic) BOOL incrementalRevealConsumesPadding;              //@synthesize incrementalRevealConsumesPadding=_incrementalRevealConsumesPadding - In the implementation block
@property (assign,nonatomic) float incrementalRevealTextOffset;                  //@synthesize incrementalRevealTextOffset=_incrementalRevealTextOffset - In the implementation block
+(id)metricsForIdiom:(int)arg1 ;
-(void)setDesiredItemHeight:(float)arg1 ;
-(id)localDescription;
-(unsigned)incrementalRevealItemCount;
-(float)incrementalRevealTextOffset;
-(void)setSectionHeadersShouldPin:(BOOL)arg1 ;
-(void)setIncrementalRevealTextOffset:(float)arg1 ;
-(id)initWithIdiom:(int)arg1 ;
-(void)setDesiredItemWidth:(float)arg1 ;
-(void)setLastLineItemAlignment:(unsigned)arg1 ;
-(void)setMaximumVisibleItemCount:(unsigned)arg1 ;
-(void)setIncrementalRevealItemCount:(unsigned)arg1 ;
-(void)setIncrementalRevealConsumesPadding:(BOOL)arg1 ;
-(float)showMoreHeight;
-(void)setShowMoreHeight:(float)arg1 ;
-(BOOL)sectionHeadersShouldPin;
-(CGSize)itemSizeForCollectionView:(id)arg1 ;
-(float)desiredItemWidth;
-(float)desiredItemHeight;
-(unsigned)lastLineItemAlignment;
-(unsigned)maximumVisibleItemCount;
-(BOOL)incrementalRevealConsumesPadding;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setAlignment:(unsigned)arg1 ;
-(void)setSectionHeaderHeight:(float)arg1 ;
-(float)sectionHeaderHeight;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(unsigned)alignment;
-(float)lineSpacing;
-(void)setLineSpacing:(float)arg1 ;
-(void)setInteritemSpacing:(float)arg1 ;
-(float)interitemSpacing;
@end

