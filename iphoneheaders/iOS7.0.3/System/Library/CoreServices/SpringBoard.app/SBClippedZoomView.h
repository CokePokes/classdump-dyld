/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBZoomView.h>

@class SBFullscreenZoomView, UIView;

@interface SBClippedZoomView : SBZoomView {

	SBFullscreenZoomView* _fullscreenZoomViewToClip;
	UIView* _clippingView;

}
-(id)initWithClippingFrame:(CGRect)arg1 fullscreenZoomView:(id)arg2 ;
-(void)dealloc;
@end

