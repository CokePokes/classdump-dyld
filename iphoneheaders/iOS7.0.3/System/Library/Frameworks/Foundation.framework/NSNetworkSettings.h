/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Foundation/Foundation-Structs.h>
@class NSNetworkSettingsInternal;

@interface NSNetworkSettings : NSObject {

	NSNetworkSettingsInternal* _internal;

}
+(id)sharedNetworkSettings;
-(id)proxyDictionary;
-(void)_updateProxySettings;
-(void)_listenForProxySettingChanges;
-(id)proxyPropertiesForURL:(id)arg1 ;
-(BOOL)isProxyNeededForURL:(id)arg1 ;
-(void)setProxyPropertiesForURL:(id)arg1 onStream:(CFReadStreamRef)arg2 ;
-(BOOL)connectedToInternet:(BOOL)arg1 ;
-(void)setProxyDictionary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
@end

