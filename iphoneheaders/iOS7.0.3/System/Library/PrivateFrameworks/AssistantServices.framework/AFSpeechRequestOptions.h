/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding> {

	BOOL _isEyesFree;
	BOOL _useAutomaticEndpointing;
	BOOL _useFreshContext;
	BOOL _isInitialBringUp;
	int _event;
	NSString* _btDeviceAddress;
	NSString* _serverCommandId;
	double _activationEventTime;
	double _expectedActivationEventTime;

}

@property (assign,nonatomic) int activationEvent;                             //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) NSString * btDeviceAddress;                        //@synthesize btDeviceAddress=_btDeviceAddress - In the implementation block
@property (assign,nonatomic) BOOL isEyesFree;                                 //@synthesize isEyesFree=_isEyesFree - In the implementation block
@property (nonatomic,copy) NSString * serverCommandId;                        //@synthesize serverCommandId=_serverCommandId - In the implementation block
@property (assign,nonatomic) BOOL useAutomaticEndpointing;                    //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) BOOL useFreshContext;                            //@synthesize useFreshContext=_useFreshContext - In the implementation block
@property (assign,nonatomic) double activationEventTime;                      //@synthesize activationEventTime=_activationEventTime - In the implementation block
@property (assign,nonatomic) double expectedActivationEventTime;              //@synthesize expectedActivationEventTime=_expectedActivationEventTime - In the implementation block
@property (assign,nonatomic) BOOL isInitialBringUp;                           //@synthesize isInitialBringUp=_isInitialBringUp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithActivationEvent:(int)arg1 ;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
-(id)serverCommandId;
-(int)activationEvent;
-(void)setActivationEvent:(int)arg1 ;
-(id)btDeviceAddress;
-(void)setBtDeviceAddress:(id)arg1 ;
-(BOOL)isEyesFree;
-(void)setIsEyesFree:(BOOL)arg1 ;
-(void)setServerCommandId:(id)arg1 ;
-(BOOL)useAutomaticEndpointing;
-(BOOL)useFreshContext;
-(void)setUseFreshContext:(BOOL)arg1 ;
-(double)activationEventTime;
-(void)setActivationEventTime:(double)arg1 ;
-(double)expectedActivationEventTime;
-(void)setExpectedActivationEventTime:(double)arg1 ;
-(BOOL)isInitialBringUp;
-(void)setIsInitialBringUp:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

