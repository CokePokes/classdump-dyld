/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol EnvironmentsControllerDelegate;
@class NSArray, ;

@interface EnvironmentsController : NSObject {

	NSArray* _defaultEnvironmentInfos;
	NSArray* _environmentInfos;
	NSArray* _customEnvironmentInfos;
	BOOL _enableCustomEnvironments;
	<EnvironmentsControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <EnvironmentsControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initEnablingCustomEnvironments:(BOOL)arg1 ;
-(void)reloadEnvironments;
-(id)environmentInfosForSection:(int)arg1 ;
-(void)addCustomEnvironment:(id)arg1 ;
-(void)removeCustomEnvironment:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

