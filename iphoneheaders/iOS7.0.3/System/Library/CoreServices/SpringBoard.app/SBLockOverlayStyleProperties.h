/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIColor, _UIBackdropViewSettings;

@interface SBLockOverlayStyleProperties : NSObject {

	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _tintColor;
	float _tintAlpha;
	float _blurRadius;
	unsigned _style;
	int _quality;
	_UIBackdropViewSettings* _settings;

}

@property (nonatomic,readonly) float tintAlpha;                  //@synthesize tintAlpha=_tintAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) float blurRadius;                 //@synthesize blurRadius=_blurRadius - In the implementation block
@property (nonatomic,readonly) unsigned style;                   //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) int graphicsQuality;              //@synthesize quality=_quality - In the implementation block
-(float)tintAlpha;
-(id)initWithStyle:(unsigned)arg1 quality:(int)arg2 ;
-(id)_stringForStyle;
-(id)_stringForQuality;
-(id)_settingsForStyle;
-(void)dealloc;
-(id)description;
-(float)blurRadius;
-(unsigned)style;
-(id)tintColor;
-(int)graphicsQuality;
-(void)_configure;
@end

