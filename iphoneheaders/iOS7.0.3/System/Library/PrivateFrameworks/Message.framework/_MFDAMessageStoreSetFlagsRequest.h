/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccess/DAMailboxSetFlagsRequest.h>
#import <Message/MFDAMailAccountRequest.h>

@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest>

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(unsigned long long)generationNumber;
-(BOOL)isUserRequested;
-(id)deferredOperation;
-(BOOL)shouldSend;
@end

