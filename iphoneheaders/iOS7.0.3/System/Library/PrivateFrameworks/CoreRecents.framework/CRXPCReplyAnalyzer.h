/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDictionary, NSError;

@interface CRXPCReplyAnalyzer : NSObject {

	NSDictionary* _dictionaryValue;
	NSError* _error;

}

@property (retain) NSDictionary * dictionaryValue;              //@synthesize dictionaryValue=_dictionaryValue - In the implementation block
@property (retain) NSError * error;                             //@synthesize error=_error - In the implementation block
+(id)analyzer;
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(void)analyzeMethod:(id)arg1 reply:(id)arg2 ;
-(id)dictionaryValue;
-(void)analyzeXPCError;
-(void)analyzeXPCDictionary:(id)arg1 method:(id)arg2 ;
-(id)errorFromServiceReply:(id)arg1 ;
-(void)setDictionaryValue:(id)arg1 ;
-(id)error;
@end

