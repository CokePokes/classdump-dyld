/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <CoreFoundation/NSStreamDelegate.h>

@protocol HSControlConnectionDelegate;
@class NSOutputStream, ;

@interface HSControlConnection : NSObject <NSStreamDelegate> {

	unsigned _key;
	NSOutputStream* _outputStream;
	double _timestamp;
	<HSControlConnectionDelegate>* _delegate;
	unsigned _protocolVersion;

}

@property (assign,nonatomic) <HSControlConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned protocolVersion;                              //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(unsigned)protocolVersion;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)close;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(id)initWithHost:(id)arg1 port:(unsigned)arg2 key:(unsigned)arg3 ;
-(id)_newDataForControlEventMessage:(SCD_Struct_HS7)arg1 ;
-(id)_newDataForControlExtendedMessage:(SCD_Struct_HS7)arg1 withData:(id)arg2 ;
-(void)_sendTouchEvent:(int)arg1 locations:(const unsigned*)arg2 count:(unsigned)arg3 velocity:(SCD_Struct_HS8)arg4 ;
-(id)_newDataForControlTouchEventMessage_v1:(SCD_Struct_HS9*)arg1 ;
-(id)_newDataForControlTouchEventMessage_v1_1:(SCD_Struct_HS10*)arg1 ;
-(void)sendEvent:(int)arg1 value:(unsigned)arg2 ;
-(void)sendShowItemDetailWithDictionary:(id)arg1 ;
-(void)sendTouchesBegan:(const unsigned*)arg1 count:(unsigned)arg2 ;
-(void)sendTouchesEnded:(const unsigned*)arg1 count:(unsigned)arg2 ;
-(void)sendTouchesMoved:(const unsigned*)arg1 count:(unsigned)arg2 velocity:(SCD_Struct_HS8)arg3 ;
-(void)open;
@end

