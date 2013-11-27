/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, NSMutableSet;

@interface MPVolumeHUDController : NSObject {

	NSMutableArray* _contexts;
	NSMutableSet* _categories;

}

@property (nonatomic,readonly) id mainContext; 
+(id)sharedInstance;
-(void)setNeedsUpdate;
-(id)mainContext;
-(void)registerView:(id)arg1 inContext:(id)arg2 ;
-(void)unregisterView:(id)arg1 inContext:(id)arg2 ;
-(id)pushContext;
-(void)_updateVisibility;
-(BOOL)_sliderIsVisible:(id)arg1 ;
-(void)popContext;
-(id)init;
-(void).cxx_destruct;
@end

