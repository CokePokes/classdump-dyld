/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMSignInDialog.h>

@class UIButton, UIBarButtonItem, NSString;

@interface ACMSignInDialogCustom : ACMSignInDialog {

	UIButton* _signInButton;
	UIBarButtonItem* _signInBarButton;
	UIButton* _cancelButton;
	UIBarButtonItem* _cancelBarButton;
	BOOL _shouldAuthenticateOnUserInput;

}

@property (assign,nonatomic) CGPoint widgetPosition; 
@property (assign,nonatomic) NSString * widgetAccountLabel; 
@property (assign,nonatomic) int widgetPasswordReturnKeyType; 
@property (nonatomic,retain) UIButton * signInButton;                        //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * signInBarButton;              //@synthesize signInBarButton=_signInBarButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelBarButton;              //@synthesize cancelBarButton=_cancelBarButton - In the implementation block
-(void)dealloc;
-(id)init;
-(id)cancelButton;
-(void)setCancelButton:(id)arg1 ;
-(void)loadView;
-(id)signInButton;
-(void)checkFields;
-(id)signInBarButton;
-(id)cancelBarButton;
-(BOOL)shouldAuthenticateOnUserInput;
-(CGPoint)widgetPosition;
-(id)widgetAccountLabel;
-(int)widgetPasswordReturnKeyType;
-(void)setWidgetPosition:(CGPoint)arg1 ;
-(void)setWidgetAccountLabel:(id)arg1 ;
-(void)setWidgetPasswordReturnKeyType:(int)arg1 ;
-(void)setSignInBarButton:(id)arg1 ;
-(void)setSignInButton:(id)arg1 ;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1 ;
-(void)setCancelBarButton:(id)arg1 ;
-(void)disableControls:(BOOL)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

