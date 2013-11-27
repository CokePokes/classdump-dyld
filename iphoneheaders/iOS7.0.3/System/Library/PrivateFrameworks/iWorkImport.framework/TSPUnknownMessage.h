/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_data;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject, TSPLazyReferenceArray, NSArray;

@interface TSPUnknownMessage : NSObject {

	MessageInfo* _messageInfo;
	NSObject<OS_dispatch_data>* _messageData;
	TSPLazyReferenceArray* _objects;
	NSArray* _datas;

}

@property (nonatomic,readonly) NSObject<OS_dispatch_data> * messageData;              //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,retain) TSPLazyReferenceArray * objects;                         //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) NSArray * datas;                                         //@synthesize datas=_datas - In the implementation block
-(id)datas;
-(const MessageInfo*)messageInfo;
-(id)initWithMessageInfo:(const MessageInfo*)arg1 data:(id)arg2 ;
-(void)setDatas:(id)arg1 ;
-(id)objects;
-(id)init;
-(id).cxx_construct;
-(id)messageData;
-(void).cxx_destruct;
-(void)setObjects:(id)arg1 ;
@end

