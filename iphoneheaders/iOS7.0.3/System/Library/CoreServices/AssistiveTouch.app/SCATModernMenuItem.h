/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SCATModernMenuItemDelegate;
#import <assistivetouchd/assistivetouchd-Structs.h>
@class NSString, , AXDispatchTimer, NSIndexPath, SCATModernMenuItemCell, SCATModernMenuItemSupplementaryView, HNDCustomGesture;

@interface SCATModernMenuItem : NSObject {

	BOOL _didActivate;
	BOOL _allowedWithGuidedAccess;
	NSString* _identifier;
	<SCATModernMenuItemDelegate>* _delegate;
	NSString* _title;
	NSString* _imageName;
	unsigned _activateBehavior;
	AXDispatchTimer* _repeatItemWithDismissTimer;
	NSIndexPath* _cellIndex;
	SCATModernMenuItemCell* _cell;
	SCATModernMenuItemSupplementaryView* _supplementaryView;
	NSIndexPath* _supplementaryViewIndex;
	HNDCustomGesture* _customGesture;
	NSString* _imageBundlePath;
	unsigned _style;

}

@property (assign,nonatomic) <SCATModernMenuItemDelegate> * delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * imageName;                                                       //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) NSString * imageBundlePath;                                                 //@synthesize imageBundlePath=_imageBundlePath - In the implementation block
@property (assign,nonatomic) unsigned style;                                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned activateBehavior;                                                  //@synthesize activateBehavior=_activateBehavior - In the implementation block
@property (assign,getter=isAllowedWithGuidedAccess,nonatomic) BOOL allowedWithGuidedAccess;              //@synthesize allowedWithGuidedAccess=_allowedWithGuidedAccess - In the implementation block
@property (nonatomic,retain) SCATModernMenuItemCell * cell;                                              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSIndexPath * cellIndex;                                                    //@synthesize cellIndex=_cellIndex - In the implementation block
@property (nonatomic,retain) SCATModernMenuItemSupplementaryView * supplementaryView;                    //@synthesize supplementaryView=_supplementaryView - In the implementation block
@property (nonatomic,retain) NSIndexPath * supplementaryViewIndex;                                       //@synthesize supplementaryViewIndex=_supplementaryViewIndex - In the implementation block
@property (nonatomic,retain) HNDCustomGesture * customGesture;                                           //@synthesize customGesture=_customGesture - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * repeatItemWithDismissTimer;                               //@synthesize repeatItemWithDismissTimer=_repeatItemWithDismissTimer - In the implementation block
@property (assign,nonatomic) BOOL didActivate;                                                           //@synthesize didActivate=_didActivate - In the implementation block
+(id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imageName:(id)arg4 activateBehavior:(unsigned)arg5 ;
+(id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imageName:(id)arg4 activateBehavior:(unsigned)arg5 allowedWithGuidedAccess:(BOOL)arg6 ;
+(id)titleTextAttributes;
+(CGSize)imageSize;
-(void)updateButtonState;
-(void)setSupplementaryView:(id)arg1 ;
-(void)setSupplementaryViewIndex:(id)arg1 ;
-(BOOL)_itemTitleIsContiguous;
-(void)setImageBundlePath:(id)arg1 ;
-(void)setCustomGesture:(id)arg1 ;
-(id)customGesture;
-(void)setCellIndex:(id)arg1 ;
-(id)supplementaryView;
-(BOOL)handleActivateWithElement:(id)arg1 ;
-(void)setActivateBehavior:(unsigned)arg1 ;
-(void)setAllowedWithGuidedAccess:(BOOL)arg1 ;
-(void)setRepeatItemWithDismissTimer:(id)arg1 ;
-(CGSize)_requiredSizeForText:(id)arg1 withMaxSize:(CGSize)arg2 ;
-(void)setDidActivate:(BOOL)arg1 ;
-(unsigned)activateBehavior;
-(CGSize)requiredSizeForTitleTextWithMaxSize:(CGSize)arg1 ;
-(void)resetActivation;
-(id)repeatItemWithDismissTimer;
-(id)supplementaryViewIndex;
-(BOOL)isAllowedWithGuidedAccess;
-(id)imageBundlePath;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)delegate;
-(void)setStyle:(unsigned)arg1 ;
-(unsigned)style;
-(id)accessibilityLabel;
-(id)title;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)cell;
-(void)flash;
-(void)setCell:(id)arg1 ;
-(void)setImageName:(id)arg1 ;
-(id)imageName;
-(BOOL)didActivate;
-(id)cellIndex;
@end

