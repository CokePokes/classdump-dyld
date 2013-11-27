/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SUHitTestView : UIView {

	NSMutableArray* _hitTestTargets;

}
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeHitTestTarget:(id)arg1 ;
-(void)addHitTestTarget:(id)arg1 ;
@end

