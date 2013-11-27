/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufMMCS.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobufMMCS.dylib/libAWDProtobufMMCS.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface AWDMMCSGetRequestInfo : PBCodable {

	long long _duration;
	long long _localBytes;
	long long _resumedBytes;
	long long _startTime;
	long long _timestamp;
	NSMutableArray* _authHttpInfos;
	NSMutableArray* _cancelErrors;
	int _cancelledErrorCode;
	NSString* _cancelledErrorDomain;
	NSString* _clientId;
	NSMutableArray* _completeHttpInfos;
	NSMutableArray* _containerHttpInfos;
	NSMutableArray* _errors;
	int _itemCount;
	int _itemsNeedingChunks;
	int _requestErrorCode;
	NSString* _requestErrorDomain;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasClientId; 
@property (nonatomic,retain) NSString * clientId;                              //@synthesize clientId=_clientId - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) long long duration;                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasCancelledErrorDomain; 
@property (nonatomic,retain) NSString * cancelledErrorDomain;                  //@synthesize cancelledErrorDomain=_cancelledErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasCancelledErrorCode; 
@property (assign,nonatomic) int cancelledErrorCode;                           //@synthesize cancelledErrorCode=_cancelledErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestErrorDomain; 
@property (nonatomic,retain) NSString * requestErrorDomain;                    //@synthesize requestErrorDomain=_requestErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasRequestErrorCode; 
@property (assign,nonatomic) int requestErrorCode;                             //@synthesize requestErrorCode=_requestErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasItemCount; 
@property (assign,nonatomic) int itemCount;                                    //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) BOOL hasItemsNeedingChunks; 
@property (assign,nonatomic) int itemsNeedingChunks;                           //@synthesize itemsNeedingChunks=_itemsNeedingChunks - In the implementation block
@property (assign,nonatomic) BOOL hasLocalBytes; 
@property (assign,nonatomic) long long localBytes;                             //@synthesize localBytes=_localBytes - In the implementation block
@property (assign,nonatomic) BOOL hasResumedBytes; 
@property (assign,nonatomic) long long resumedBytes;                           //@synthesize resumedBytes=_resumedBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * authHttpInfos;                   //@synthesize authHttpInfos=_authHttpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerHttpInfos;              //@synthesize containerHttpInfos=_containerHttpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * completeHttpInfos;               //@synthesize completeHttpInfos=_completeHttpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * cancelErrors;                    //@synthesize cancelErrors=_cancelErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * errors;                          //@synthesize errors=_errors - In the implementation block
-(void)setItemCount:(int)arg1 ;
-(int)itemCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(long long)timestamp;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(void)setTimestamp:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(long long)startTime;
-(void)setClientId:(id)arg1 ;
-(id)clientId;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStartTime;
-(id)errors;
-(void)setErrors:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setCancelledErrorDomain:(id)arg1 ;
-(void)setRequestErrorDomain:(id)arg1 ;
-(void)setAuthHttpInfos:(id)arg1 ;
-(void)setContainerHttpInfos:(id)arg1 ;
-(void)setCompleteHttpInfos:(id)arg1 ;
-(void)setCancelErrors:(id)arg1 ;
-(void)addAuthHttpInfos:(id)arg1 ;
-(void)addContainerHttpInfos:(id)arg1 ;
-(void)addCompleteHttpInfos:(id)arg1 ;
-(void)addCancelError:(id)arg1 ;
-(void)addError:(id)arg1 ;
-(BOOL)hasClientId;
-(BOOL)hasCancelledErrorDomain;
-(id)cancelledErrorDomain;
-(BOOL)hasCancelledErrorCode;
-(int)cancelledErrorCode;
-(void)setCancelledErrorCode:(int)arg1 ;
-(BOOL)hasRequestErrorDomain;
-(id)requestErrorDomain;
-(BOOL)hasRequestErrorCode;
-(int)requestErrorCode;
-(void)setRequestErrorCode:(int)arg1 ;
-(BOOL)hasItemCount;
-(unsigned)authHttpInfosCount;
-(void)clearAuthHttpInfos;
-(id)authHttpInfosAtIndex:(unsigned)arg1 ;
-(unsigned)containerHttpInfosCount;
-(void)clearContainerHttpInfos;
-(id)containerHttpInfosAtIndex:(unsigned)arg1 ;
-(unsigned)completeHttpInfosCount;
-(void)clearCompleteHttpInfos;
-(id)completeHttpInfosAtIndex:(unsigned)arg1 ;
-(unsigned)cancelErrorsCount;
-(void)clearCancelErrors;
-(id)cancelErrorAtIndex:(unsigned)arg1 ;
-(unsigned)errorsCount;
-(void)clearErrors;
-(id)errorAtIndex:(unsigned)arg1 ;
-(void)setHasCancelledErrorCode:(BOOL)arg1 ;
-(void)setHasRequestErrorCode:(BOOL)arg1 ;
-(void)setHasItemCount:(BOOL)arg1 ;
-(id)authHttpInfos;
-(id)containerHttpInfos;
-(id)completeHttpInfos;
-(id)cancelErrors;
-(BOOL)hasItemsNeedingChunks;
-(int)itemsNeedingChunks;
-(void)setItemsNeedingChunks:(int)arg1 ;
-(BOOL)hasLocalBytes;
-(long long)localBytes;
-(void)setLocalBytes:(long long)arg1 ;
-(BOOL)hasResumedBytes;
-(long long)resumedBytes;
-(void)setResumedBytes:(long long)arg1 ;
-(void)setHasItemsNeedingChunks:(BOOL)arg1 ;
-(void)setHasLocalBytes:(BOOL)arg1 ;
-(void)setHasResumedBytes:(BOOL)arg1 ;
@end

