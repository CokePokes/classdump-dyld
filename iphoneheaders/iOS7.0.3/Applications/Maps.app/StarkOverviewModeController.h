/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MKWorldViewDelegate.h>
#import <Maps/MNNavigationSessionUIDelegate.h>
#import <Maps/StarkChromeModeController.h>

@protocol MapsChromeViews;
@class , MNStarkGuidanceBar, ChromeViewController, VKAttributedRouteMatch;

@interface StarkOverviewModeController : NSObject <MKWorldViewDelegate, MNNavigationSessionUIDelegate, StarkChromeModeController> {

	<MapsChromeViews>* _views;
	/*^block*/ id _completion;
	MNStarkGuidanceBar* _guidanceBar;
	BOOL _allowPouncingOnResignToNavigation;
	BOOL _resumeButtonHidden;
	ChromeViewController* _chromeViewController;

}

@property (assign,nonatomic) BOOL resumeButtonHidden;                                   //@synthesize resumeButtonHidden=_resumeButtonHidden - In the implementation block
@property (nonatomic,readonly) VKAttributedRouteMatch * currentRouteMatch; 
@property (assign,nonatomic) ChromeViewController * chromeViewController;               //@synthesize chromeViewController=_chromeViewController - In the implementation block
-(void)directionsSession:(id)arg1 failedWithError:(id)arg2 ;
-(void)navigationSession:(id)arg1 willStartForRoute:(id)arg2 ;
-(void)navigationSessionWillEnd:(id)arg1 ;
-(void)navigationSession:(id)arg1 failedWithErrorCode:(int)arg2 ;
-(void)navigationSessionWillPause:(id)arg1 ;
-(void)navigationSessionWillResumeFromPause:(id)arg1 ;
-(void)navigationSession:(id)arg1 updatedMatchedLocation:(id)arg2 ;
-(void)navigationSession:(id)arg1 didChangeState:(int)arg2 ;
-(void)navigationSessionStartingNextStep:(id)arg1 ;
-(void)navigationSession:(id)arg1 updatePointOfInterest:(SCD_Struct_Si10)arg2 focusStyle:(int)arg3 ;
-(void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned)arg6 ;
-(void)navigationSession:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 distanceUntilManeuver:(double)arg4 timeUntilManeuver:(double)arg5 ;
-(void)navigationSession:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di5*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned)arg11 isSynthetic:(BOOL)arg12 ;
-(void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(int)arg2 ;
-(void)navigationSession:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di5*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 ;
-(void)navigationSessionHideSecondaryStep:(id)arg1 ;
-(void)navigationSessionHasArrived:(id)arg1 ;
-(void)navigationSessionDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2 ;
-(void)navigationSessionTransportTypeChanged:(id)arg1 newTransportType:(int)arg2 ;
-(void)directionsSessionWillRequestRoute:(id)arg1 traceRecorderFailed:(BOOL)arg2 ;
-(void)directionsSession:(id)arg1 didReceiveRouteSet:(id)arg2 ;
-(void)directionsSessionDidFailToReceiveRoute:(id)arg1 error:(id)arg2 ;
-(void)directionsSessionWillRecalculateRoute:(id)arg1 ;
-(void)directionsSession:(id)arg1 didRecalculateNewRoute:(id)arg2 ;
-(void)directionsSessionDidCancelRoute:(id)arg1 ;
-(void)directionsSession:(id)arg1 didSwitchToNewRoute:(id)arg2 ;
-(void)directionsSession:(id)arg1 didChangeRoutePreloadSession:(id)arg2 ;
-(void)directionsSessionUpdatedETA:(id)arg1 ;
-(void)directionsSessionUpdatedTrafficIncidents:(id)arg1 ;
-(void)directionsSessionRecommendsNewRoute:(id)arg1 oldEstimatedTime:(unsigned)arg2 newEstimatedTime:(unsigned)arg3 finished:(/*^block*/ id)arg4 ;
-(id)chromeViewController;
-(void)setChromeViewController:(id)arg1 ;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(BOOL)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(BOOL)arg1 toMode:(id)arg2 ;
-(id)starkChromeViewController;
-(BOOL)physicalButtonsBegan:(id)arg1 ;
-(BOOL)starkTopBarModifiesInsets;
-(id)topBarForInteractionModel:(int)arg1 ;
-(void)setResumeButtonHidden:(BOOL)arg1 ;
-(void)_resumeNavigation;
-(void)_updateNondestructiveButtonKind;
-(BOOL)resumeButtonHidden;
-(void)_invokeCompletionWithOutcome:(int)arg1 ;
-(BOOL)_interactionModelAllowsResumeButton;
-(void)_end;
-(id)worldView:(id)arg1 painterForOverlay:(id)arg2 ;
-(id)worldView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)dealloc;
-(id)initWithCompletionHandler:(/*^block*/ id)arg1 ;
@end

