/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIBackdropViewSettings.h>

@class _UIBackdropViewSettings;

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings {

	_UIBackdropViewSettings* _inputSettingsA;
	_UIBackdropViewSettings* _inputSettingsB;
	float _weighting;
	_UIBackdropViewSettings* _outputSettingsA;
	_UIBackdropViewSettings* _outputSettingsB;

}

@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsA;               //@synthesize inputSettingsA=_inputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsB;               //@synthesize inputSettingsB=_inputSettingsB - In the implementation block
@property (assign,nonatomic) float weighting;                                        //@synthesize weighting=_weighting - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsA;              //@synthesize outputSettingsA=_outputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsB;              //@synthesize outputSettingsB=_outputSettingsB - In the implementation block
-(void)dealloc;
-(void)computeOutputSettingsUsingModel:(id)arg1 ;
-(void)setInputSettingsA:(id)arg1 ;
-(void)setInputSettingsB:(id)arg1 ;
-(void)setOutputSettingsA:(id)arg1 ;
-(void)setOutputSettingsB:(id)arg1 ;
-(id)outputSettingsA;
-(id)inputSettingsA;
-(id)outputSettingsB;
-(id)inputSettingsB;
-(float)weighting;
-(void)setWeighting:(float)arg1 ;
@end

