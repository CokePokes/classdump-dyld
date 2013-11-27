/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MFSASLSecurityLayer;
#import <Message/Message-Structs.h>
@class , _MFSocket, NSData, NSMutableString, NSArray, NSString;

@interface MFConnection : NSObject {

	<MFSASLSecurityLayer>* _securityLayer;
	_MFSocket* _socket;
	double _lastUsedTime;
	char* _buffer;
	int _bufferRemainingBytes;
	unsigned _bufferStart;
	unsigned _bufferLength;
	unsigned long _desiredBufferLength;
	z_stream_s* _deflater;
	z_stream_s* _inflater;
	char* _zbuffer;
	NSData* _logData;
	unsigned _dontLogReads;
	unsigned _readBytesNotLogged;
	NSMutableString* _readBytesToLog;
	unsigned _isFetching : 1;
	unsigned _allowFallbacks : 1;
	unsigned _compressionEnabled : 1;
	unsigned _bytesWritten;
	unsigned _bytesRead;

}

@property (assign,nonatomic) BOOL isFetching; 
@property (nonatomic,readonly) double lastUsedTime; 
@property (nonatomic,readonly) NSArray * capabilities; 
@property (nonatomic,readonly) NSArray * authenticationMechanisms; 
@property (nonatomic,readonly) NSString * securityProtocol; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL hasBytesAvailable; 
@property (nonatomic,readonly) BOOL isCellularConnection; 
@property (nonatomic,readonly) BOOL loginDisabled; 
@property (nonatomic,readonly) BOOL usesOpportunisticSockets; 
@property (nonatomic,readonly) unsigned bytesWritten;                           //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (nonatomic,readonly) unsigned bytesRead;                              //@synthesize bytesRead=_bytesRead - In the implementation block
+(void)initialize;
+(BOOL)shouldTryFallbacksAfterError:(id)arg1 ;
+(void)readLoggingDefaults;
+(void)logBytes:(const char*)arg1 length:(int)arg2 ;
+(void)flushLog;
+(id)logClasses;
+(void)setLogClasses:(id)arg1 ;
+(BOOL)logAllSocketActivity;
+(void)setLogAllSocketActivity:(BOOL)arg1 ;
+(id)logActivityOnPorts;
+(void)setLogActivityOnPorts:(id)arg1 ;
+(id)logActivityOnHosts;
+(void)setLogActivityOnHosts:(id)arg1 ;
-(BOOL)hasBytesAvailable;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(void)disconnect;
-(BOOL)connectUsingFallbacksForAccount:(id)arg1 ;
-(BOOL)authenticateUsingAccount:(id)arg1 ;
-(unsigned)bytesWritten;
-(id)securityProtocol;
-(BOOL)writeData:(id)arg1 dontLogBytesInRange:(NSRange)arg2 ;
-(BOOL)writeBytes:(const char*)arg1 length:(unsigned long)arg2 dontLogBytesInRange:(NSRange)arg3 ;
-(BOOL)readLineIntoData:(id)arg1 ;
-(BOOL)connectUsingAccount:(id)arg1 ;
-(id)authenticationMechanisms;
-(BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2 ;
-(BOOL)loginDisabled;
-(void)setAllowsFallbacks:(BOOL)arg1 ;
-(void)enableThroughputMonitoring:(BOOL)arg1 ;
-(void)enableExcessiveKeepaliveDetection:(BOOL)arg1 ;
-(BOOL)usesOpportunisticSockets;
-(void)_setupNetworkLogging;
-(BOOL)connectUsingSettings:(id)arg1 ;
-(id)capabilities;
-(BOOL)isFetching;
-(void)setIsFetching:(BOOL)arg1 ;
-(void)setDesiredReadBufferLength:(unsigned long)arg1 ;
-(void)enableReadLogging:(BOOL)arg1 ;
-(void)logReadChars:(const char*)arg1 length:(unsigned long)arg2 ;
-(BOOL)readBytesIntoData:(id)arg1 desiredLength:(unsigned long)arg2 ;
-(BOOL)startTLSForAccount:(id)arg1 ;
-(BOOL)startCompression;
-(unsigned)bytesRead;
-(double)lastUsedTime;
-(BOOL)isCellularConnection;
-(BOOL)writeData:(id)arg1 ;
@end

