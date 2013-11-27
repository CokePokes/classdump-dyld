/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBUIBannerSource, SBUIBannerTarget;
@class SBUIBannerItem, ;

@interface SBUIBannerContext : NSObject {

	SBUIBannerItem* _item;
	<SBUIBannerSource>* _source;
	<SBUIBannerTarget>* _target;

}

@property (nonatomic,readonly) SBUIBannerItem * item;                    //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) <SBUIBannerSource> * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) <SBUIBannerTarget> * target;              //@synthesize target=_target - In the implementation block
-(void)dealloc;
-(id)description;
-(id)target;
-(id)item;
-(id)source;
-(id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 ;
@end

