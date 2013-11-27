/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VPNPreferences/VPNPreferences-Structs.h>
@class NSString, InternetConnectPPPDialer, NSNumber;

@interface VPNConnection : NSObject {

	NSString* _serviceID;
	NSString* _password;
	NSString* _server;
	NSString* _account;
	NSString* _displayName;
	NSString* _sharedSecret;
	InternetConnectPPPDialer* _dialer;
	CFStringRef _vpnType;
	NSNumber* _onDemandCapable;
	NSNumber* _onDemandEnabled;
	int _status;
	BOOL _useRSASecurID;
	id _certificate;

}
+(id)statusTextForConnectionStatus:(int)arg1 connection:(id)arg2 ;
-(id)configurationName;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)statusText;
-(void)dealloc;
-(id)server;
-(void)connect;
-(id)displayName;
-(void)disconnect;
-(CFStringRef)vpnType;
-(id)dialer;
-(id)_fullOptions;
-(BOOL)passwordIsSaved;
-(BOOL)useRSASecurID;
-(id)serviceID;
-(id)initWithServiceID:(id)arg1 options:(id)arg2 ;
-(void)setUseRSASecurID:(BOOL)arg1 ;
-(id)vpnTypeLocalizedString;
-(BOOL)disconnected;
-(int)lastStatus;
-(BOOL)needsPassword;
-(id)accountName;
-(BOOL)connected;
-(id)certificate;
-(void)setCertificate:(id)arg1 ;
@end

