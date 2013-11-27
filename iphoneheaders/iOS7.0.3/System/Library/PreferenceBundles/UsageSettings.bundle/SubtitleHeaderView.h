/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UILabel, NSMutableArray, NSArray;

@interface SubtitleHeaderView : UIView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	NSMutableArray* _subtitleLabels;

}

@property (nonatomic,retain) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * subtitleLabels;              //@synthesize subtitleLabels=_subtitleLabels - In the implementation block
-(id)subtitleLabels;
-(id)addSubtitle;
-(id)subtitleAtIndex:(unsigned)arg1 ;
-(void)removeSubtitleAtIndex:(unsigned)arg1 ;
-(void)setSubtitleLabels:(id)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)titleLabel;
-(void)setTitleLabel:(id)arg1 ;
@end

