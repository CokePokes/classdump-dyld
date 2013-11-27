/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/ptpd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ptpd/ptpd-Structs.h>
#import <ImageCapture/PTPTransport.h>

@class NSString, NSMutableArray, NSMutableData;

@interface PTPDeviceUSBTransport : PTPTransport {

	unsigned long _locationID;
	unsigned short _vendorID;
	unsigned short _productID;
	NSString* _usbSerialNumberString;
	IOUSBDeviceInterfaceInterface* _interfaceInterfaceRef;
	unsigned _notification;
	IOCFPlugInInterfaceStruct* _ioCFPlugInInterface;
	unsigned long long _bulkPipeIn;
	unsigned long long _bulkPipeOut;
	unsigned long long _interruptPipeIn;
	IOUSBDeviceDataRef _readDataRef;
	IOUSBDeviceDataRef _writeDataRef;
	IOUSBDeviceDataRef _eventDataRef;
	unsigned _notificationDevice;
	IONotificationPortRef _notificationPort;
	NSMutableArray* _eventArray;
	CFRunLoopTimerRef _activationTimer;
	unsigned long _readBufferSize;
	unsigned long _writeBufferSize;
	unsigned long _eventDataBufferSize;
	char* _readBuffer;
	char* _writeBuffer;
	char* _eventDataBuffer;
	NSMutableData* _cdData;
	NSMutableData* _eventData;
	int _maxPacketSizeBulkIn;
	int _maxPacketSizeBulkOut;
	int _maxPacketSizeInterruptIn;
	CFRunLoopSourceRef _CFRunLoopSource;
	BOOL _delegateNeedsData;
	BOOL _connected;
	unsigned long _transactionID;
	opaque_pthread_t* _timerThread;
	BOOL _callbackThreadIsReady;
	BOOL _sendEvents;
	unsigned long _numberOfSendEventsTimedOut;

}
-(void)deviceAdded:(unsigned)arg1 ;
-(int)readBulkData;
-(void)setActivationTimeout:(int)arg1 ;
-(void)sendDataPacketsSplit:(id)arg1 ;
-(BOOL)sendNextEvent;
-(void)checkInterruptWriteCompletion:(id)arg1 ;
-(void)abortInterruptWrite:(id)arg1 ;
-(BOOL)writeInterruptData:(id)arg1 ;
-(int)setupDeviceInterface;
-(void)activationTimeoutOccurred;
-(BOOL)sendRequest:(id)arg1 needsData:(BOOL)arg2 ;
-(void)handleWriteInterruptDataCompletion:(id)arg1 ;
-(int)handleDeviceRequest:(SCD_Struct_PT4*)arg1 data:(_IOUSBDeviceData*)arg2 dataSize:(unsigned*)arg3 status:(int*)arg4 ;
-(void)cleanupTimerThread;
-(void*)timerThreadEntryPoint;
-(unsigned short)vendorID;
-(void)dealloc;
-(id)description;
-(BOOL)sendEvent:(id)arg1 ;
-(void)deactivate;
-(void)stop;
-(void)setConnected:(BOOL)arg1 ;
-(void)activate:(BOOL)arg1 ;
-(BOOL)sendResponse:(id)arg1 ;
-(void)sendDataPackets:(id)arg1 ;
-(BOOL)startResponder;
-(BOOL)connected;
-(BOOL)sendCancel:(id)arg1 ;
-(void)cancelTransaction:(id)arg1 ;
-(void)abortPendingIO;
-(unsigned short)productID;
-(id)usbSerialNumberString;
-(unsigned short)deviceStatus;
-(void)cleanupCallbackThread;
-(int)readInterruptData;
-(BOOL)writeBulkData:(id)arg1 ;
-(unsigned long)locationID;
-(void)dumpData:(void*)arg1 length:(int)arg2 comment:(id)arg3 ;
-(BOOL)handleBulkData:(unsigned long)arg1 result:(int)arg2 ;
-(void)handleInterruptData:(unsigned long)arg1 ;
-(void)sendData:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

