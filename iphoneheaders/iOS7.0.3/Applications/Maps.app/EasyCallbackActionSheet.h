/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIActionSheet.h>
#import <UIKit/UIActionSheetDelegate.h>

@interface EasyCallbackActionSheet : UIActionSheet <UIActionSheetDelegate> {

	/*^block*/ id _willPresentCallback;
	/*^block*/ id _didPresentCallback;
	/*^block*/ id _willDismissCallback;
	/*^block*/ id _didDismissCallback;

}

@property (nonatomic,copy) id willPresentCallback;              //@synthesize willPresentCallback=_willPresentCallback - In the implementation block
@property (nonatomic,copy) id didPresentCallback;               //@synthesize didPresentCallback=_didPresentCallback - In the implementation block
@property (nonatomic,copy) id willDismissCallback;              //@synthesize willDismissCallback=_willDismissCallback - In the implementation block
@property (nonatomic,copy) id didDismissCallback;               //@synthesize didDismissCallback=_didDismissCallback - In the implementation block
+(id)actionSheet;
-(void)setWillPresentCallback:(/*^block*/ id)arg1 ;
-(void)setDidPresentCallback:(/*^block*/ id)arg1 ;
-(void)setWillDismissCallback:(/*^block*/ id)arg1 ;
-(void)setDidDismissCallback:(/*^block*/ id)arg1 ;
-(/*^block*/ id)willPresentCallback;
-(/*^block*/ id)didPresentCallback;
-(/*^block*/ id)willDismissCallback;
-(/*^block*/ id)didDismissCallback;
-(void)dealloc;
-(void)willPresentActionSheet:(id)arg1 ;
-(void)didPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

