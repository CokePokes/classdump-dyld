/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <profiled/MCNewPayloadHandler.h>

@class NSMutableSet;

@interface MCNewDefaultsPayloadHandler : MCNewPayloadHandler {

	NSMutableSet* _changedDomains;

}
+(id)defaultsForManagedDomain:(id)arg1 ;
+(void)removeDefaults:(id)arg1 forDomain:(id)arg2 ;
+(id)_managedSettingsFolder;
+(void)removeDefaults:(id)arg1 forManagedDomain:(id)arg2 ;
+(BOOL)setDefaults:(id)arg1 forManagedDomain:(id)arg2 ;
+(BOOL)addDefaults:(id)arg1 toManagedDomain:(id)arg2 ;
-(id)initWithPayload:(id)arg1 profileHandler:(id)arg2 ;
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)unsetAside;
-(void)setAside;
-(void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)_remove;
-(void)migrateDefaults;
-(BOOL)_forceResupervisionNowWithCompressedSerialNumbers:(id)arg1 allowPairing:(BOOL)arg2 hostCertData:(id)arg3 organizationName:(id)arg4 ;
-(void)_sendCFPreferenceNotification;
-(void)remove;
-(void).cxx_destruct;
-(BOOL)_install;
@end

