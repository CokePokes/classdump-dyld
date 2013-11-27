/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKeyboardCandidateBarSegmentControl, UIKBThemedView, UISegmentedControl;

@interface UIKeyboardCandidateSortControl : UIView {

	UIKeyboardCandidateBarSegmentControl* _segmentedControl;
	int _candidatesVisualStyle;
	BOOL _legacyAlertAppearance;
	UIKBThemedView* _themedView;

}

@property (readonly) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UIKBThemedView * themedView;                //@synthesize themedView=_themedView - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setThemedView:(id)arg1 ;
-(id)themedView;
-(id)initWithFrame:(CGRect)arg1 candidatesVisualStyle:(int)arg2 legacyAlertAppearance:(BOOL)arg3 ;
-(id)segmentedControl;
-(void)setSortControlTitles:(id)arg1 ;
-(void)selectPreviousSegment;
-(void)selectNextSegment;
-(void)updateTitleTextAttributes;
-(void)addSegmentedControlWithFrame:(CGRect)arg1 ;
-(BOOL)needsToUpdateSortControlForTitles:(id)arg1 ;
@end

