/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <profiled/MCACAccountPayloadHandler.h>

@interface MCNewSubCalAccountPayloadHandler : MCACAccountPayloadHandler
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(id)_accountFromPayload;
-(id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(BOOL)arg2 ;
-(id)_installedAccount;
-(void)remove;
-(BOOL)isInstalled;
@end

