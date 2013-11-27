/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIView.h>
#import <Calculator/BasicKeypadDelegate.h>

@protocol KeypadDelegate;
@class ;

@interface KeypadView : UIView <BasicKeypadDelegate> {

	<KeypadDelegate>* _delegate;

}

@property (assign,nonatomic) <KeypadDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)basicKeypadKeyTapped:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

