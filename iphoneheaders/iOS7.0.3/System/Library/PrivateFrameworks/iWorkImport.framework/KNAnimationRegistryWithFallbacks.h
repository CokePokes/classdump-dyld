/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class KNAnimationRegistry, NSMutableDictionary;

@interface KNAnimationRegistryWithFallbacks : NSObject {

	KNAnimationRegistry* mRegistry;
	NSMutableDictionary* mFallbacks;

}
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 ;
-(void)registerFallbackEffectIdentifer:(id)arg1 forEffectIdentifer:(id)arg2 ;
-(id)init;
@end

