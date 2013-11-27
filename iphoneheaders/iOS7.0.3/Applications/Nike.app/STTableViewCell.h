/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Nike/Nike-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIBezierPath, UIGradient, UIImage, NSString, UIView;

@interface STTableViewCell : UITableViewCell {

	BOOL _backgroundNeedsDisplay;
	UIBezierPath* _backgroundPath;
	UIGradient* _backgroundGradient;
	UIImage* _cellImage;
	NSString* _title;
	NSString* _subtitle;
	int _titleTextAlignment;
	int _roundedCorners;
	float _topWhiteFraction;
	float _bottomWhiteFraction;
	BOOL _wantsDisclosureIndicator;
	BOOL _wants;

}

@property (nonatomic,retain) UIImage * cellImage;                        //@synthesize cellImage=_cellImage - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) int titleTextAlignment;                     //@synthesize titleTextAlignment=_titleTextAlignment - In the implementation block
@property (assign,nonatomic) int roundedCorners;                         //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (assign,nonatomic) float topWhiteFraction;                     //@synthesize topWhiteFraction=_topWhiteFraction - In the implementation block
@property (assign,nonatomic) float bottomWhiteFraction;                  //@synthesize bottomWhiteFraction=_bottomWhiteFraction - In the implementation block
@property (assign,nonatomic) BOOL wantsDisclosureIndicator;              //@synthesize wantsDisclosureIndicator=_wantsDisclosureIndicator - In the implementation block
@property (nonatomic,readonly) UIView * titleView; 
@property (nonatomic,readonly) float contentInset; 
+(id)tableViewCellIdentifier;
-(void)setWantsDisclosureIndicator:(BOOL)arg1 ;
-(void)setTopWhiteFraction:(float)arg1 ;
-(void)setBottomWhiteFraction:(float)arg1 ;
-(void)setCellImage:(id)arg1 ;
-(void)layoutTitleView:(id)arg1 withLayoutRect:(CGRect)arg2 ;
-(id)cellImage;
-(float)topWhiteFraction;
-(float)bottomWhiteFraction;
-(BOOL)wantsDisclosureIndicator;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(float)contentInset;
-(id)title;
-(id)titleView;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(int)titleTextAlignment;
-(void)setTitleTextAlignment:(int)arg1 ;
-(int)roundedCorners;
-(void)setRoundedCorners:(int)arg1 ;
@end

