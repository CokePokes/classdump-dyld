/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIScrollView.h>

@interface PLImageScrollView : UIScrollView {

	BOOL _adjustZoomScaleAfterRotation;

}

@property (assign,nonatomic) BOOL adjustZoomScaleAfterRotation;              //@synthesize adjustZoomScaleAfterRotation=_adjustZoomScaleAfterRotation - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_centerContentIfNecessary;
-(void)willAnimateRotationToInterfaceOrientation:(id)arg1 ;
-(void)setAdjustZoomScaleAfterRotation:(BOOL)arg1 ;
-(BOOL)adjustZoomScaleAfterRotation;
@end

