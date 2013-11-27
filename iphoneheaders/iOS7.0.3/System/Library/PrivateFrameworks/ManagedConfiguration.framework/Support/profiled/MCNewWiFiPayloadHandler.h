/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <profiled/profiled-Structs.h>
#import <profiled/MCNewPayloadHandler.h>

@class NSString;

@interface MCNewWiFiPayloadHandler : MCNewPayloadHandler {

	WiFiManagerClientRef _manager;
	NSString* _setAsideUUID;

}
+(id)managedWiFiNetworkNames;
-(id)initWithPayload:(id)arg1 profileHandler:(id)arg2 ;
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)userInputFields;
-(BOOL)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(BOOL)_applyProxyCredential:(CFURLCredentialRef)arg1 ;
-(void)_updateWiFiCustomSetWithSetID:(id)arg1 forSSID:(id)arg2 ;
-(BOOL)_setEAPConfig:(id)arg1 onNetwork:(WiFiNetworkRef)arg2 ;
-(BOOL)_configureProxyForNetwork:(WiFiNetworkRef)arg1 outError:(id*)arg2 ;
-(void)_removeProxyCredential;
-(void)_removeNetworkWithUUID:(id)arg1 ;
-(void)dealloc;
-(void)remove;
-(BOOL)isInstalled;
-(void).cxx_destruct;
@end

