/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject {

	/*^block*/ id _expirationHandler;
	NSTimer* _assetTimer;

}
+(id)nextFireDateForDate:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)updateAssetTimer;
-(void)assetTimerFired;
-(id)initWithExpirationHandler:(/*^block*/ id)arg1 ;
@end

