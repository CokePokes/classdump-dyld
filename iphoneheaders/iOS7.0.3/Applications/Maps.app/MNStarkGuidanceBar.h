/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/StarkToolbarView.h>

@class StarkNavigationTopBarInsert;

@interface MNStarkGuidanceBar : StarkToolbarView {

	StarkNavigationTopBarInsert* _signInsert;
	int _interactionModel;
	int _nondestructiveNavigationButtonKind;

}

@property (nonatomic,readonly) StarkNavigationTopBarInsert * signInsert;              //@synthesize signInsert=_signInsert - In the implementation block
@property (assign,nonatomic) int interactionModel;                                    //@synthesize interactionModel=_interactionModel - In the implementation block
@property (assign,nonatomic) int nondestructiveNavigationButtonKind;                  //@synthesize nondestructiveNavigationButtonKind=_nondestructiveNavigationButtonKind - In the implementation block
-(void)setInteractionModel:(int)arg1 ;
-(int)interactionModel;
-(void)setLeftInset:(float)arg1 animation:(id)arg2 ;
-(int)nondestructiveNavigationButtonKind;
-(void)_updateTitleViewAlpha;
-(BOOL)_interactionModelAllowsShowingTitleViewWhileInset;
-(void)setNondestructiveNavigationButtonKind:(int)arg1 ;
-(void)setEndButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setNondestructiveNavigationButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(id)signInsert;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)_updateButtons;
@end

