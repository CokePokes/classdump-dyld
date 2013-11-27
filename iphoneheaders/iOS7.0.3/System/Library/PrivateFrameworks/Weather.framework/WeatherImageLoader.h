/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CPBitmapStore;

@interface WeatherImageLoader : NSObject {

	float _scale;
	CPBitmapStore* _store;

}

@property (nonatomic,retain) CPBitmapStore * store;              //@synthesize store=_store - In the implementation block
+(id)sharedImageLoader;
+(void)cacheImageIfNecessary:(id)arg1 ;
+(id)conditionImageNamed:(id)arg1 ;
+(void)preCacheMiniIcons;
+(id)conditionImageWithConditionIndex:(int)arg1 ;
+(id)twcButtonImage;
+(id)yahooButtonImage;
-(id)store;
-(void)setStore:(id)arg1 ;
-(id)cachedImageForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
@end

