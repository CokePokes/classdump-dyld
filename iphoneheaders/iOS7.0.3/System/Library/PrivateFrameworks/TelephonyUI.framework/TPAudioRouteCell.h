/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface TPAudioRouteCell : UITableViewCell {

	BOOL _isActiveRoute;
	UILabel* _audioRouteNameLabel;

}

@property (assign,nonatomic) BOOL isActiveRoute;                         //@synthesize isActiveRoute=_isActiveRoute - In the implementation block
@property (assign,nonatomic) UILabel * audioRouteNameLabel;              //@synthesize audioRouteNameLabel=_audioRouteNameLabel - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIsActiveRoute:(BOOL)arg1 ;
-(void)setIsMuteButtonWithImage:(id)arg1 ;
-(id)audioRouteNameLabel;
-(BOOL)isActiveRoute;
-(void)setAudioRouteNameLabel:(id)arg1 ;
@end

