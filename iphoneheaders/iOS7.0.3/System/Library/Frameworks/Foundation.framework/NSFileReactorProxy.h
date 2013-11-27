/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object;
@class NSObject, NSFileAccessNode;

@interface NSFileReactorProxy : NSObject {

	NSObject<OS_xpc_object>* _client;
	id _reactorID;
	/*^block*/ id _messageSender;
	NSFileAccessNode* _itemLocation;

}
-(id)itemLocation;
-(void)setItemLocation:(id)arg1 ;
-(id)reactorID;
-(/*^block*/ id)messageSender;
-(id)initWithClient:(id)arg1 reactorID:(id)arg2 messageSender:(/*^block*/ id)arg3 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)forwardUsingMessageSender:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)client;
-(void)finalize;
@end

