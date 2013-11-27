/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@class SCATElementManager, SCATStyleProvider;

@interface SCATElementManagerViewController : UIViewController {

	SCATElementManager* _elementManager;

}

@property (assign,nonatomic) SCATElementManager * elementManager;              //@synthesize elementManager=_elementManager - In the implementation block
@property (nonatomic,readonly) SCATStyleProvider * styleProvider; 
-(void)willDismiss:(BOOL)arg1 ;
-(void)didDismiss:(BOOL)arg1 ;
-(void)didPresentWithDisplayContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)didUpdateWithDisplayContext:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithElementManager:(id)arg1 ;
-(void)presentWithDisplayContext:(id)arg1 animted:(BOOL)arg2 ;
-(void)willPresentWithDisplayContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)setElementManager:(id)arg1 ;
-(id)elementManager;
-(id)styleProvider;
-(void)dealloc;
-(void)dismiss:(BOOL)arg1 ;
@end

