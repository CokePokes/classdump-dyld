/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <SpringBoardUI/SBUIBannerItem.h>

@class NSArray, NSString, NSDate, UIImage;

@interface MNBannerItem : SBUIBannerItem {

	int _maneuver;
	int _drivingSide;
	NSArray* _instructions;
	NSString* _distanceText;
	NSDate* _sortDate;
	BOOL _withinManeuver;
	UIImage* _shieldImage;
	CGPoint _shieldCenterPoint;

}

@property (assign,nonatomic) int maneuver;                                             //@synthesize maneuver=_maneuver - In the implementation block
@property (assign,nonatomic) int drivingSide;                                          //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,copy) NSArray * instructions;                                     //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,copy) NSString * distanceText;                                    //@synthesize distanceText=_distanceText - In the implementation block
@property (nonatomic,retain) NSDate * sortDate;                                        //@synthesize sortDate=_sortDate - In the implementation block
@property (assign,getter=isWithinManeuver,nonatomic) BOOL withinManeuver;              //@synthesize withinManeuver=_withinManeuver - In the implementation block
@property (nonatomic,copy) UIImage * shieldImage;                                      //@synthesize shieldImage=_shieldImage - In the implementation block
@property (assign,nonatomic) CGPoint shieldCenterPoint;                                //@synthesize shieldCenterPoint=_shieldCenterPoint - In the implementation block
-(int)maneuver;
-(id)shieldImage;
-(void)setManeuver:(int)arg1 ;
-(void)setShieldImage:(id)arg1 ;
-(void)setDistanceText:(id)arg1 ;
-(id)distanceText;
-(CGPoint)shieldCenterPoint;
-(void)setWithinManeuver:(BOOL)arg1 ;
-(BOOL)isWithinManeuver;
-(void)setShieldCenterPoint:(CGPoint)arg1 ;
-(id)instructions;
-(void)setInstructions:(id)arg1 ;
-(void)setSortDate:(id)arg1 ;
-(id)sortDate;
-(void)dealloc;
-(id)description;
-(/*^block*/ id)action;
-(unsigned)priority;
-(void)setDrivingSide:(int)arg1 ;
-(BOOL)isSticky;
-(BOOL)canShowInAssistant;
-(int)drivingSide;
@end

