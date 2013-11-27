/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNGuidanceManager.h>

@class NSMutableArray;

@interface MNDriveGuidanceManager : MNGuidanceManager {

	NSMutableArray* _substeps;
	int _currentContinuePhase;

}
-(void)_resetStepState;
-(id)_nameInfoForContinueSign;
-(void)_updatePrepareForNextStep;
-(BOOL)_updateConsiderSubstepAnnouncement:(id)arg1 step:(id)arg2 location:(id)arg3 ;
-(BOOL)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(BOOL)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2 ;
-(double)_distanceForSign;
-(BOOL)_hasSubsteps;
-(id)_nextSubstep;
-(const SCD_Struct_Ma25*)_announceSettings;
-(int)_continuePhase;
-(void)dealloc;
-(int)transportType;
@end

