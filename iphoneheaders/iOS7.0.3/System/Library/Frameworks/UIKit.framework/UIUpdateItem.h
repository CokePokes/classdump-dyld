/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSIndexPath, UITableViewUpdateGap;

@interface UIUpdateItem : NSObject {

	int _action;
	NSIndexPath* _indexPath;
	int _animation;
	float _offset;
	UITableViewUpdateGap* _gap;
	BOOL _headerFooterOnly;
	BOOL _skipAnimation;

}

@property (nonatomic,readonly) int action;                            //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;               //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) int animation;                           //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) float offset;                            //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL headerFooterOnly;                   //@synthesize headerFooterOnly=_headerFooterOnly - In the implementation block
@property (assign,nonatomic) BOOL skipAnimation;                      //@synthesize skipAnimation=_skipAnimation - In the implementation block
@property (assign,nonatomic) UITableViewUpdateGap * gap;              //@synthesize gap=_gap - In the implementation block
-(void)dealloc;
-(int)action;
-(int)animation;
-(int)inverseCompareIndexPaths:(id)arg1 ;
-(int)compareIndexPaths:(id)arg1 ;
-(id)indexPath;
-(BOOL)isSectionOperation;
-(id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(int)arg3 ;
-(BOOL)headerFooterOnly;
-(void)setHeaderFooterOnly:(BOOL)arg1 ;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(void)setGap:(id)arg1 ;
-(void)setAnimation:(int)arg1 ;
-(id)_actionDescription;
-(id)gap;
-(BOOL)skipAnimation;
-(void)setSkipAnimation:(BOOL)arg1 ;
@end

