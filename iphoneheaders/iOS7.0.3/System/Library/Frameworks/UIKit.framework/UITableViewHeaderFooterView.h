/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewSubviewReusing.h>

@class NSString, UIImage, UITableView, UIView, UILabel, UIColor;

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing> {

	int _tableViewStyle;
	UIImage* _backgroundImage;
	CGRect _frame;
	int _textAlignment;
	UITableView* _tableView;
	float _maxTitleWidth;
	NSString* _reuseIdentifier;
	UIView* _backgroundView;
	UILabel* _label;
	UILabel* _detailLabel;
	UIView* _contentView;
	UIColor* _tintColor;
	UIEdgeInsets _separatorInset;
	struct {
		unsigned isHeader : 1;
		unsigned labelBackgroundColorNeedsUpdate : 1;
		unsigned detailLabelBackgroundColorNeedsUpdate : 1;
		unsigned floating : 1;
	}  _headerFooterFlags;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * contentView;                                                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,copy) NSString * reuseIdentifier;                                                                  //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,nonatomic) BOOL floating; 
@property (assign,nonatomic) int tableViewStyle; 
@property (nonatomic,retain) UIImage * backgroundImage;                                                                 //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) BOOL sectionHeader; 
@property (assign,nonatomic) UITableView * tableView;                                                                   //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) int textAlignment; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) float maxTitleWidth;                                                                       //@synthesize maxTitleWidth=_maxTitleWidth - In the implementation block
@property (assign,setter=_setMarginWidth:,getter=_marginWidth,nonatomic) float marginWidth; 
@property (assign,setter=_setRightMarginWidth:,getter=_rightMarginWidth,nonatomic) float rightMarginWidth; 
+(id)_defaultFontForTableViewStyle:(int)arg1 isSectionHeader:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)frame;
-(id)contentView;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(id)text;
-(id)_scriptingInfo;
-(id)backgroundImage;
-(void)_updateBackgroundImage;
-(CGRect)_labelFrame;
-(void)setText:(id)arg1 ;
-(void)setMaxTitleWidth:(float)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(void)setTableViewStyle:(int)arg1 ;
-(void)setSectionHeader:(BOOL)arg1 ;
-(void)setTableView:(id)arg1 ;
-(void)_setMarginWidth:(float)arg1 ;
-(void)_setRightMarginWidth:(float)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)_setupLabelAppearance;
-(void)_setBackgroundViewColor:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)reuseIdentifier;
-(void)setBackgroundView:(id)arg1 ;
-(void)prepareForReuse;
-(void)setReuseIdentifier:(id)arg1 ;
-(id)textLabel;
-(id)detailTextLabel;
-(void)_tableViewDidUpdateMarginWidth;
-(id)backgroundView;
-(float)_marginWidth;
-(int)textAlignment;
-(void)setBackgroundImage:(id)arg1 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 stripPaddingForAbuttingView:(BOOL)arg2 isTopHeader:(BOOL)arg3 ;
-(int)tableViewStyle;
-(float)_rightMarginWidth;
-(void)_setupBackgroundView;
-(id)tableView;
-(void)_invalidateLabelBackgroundColor;
-(void)_invalidateDetailLabelBackgroundColor;
-(CGRect)_backgroundRect;
-(BOOL)sectionHeader;
-(BOOL)_useDetailText;
-(void)_updateLabelBackgroundColor;
-(void)_updateDetailLabelBackgroundColor;
-(id)_label:(BOOL)arg1 ;
-(CGSize)_textSizeForWidth:(float)arg1 ;
-(CGSize)_detailTextSizeForWidth:(float)arg1 ;
-(void)_updateLayerContents;
-(void)_updateContentAndBackgroundView;
-(void)_updateLabelBackgroundColorIfNeeeded;
-(CGRect)_detailLabelFrame;
-(void)_updateDetailLabelBackgroundColorIfNeeded;
-(BOOL)floating;
-(float)maxTitleWidth;
@end

