/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@protocol _MKPopoverEmbeddingViewWindowDelegate;
@class ;

@interface _MKPopoverEmbeddingView : UIView {

	<_MKPopoverEmbeddingViewWindowDelegate>* _windowDelegate;

}

@property (assign,nonatomic) <_MKPopoverEmbeddingViewWindowDelegate> * windowDelegate;              //@synthesize windowDelegate=_windowDelegate - In the implementation block
-(void)setWindowDelegate:(id)arg1 ;
-(id)windowDelegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
@end

