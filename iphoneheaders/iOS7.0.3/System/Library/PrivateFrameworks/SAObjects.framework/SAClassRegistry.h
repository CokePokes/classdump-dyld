/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SAClassRegistry : NSObject {

	NSMutableDictionary* _classesByAceClassNameByGroupIdentifier;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (getter=_classesByAceClassNameByGroupIdentifier,nonatomic,readonly) NSMutableDictionary * classesByAceClassNameByGroupIdentifier;              //@synthesize classesByAceClassNameByGroupIdentifier=_classesByAceClassNameByGroupIdentifier - In the implementation block
@property (getter=_queue,nonatomic,readonly) NSObject<OS_dispatch_queue> * queue;                                                                        //@synthesize queue=_queue - In the implementation block
+(id)sharedClassRegistry;
-(void)dealloc;
-(id)init;
-(id)_queue;
-(Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
-(void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
-(id)_classesByAceClassNameByGroupIdentifier;
-(void)_accessMutableStateWithBlock:(/*^block*/ id)arg1 ;
@end

