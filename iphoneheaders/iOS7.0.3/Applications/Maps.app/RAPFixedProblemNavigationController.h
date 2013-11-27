/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>

@class RAPFixedProblemViewController;

@interface RAPFixedProblemNavigationController : UINavigationController {

	/*^block*/ id doneHandler;
	RAPFixedProblemViewController* _fixedProblemViewController;
	/*^block*/ id _doneHandler;

}

@property (nonatomic,copy) id doneHandler;                                                            //@synthesize doneHandler=_doneHandler - In the implementation block
@property (nonatomic,retain) RAPFixedProblemViewController * fixedProblemViewController;              //@synthesize fixedProblemViewController=_fixedProblemViewController - In the implementation block
+(id)fixedProblemNavigationControllerWithProblemStatusResponse:(id)arg1 ;
-(void)handleDone:(id)arg1 ;
-(void)setFixedProblemViewController:(id)arg1 ;
-(id)fixedProblemViewController;
-(void)setDoneHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)doneHandler;
-(void)dealloc;
@end

