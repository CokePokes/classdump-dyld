/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateView_iPhone.h>
#import <UIKit/UIKeyboardCandidateViewInline.h>

@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline> {

	CGRect _collapsedRect;
	BOOL _withKeyboard;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)candidatesDidChange;
-(id)activeCandidateList;
-(void)setCandidateViewExtended:(BOOL)arg1 ;
-(unsigned)_numberOfColumns:(BOOL)arg1 ;
-(BOOL)_shouldShowHideKeyboard;
-(BOOL)_shouldUseFullMetrics;
-(void)_collapse:(id)arg1 ;
@end

