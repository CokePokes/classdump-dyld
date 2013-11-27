/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface PKLinkedAppUserRatingView : UIView {

	NSMutableArray* _starViews;
	float _userRating;

}

@property (assign,nonatomic) float userRating;              //@synthesize userRating=_userRating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)userRating;
-(void)setUserRating:(float)arg1 ;
@end

