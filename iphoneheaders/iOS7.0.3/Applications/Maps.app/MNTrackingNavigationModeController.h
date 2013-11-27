/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNNavigationModeController.h>
#import <Maps/SteppingSignsCarouselDelegate.h>
#import <Maps/MKWorldViewDelegate.h>

@class MNLocation, SteppingSignsCarousel, MNRoute, NSArray, MNGuidanceSignView, NSString, MNPedestrianTagView, TopBarTitleView, UIView, VKAttributedRouteMatch;

@interface MNTrackingNavigationModeController : MNNavigationModeController <SteppingSignsCarouselDelegate, MKWorldViewDelegate> {

	MNLocation* _matchedLocation;
	SteppingSignsCarousel* _signsCarousel;
	MNRoute* _route;
	NSArray* _steps;
	BOOL _isNavigatorOnRoute;
	BOOL _haveArrived;
	SCD_Struct_MN38* _stepInfos;
	NSArray* _signs;
	unsigned _stepIndex;
	unsigned _guidanceStepIndex;
	int _guidanceMode;
	unsigned _stepIndexAfterPreRouteStep;
	unsigned _preRouteSignIndex;
	MNGuidanceSignView* _preRouteSign;
	NSString* _proceedToRouteDisplayString;
	unsigned _maneuverStepIndex;
	double _distanceUntilManeuver;
	unsigned _signIndexWithModifiedDistance;
	BOOL _isStepTrackingEnabled;
	BOOL _isManualStepTrackingEnabled;
	int _desiredViewStyle;
	int _nextDesiredViewStyle;
	double _startTimeNextDesiredCameraViewStyle;
	double _lastCameraViewStyleChangeTime;
	BOOL _appearing;
	BOOL _useMetric;
	BOOL _useYardsForShorterDistances;
	double _cameraZoomScale;
	double _userZoom;
	BOOL _is3D;
	BOOL _enteredOverview;
	UIEdgeInsets _minimumEdgeInsets;
	MNPedestrianTagView* _sideTagView;
	BOOL _isCarouselReadyForDisplay;
	BOOL _hasCarouselAnimatedIn;
	BOOL _isAnimatingStatusBar;
	BOOL _disableMasking;
	float _stagedHeightForTagAnimation;
	TopBarTitleView* _topBarTitleView;
	UIView* _compactLine;

}

@property (nonatomic,retain) SteppingSignsCarousel * signsCarousel;                     //@synthesize signsCarousel=_signsCarousel - In the implementation block
@property (nonatomic,retain) NSString * proceedToRouteDisplayString;                    //@synthesize proceedToRouteDisplayString=_proceedToRouteDisplayString - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingStatusBar;                                 //@synthesize isAnimatingStatusBar=_isAnimatingStatusBar - In the implementation block
@property (assign,nonatomic) float stagedHeightForTagAnimation;                         //@synthesize stagedHeightForTagAnimation=_stagedHeightForTagAnimation - In the implementation block
@property (nonatomic,retain) TopBarTitleView * topBarTitleView;                         //@synthesize topBarTitleView=_topBarTitleView - In the implementation block
@property (nonatomic,retain) UIView * compactLine;                                      //@synthesize compactLine=_compactLine - In the implementation block
@property (assign,nonatomic) BOOL disableMasking;                                       //@synthesize disableMasking=_disableMasking - In the implementation block
@property (nonatomic,readonly) VKAttributedRouteMatch * currentRouteMatch; 
-(void)navigationSession:(id)arg1 failedWithErrorCode:(int)arg2 ;
-(void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned)arg6 ;
-(void)navigationSession:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 distanceUntilManeuver:(double)arg4 timeUntilManeuver:(double)arg5 ;
-(void)navigationSession:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di5*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned)arg11 isSynthetic:(BOOL)arg12 ;
-(void)navigationSessionHasArrived:(id)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(BOOL)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(BOOL)arg1 toMode:(id)arg2 ;
-(void)willChangeToMapDisplayStyle:(int)arg1 forChangeToLightLevel:(int)arg2 animation:(id)arg3 ;
-(BOOL)shouldSlideTopBar;
-(void)animateBarsToCurrentStateWithAnimation:(id)arg1 ;
-(BOOL)_is3D;
-(id)_controlBarItems;
-(void)_didSetNavigationBarsHidden:(BOOL)arg1 ;
-(BOOL)_canHideTopBarShadow;
-(void)_refreshCameraPosition;
-(void)setDisableMasking:(BOOL)arg1 ;
-(void)_startNavigationCameraMotionAnimated:(BOOL)arg1 ;
-(void)_stopNavigationCameraMotion;
-(void)_prepareViewForLockScreen:(id)arg1 ;
-(void)_setAttributedRoute:(id)arg1 ;
-(void)_audioNotificationForNewTransportType:(int)arg1 ;
-(void)_updateWithMatchedLocation:(id)arg1 ;
-(UIEdgeInsets)_minimumEdgeInsets;
-(void)_threeDButtonTapped:(id)arg1 ;
-(void)navigationOverviewBarOverviewTapped:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 dismissHandler:(/*^block*/ id)arg2 ;
-(void)prepareToRunNavigationAnimated:(BOOL)arg1 ;
-(void)_updateControlBarItemsAnimated:(BOOL)arg1 ;
-(BOOL)disableMasking;
-(void)setTopBarTitleView:(id)arg1 ;
-(void)_addTopBarLayerMask;
-(id)layerMaskAnimationWithFrom:(float)arg1 to:(float)arg2 ;
-(void)_removeTopBarLayerMask;
-(id)topBarTitleView;
-(void)_didChangeCurrentLocale;
-(void)setSignsCarousel:(id)arg1 ;
-(id)signsCarousel;
-(void)signsCarousel:(id)arg1 didChangeSelectedSignIndexWithCause:(int)arg2 ;
-(void)signsCarousel:(id)arg1 didChangeFrame:(CGRect)arg2 ;
-(void)signsCarousel:(id)arg1 didScroll:(int)arg2 withNewFrame:(CGRect)arg3 ;
-(void)signsCarousel:(id)arg1 didUpdateSignWidthWithNewFrame:(CGRect)arg2 ;
-(void)_setupWithRoute:(id)arg1 ;
-(void)_cleanupRouteSigns;
-(unsigned)_nextStepIndexWithSign:(unsigned)arg1 ;
-(BOOL)_isCameraControllerActive;
-(void)_forceStepTrackingToCurrentStepAnimated:(BOOL)arg1 resetGuidanceStep:(BOOL)arg2 ;
-(void)_slideSignCarouselOnScreenFromRight;
-(void)_hideSignsCarouselAnimated:(BOOL)arg1 ;
-(void)_updatePreRouteStepTracking;
-(void)_updateStepTrackingWithNavigatorStep;
-(void)_updateCameraViewStyle;
-(void)_updateCameraFocus;
-(void)_hideTagView;
-(CGRect)_signsCarouselFrame;
-(void)_setupTagViewForAnimation;
-(void)_showTagView;
-(void)setStagedHeightForTagAnimation:(float)arg1 ;
-(float)stagedHeightForTagAnimation;
-(void)_updateTagViewFrame:(CGRect)arg1 ;
-(void)setIsAnimatingStatusBar:(BOOL)arg1 ;
-(void)_updateTagViewHiddenStatus:(BOOL)arg1 ;
-(void)_layoutSignsOrderingNeedsUpdate:(BOOL)arg1 ;
-(void)_updateSignsCarouselFrame;
-(void)_setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_doesStepIndexHaveSign:(unsigned)arg1 ;
-(void)_restoreStepDistanceForModifiedSign;
-(unsigned)_signIndexForStepIndex:(unsigned)arg1 ;
-(unsigned)_stepIndexForSignIndex:(unsigned)arg1 ;
-(void)_setupPreRouteGuidanceAtStepIndex:(unsigned)arg1 redisplayCarousel:(BOOL)arg2 ;
-(void)_setStepIndex:(unsigned)arg1 animated:(BOOL)arg2 scrollsSignCarousel:(BOOL)arg3 ;
-(void)_updateDistanceForNavigatorStep;
-(unsigned)_arrowIndexForGuidanceStep;
-(void)_moveCameraToCurrentStepAnimated:(BOOL)arg1 ;
-(void)_updateSignViewsForNewStepAnimated:(BOOL)arg1 scrollSignCarousel:(BOOL)arg2 ;
-(void)_refreshCameraForMatchedLocation;
-(void)_moveMapRegionToCurrentStepAnimated:(BOOL)arg1 ;
-(void)_setGuidanceStepIndex:(unsigned)arg1 ;
-(void)_updateTagWithRemainingTime:(double)arg1 andDistance:(double)arg2 ;
-(void)setETATotalRemainingTime:(double)arg1 remainingDistance:(double)arg2 ;
-(void)setProceedToRouteDisplayString:(id)arg1 ;
-(id)proceedToRouteDisplayString;
-(BOOL)isAnimatingStatusBar;
-(id)compactLine;
-(void)setCompactLine:(id)arg1 ;
-(void)worldView:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
@end

