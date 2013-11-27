/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKRemoteUIController.h>

@class GKPlayer, NSURL, NSError;

@interface GKReportProblemRemoteUIController : GKRemoteUIController {

	GKPlayer* _problemPlayer;
	NSURL* _url;

}

@property (nonatomic,retain) GKPlayer * problemPlayer;              //@synthesize problemPlayer=_problemPlayer - In the implementation block
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
+(id)controllerForProblemPlayer:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(int)preferredLayoutStyle;
-(id)fallbackURL;
-(id)postBodyForInitialLoad;
-(id)bagKey;
-(id)initWithProblemPlayer:(id)arg1 ;
-(id)problemPlayer;
-(void)setProblemPlayer:(id)arg1 ;
-(id)url;
-(void)setUrl:(id)arg1 ;
@end

