/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKStateMachineDelegate.h>

@protocol GKSegmentInfoDelegagte;
@class NSObject, GKCollectionViewDataSource, NSString, GKPlaceholderContentStateMachine;

@interface GKSegmentInfo : NSObject <GKStateMachineDelegate> {

	NSObject<GKSegmentInfoDelegagte>* _delegateWeak;
	GKCollectionViewDataSource* _dataSource;
	NSString* _title;
	GKPlaceholderContentStateMachine* _loadingMatchine;

}

@property (assign,nonatomic) NSObject<GKSegmentInfoDelegagte> * delegate;                     //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) GKPlaceholderContentStateMachine * loadingMatchine;              //@synthesize loadingMatchine=_loadingMatchine - In the implementation block
@property (nonatomic,retain) NSString * loadingState; 
-(void)setLoadingState:(id)arg1 ;
-(void)didEnterLoadingState;
-(void)didExitLoadingState;
-(void)didEnterNoContentState;
-(void)didEnterErrorState;
-(id)loadingState;
-(id)loadingMatchine;
-(void)setLoadingMatchine:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)dataSource;
-(id)delegate;
-(id)title;
-(id)initWithDataSource:(id)arg1 ;
@end

