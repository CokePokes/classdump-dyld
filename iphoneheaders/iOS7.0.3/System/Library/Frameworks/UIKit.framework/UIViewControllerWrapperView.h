/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UIViewControllerWrapperView : UIView {

	BOOL _tightWrappingDisabled;

}

@property (assign,nonatomic) BOOL tightWrappingDisabled;              //@synthesize tightWrappingDisabled=_tightWrappingDisabled - In the implementation block
+(id)existingWrapperViewForView:(id)arg1 ;
+(id)wrapperViewForView:(id)arg1 frame:(CGRect)arg2 ;
+(id)wrapperViewForView:(id)arg1 wrapperFrame:(CGRect)arg2 viewFrame:(CGRect)arg3 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTightWrappingDisabled:(BOOL)arg1 ;
-(BOOL)tightWrappingDisabled;
-(void)unwrapView;
-(void)unwrapView:(id)arg1 ;
@end

