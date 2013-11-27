/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSProxy.h>
#import <CoreMotion/CLIntersiloServiceProtocol.h>

@class CLIntersiloInterfaceSelectorInfo, CLSilo, CLIntersiloInterface;

@interface CLIntersiloProxy : NSProxy <CLIntersiloServiceProtocol> {

	CLIntersiloProxy* _peer;
	CLIntersiloProxy* _asymStrongPeer;
	CLIntersiloInterfaceSelectorInfo* _last;
	id _delegate;
	CLSilo* _delegateSilo;
	CLIntersiloInterface* _delegateInterface;
	CLIntersiloInterface* _proxiedInterface;

}

@property (nonatomic,readonly) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CLSilo * delegateSilo;                                 //@synthesize delegateSilo=_delegateSilo - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * delegateInterface;              //@synthesize delegateInterface=_delegateInterface - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * proxiedInterface;               //@synthesize proxiedInterface=_proxiedInterface - In the implementation block
+(id)getSilo;
+(id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 withInboundInterface:(id)arg3 andOutboundInterface:(id)arg4 ;
-(void)heartAttack;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2 ;
-(id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 delegateObject:(id)arg3 delegateSilo:(id)arg4 andUninitializedPeer:(id)arg5 ;
-(id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 andUninitializedPeer:(id)arg3 ;
-(id)delegateSilo;
-(id)delegateInterface;
-(id)proxiedInterface;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void).cxx_destruct;
@end

