/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/vmd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <vmd/VMDVoicemail.h>
#import <vmd/VMDVoicemailConcrete.h>

@protocol VMDAccountConcrete;
@class VMDAccount;

@interface VMDLegacyVoicemail : VMDVoicemail <VMDVoicemailConcrete> {

	void* _record;
	VMDAccount<VMDAccountConcrete>* _account;

}

@property (readonly) void* record;              //@synthesize record=_record - In the implementation block
-(id)initWithStoreRecord:(void*)arg1 account:(id)arg2 ;
-(void)dealloc;
-(int)duration;
-(id)date;
-(long long)identifier;
-(id)sender;
-(unsigned)flags;
-(id)account;
-(void)setFlags:(unsigned)arg1 ;
-(void*)record;
-(unsigned long long)remoteUID;
-(id)callbackNumber;
-(id)dataPath;
-(void).cxx_destruct;
@end

