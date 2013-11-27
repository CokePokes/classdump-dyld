/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface GKDevice : NSObject {

	NSString* _udid;
	NSString* _deviceName;
	NSString* _osVersion;
	NSString* _buildVersion;
	NSString* _gameKitVersion;
	float _mainScreenScale;

}

@property (nonatomic,readonly) NSString * udid; 
@property (nonatomic,readonly) NSString * deviceName;                  //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                   //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) NSString * gameKitVersion;              //@synthesize gameKitVersion=_gameKitVersion - In the implementation block
@property (nonatomic,readonly) float mainScreenScale;                  //@synthesize mainScreenScale=_mainScreenScale - In the implementation block
+(id)currentDevice;
-(void)_initPlatform;
-(id)_platformUDID;
-(id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2 ;
-(id)gameKitVersion;
-(id)storeUserAgent;
-(id)protocolVersionHeader;
-(id)buildVersionHeader;
-(id)udid;
-(id)osVersion;
-(id)processNameHeader;
-(void)dealloc;
-(id)init;
-(id)buildVersion;
-(id)deviceName;
-(float)mainScreenScale;
-(id)userAgent;
@end

