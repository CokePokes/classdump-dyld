/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoardUIServices/_SBUIWidgetHost.h>
#import <SpringBoardUIServices/_SBUIWidgetViewController_Remote_IPC.h>

@protocol _SBUIWidgetHost;
@class NSString, ;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost, _SBUIWidgetViewController_Remote_IPC> {

	int _widgetIdiom;
	NSString* _widgetidentifier;
	<_SBUIWidgetHost>* _widgetHost;
	NSString* _widgetIdentifier;

}

@property (assign,nonatomic) <_SBUIWidgetHost> * widgetHost;              //@synthesize widgetHost=_widgetHost - In the implementation block
@property (nonatomic,copy) NSString * widgetIdentifier;                   //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (assign,nonatomic) int widgetIdiom;                             //@synthesize widgetIdiom=_widgetIdiom - In the implementation block
@property (nonatomic,readonly) CGSize preferredViewSize; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)dealloc;
-(void)__setWidgetIdentifier:(id)arg1 ;
-(void)__setWidgetIdiom:(int)arg1 ;
-(void)__requestPreferredViewSizeWithReplyHandler:(/*^block*/ id)arg1 ;
-(void)__hostWillPresent;
-(void)__hostDidPresent;
-(void)__hostWillDismiss;
-(void)__hostDidDismiss;
-(CGSize)preferredViewSize;
-(void)setWidgetIdentifier:(id)arg1 ;
-(void)setWidgetIdiom:(int)arg1 ;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
-(void)requestPresentationOfViewController:(id)arg1 presentationStyle:(int)arg2 context:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)requestLaunchOfURL:(id)arg1 ;
-(void)invalidatePreferredViewSize;
-(id)widgetHost;
-(int)widgetIdiom;
-(id)widgetIdentifier;
-(void)setWidgetHost:(id)arg1 ;
@end

