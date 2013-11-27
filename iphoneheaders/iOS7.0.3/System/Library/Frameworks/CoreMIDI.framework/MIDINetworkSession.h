/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreMIDI/CoreMIDI-Structs.h>
@class NSString;

@interface MIDINetworkSession : NSObject {

	MIDINetworkSessionImpl* _impl;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) unsigned networkPort; 
@property (nonatomic,readonly) NSString * networkName; 
@property (nonatomic,readonly) NSString * localName; 
@property (assign,nonatomic) unsigned connectionPolicy; 
+(id)defaultSession;
-(BOOL)removeConnection:(id)arg1 ;
-(BOOL)addConnection:(id)arg1 ;
-(id)contacts;
-(id)connections;
-(void)setStateToEntity;
-(void)updateFromEntity;
-(void)refreshBonjourName;
-(BOOL)addOrRemoveConnection:(id)arg1 add:(BOOL)arg2 ;
-(unsigned)networkPort;
-(unsigned)connectionPolicy;
-(void)setConnectionPolicy:(unsigned)arg1 ;
-(BOOL)addContact:(id)arg1 ;
-(BOOL)removeContact:(id)arg1 ;
-(void)sessionChanged;
-(void)contactsChanged;
-(OpaqueMIDIEndpointRef)sourceEndpoint;
-(OpaqueMIDIEndpointRef)destinationEndpoint;
-(void)dealloc;
-(id)init;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)networkName;
-(id)localName;
@end

