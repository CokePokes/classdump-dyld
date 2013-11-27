/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>
#import <MobileCoreServices/LSApplicationWorkspaceObserverProtocol.h>

@class LSApplicationWorkspace, NSHashTable, NSMutableSet, NSSet;

@interface SBLSApplicationWorkspaceObserver : LSApplicationWorkspaceObserver <LSApplicationWorkspaceObserverProtocol> {

	LSApplicationWorkspace* _appWorkspace;
	NSHashTable* _applicationObservers;
	NSHashTable* _placeholderObservers;
	NSMutableSet* _placeholderProxies;

}

@property (nonatomic,readonly) LSApplicationWorkspace * workspace;              //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (nonatomic,retain) NSSet * placeholderProxies;                        //@synthesize placeholderProxies=_placeholderProxies - In the implementation block
+(id)sharedInstance;
-(void)addApplicationLifecycleObserver:(id)arg1 ;
-(void)removeApplicationLifecycleObserver:(id)arg1 ;
-(id)workspace;
-(void)addPlaceholderLifecycleObserver:(id)arg1 ;
-(id)placeholderProxies;
-(void)removePlaceholderLifecycleObserver:(id)arg1 ;
-(void)_addObserver:(id)arg1 table:(id)arg2 ;
-(void)_removeObserver:(id)arg1 table:(id)arg2 ;
-(void)setPlaceholderProxies:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

