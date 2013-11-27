/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/SCATModernMenuGestureFreehandSheetBase.h>
#import <assistivetouchd/SCATMultipleMenuItemsElementDelegate.h>

@class SCATStaticElementProvider, SCATModernMenuGestureFreehandItem;

@interface SCATModernMenuGestureFreehandRotateSheet : SCATModernMenuGestureFreehandSheetBase <SCATMultipleMenuItemsElementDelegate> {

	SCATStaticElementProvider* _customElementProvider;
	SCATModernMenuGestureFreehandItem* _rotateCCWItem;
	SCATModernMenuGestureFreehandItem* _rotateCWItem;
	SCATModernMenuGestureFreehandItem* _rotate90Item;
	SCATModernMenuGestureFreehandItem* _rotate90CCWItem;
	SCATModernMenuGestureFreehandItem* _rotate90CWItem;

}

@property (nonatomic,retain) SCATModernMenuGestureFreehandItem * rotateCCWItem;                //@synthesize rotateCCWItem=_rotateCCWItem - In the implementation block
@property (nonatomic,retain) SCATModernMenuGestureFreehandItem * rotateCWItem;                 //@synthesize rotateCWItem=_rotateCWItem - In the implementation block
@property (nonatomic,retain) SCATModernMenuGestureFreehandItem * rotate90Item;                 //@synthesize rotate90Item=_rotate90Item - In the implementation block
@property (nonatomic,retain) SCATModernMenuGestureFreehandItem * rotate90CCWItem;              //@synthesize rotate90CCWItem=_rotate90CCWItem - In the implementation block
@property (nonatomic,retain) SCATModernMenuGestureFreehandItem * rotate90CWItem;               //@synthesize rotate90CWItem=_rotate90CWItem - In the implementation block
-(void)menuItem:(id)arg1 didBecomeFocused:(BOOL)arg2 ;
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(BOOL)shouldUpdateItemsOnOrientationChange;
-(id)menuItemStruts;
-(void)setRotateCCWItem:(id)arg1 ;
-(id)rotateCCWItem;
-(void)setRotateCWItem:(id)arg1 ;
-(id)rotateCWItem;
-(void)setRotate90CCWItem:(id)arg1 ;
-(id)rotate90CCWItem;
-(void)setRotate90CWItem:(id)arg1 ;
-(id)rotate90CWItem;
-(void)setRotate90Item:(id)arg1 ;
-(id)rotate90Item;
-(id)elementProvider;
-(void)multipleMenuItemsElement:(id)arg1 didBecomeHighlighted:(BOOL)arg2 ;
-(void)didActivateMultipleMenuItemsElement:(id)arg1 ;
-(void)dealloc;
@end

