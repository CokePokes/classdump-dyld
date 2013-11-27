/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardFoundation/_UIBackdropViewObserver.h>
#import <SpringBoardFoundation/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate;
@class _UIBackdropView, , _UILegibilitySettings;

@interface SBFBackdropLegibilitySettingsProvider : NSObject <_UIBackdropViewObserver, SBFLegibilitySettingsProvider> {

	_UIBackdropView* _backdropView;
	<SBFLegibilitySettingsProviderDelegate>* _delegate;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) <SBFLegibilitySettingsProviderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;                    //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)backdropViewDidChange:(id)arg1 ;
-(id)legibilitySettings;
-(id)initWithBackdropView:(id)arg1 ;
@end

