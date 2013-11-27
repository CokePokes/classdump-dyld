/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIView.h>
#import <FaceTime/PHRecentsPersonHeaderSummaryView.h>

@class UILabel;

@interface PHRecentsPersonFaceTimeHeaderSummaryView : UIView <PHRecentsPersonHeaderSummaryView> {

	UILabel* _topmostLabel;
	UILabel* _bottommostLabel;
	float _intrinsicContentHeight;

}

@property (assign) UILabel * topmostLabel;                    //@synthesize topmostLabel=_topmostLabel - In the implementation block
@property (assign) UILabel * bottommostLabel;                 //@synthesize bottommostLabel=_bottommostLabel - In the implementation block
@property (assign) float intrinsicContentHeight;              //@synthesize intrinsicContentHeight=_intrinsicContentHeight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 recentCall:(id)arg2 occurrenceDate:(id)arg3 type:(int)arg4 duration:(double)arg5 category:(int)arg6 dataUsage:(double)arg7 ;
-(void)setTopmostLabel:(id)arg1 ;
-(void)setBottommostLabel:(id)arg1 ;
-(void)setIntrinsicContentHeight:(float)arg1 ;
-(float)intrinsicContentHeight;
-(id)topmostLabel;
-(id)bottommostLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
@end

