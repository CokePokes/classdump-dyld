/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLWiFiLogger.bundle/PLWiFiLogger
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PLWiFiLogger/PLWiFiLogger-Structs.h>
#import <PowerlogLoggerSupport/PLLogger.h>

@class NSDictionary;

@interface PLWiFiLogger : PLLogger {

	WiFiManagerClientRef wifiManager;
	WiFiDeviceClientRef wifiDevice;
	timeval lastTimeSinceEpoch;
	timeval nowTimeSinceEpoch;
	NSDictionary* last_WiFi_ret;
	unsigned lastWoWTimestamp;

}

@property (assign,nonatomic) WiFiManagerClientRef wifiManager; 
@property (assign,nonatomic) WiFiDeviceClientRef wifiDevice; 
-(void)dealloc;
-(id)init;
-(void)log;
-(WiFiManagerClientRef)wifiManager;
-(void)setWifiManager:(WiFiManagerClientRef)arg1 ;
-(void)handleWake:(id)arg1 ;
-(id)loggerFunctionCall:(short)arg1 withParameters:(id)arg2 ;
-(void)disableWiFiManagerLogging:(id)arg1 ;
-(BOOL)hasWiFi;
-(WiFiDeviceClientRef)wifiDevice;
-(BOOL)isWowSupported;
-(void)logNotification:(int)arg1 ;
-(void)setWifiDevice:(WiFiDeviceClientRef)arg1 ;
-(id)wifiStatus;
-(BOOL)isWiFiPowered;
-(id)ssidName;
-(id)channelNumber;
-(BOOL)isWowEnabled;
-(void)addEnhancedLoggingToEntry:(id)arg1 withWifiProperties:(id)arg2 ;
-(void)addBasicLoggingToEntry:(id)arg1 withWifiProperties:(id)arg2 ;
-(void)logWifiDebugWithWifiProperties:(id)arg1 ;
-(id)decodeWakeReason:(id)arg1 ;
-(void)addEnhancedWakeLoggingToEntry:(id)arg1 withData:(id)arg2 withReason:(id)arg3 ;
-(id)decodeEthertype:(unsigned short)arg1 ;
-(id)generateWiFiModuleEntry;
-(void)logWiFiModule;
-(int)compareMilliseconds:(unsigned)arg1 to:(unsigned)arg2 withThreshold:(unsigned)arg3 ;
-(id)decodeWifiEventLinkReason:(unsigned long)arg1 ;
-(void)findWiFiDevice;
-(BOOL)isWiFiManagerLoggingEnabled;
-(void)enableWiFiManagerLogging;
-(void)scheduleDisableWiFiManagerLogging;
-(BOOL)isWiFiWakeup:(id)arg1 ;
-(BOOL)didWakeTooOften;
-(void)logWifiWakeWithTime:(unsigned)arg1 withData:(id)arg2 withReason:(id)arg3 ;
-(void)logDataPacket:(id)arg1 ;
-(id)decodeWifiEventStatus:(unsigned long)arg1 ;
-(void)logWiFiAvailableReason:(int)arg1 withSubReason:(int)arg2 ;
-(void)logWiFiRSSI:(float)arg1 withRawvalue:(int)arg2 ;
@end

