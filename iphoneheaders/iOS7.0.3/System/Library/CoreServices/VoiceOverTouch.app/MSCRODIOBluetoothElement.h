/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/scrod
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <scrod/scrod-Structs.h>
#import <ScreenReaderOutputServer/SCROIOElement.h>
#import <ScreenReaderOutputServer/SCROIOBluetoothElementProtocol.h>

@class NSString;

@interface MSCRODIOBluetoothElement : SCROIOElement <SCROIOBluetoothElementProtocol> {

	NSString* _bluetoothAddress;

}
-(id)initWithAddress:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)transport;
-(id)bluetoothAddress;
@end

