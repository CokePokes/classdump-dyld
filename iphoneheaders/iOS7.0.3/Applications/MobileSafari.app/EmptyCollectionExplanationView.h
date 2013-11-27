/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, EmptyCollectionLabel;

@interface EmptyCollectionExplanationView : UIView {

	UIImageView* _imageView;
	EmptyCollectionLabel* _explanationLabel;
	EmptyCollectionLabel* _instructionsLabel;
	int _interfaceOrientation;

}

@property (assign,nonatomic) int interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(float)_paddingBetweenImageAndText;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 explanationText:(id)arg3 instructionsText:(id)arg4 replacingString:(id)arg5 withImage:(id)arg6 ;
-(void)fadeInAnimated:(BOOL)arg1 ;
-(void)fadeOutAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)interfaceOrientation;
-(void)setInterfaceOrientation:(int)arg1 ;
@end

