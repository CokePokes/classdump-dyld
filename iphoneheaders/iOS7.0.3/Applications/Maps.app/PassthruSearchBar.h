/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UISearchBar.h>

@protocol UITextFieldDelegate;
@class , UIColor;

@interface PassthruSearchBar : UISearchBar {

	<UITextFieldDelegate>* _textFieldDelegate;
	UIColor* _textColor;

}

@property (assign,nonatomic) <UITextFieldDelegate> * textFieldDelegate;              //@synthesize textFieldDelegate=_textFieldDelegate - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                    //@synthesize textColor=_textColor - In the implementation block
-(void)dealloc;
-(void)setTextColor:(id)arg1 ;
-(id)textColor;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setTextFieldDelegate:(id)arg1 ;
-(id)textFieldDelegate;
@end

