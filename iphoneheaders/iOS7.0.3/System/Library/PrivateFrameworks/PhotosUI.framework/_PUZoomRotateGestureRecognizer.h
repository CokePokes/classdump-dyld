/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIPinchGestureRecognizer.h>

@interface _PUZoomRotateGestureRecognizer : UIPinchGestureRecognizer {

	float _rotation;
	float _originalAngle;
	BOOL _hasT1;
	BOOL _hasT2;
	CGPoint _previousT1;
	CGPoint _previousT2;

}

@property (nonatomic,readonly) float rotation;              //@synthesize rotation=_rotation - In the implementation block
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(float)rotation;
@end

