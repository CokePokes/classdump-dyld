/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/filecoordinationd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <Foundation/NSProgressRegistrar.h>

@protocol NSProgressRegistrar
@required
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(BOOL)arg4;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5;
-(oneway void)removePublisherForID:(id)arg1;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4;
-(oneway void)removeSubscriberForID:(id)arg1;
@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSFileAccessNode;

@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar> {

	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _publishersByID;
	NSMutableDictionary* _subscribersByID;
	NSFileAccessNode* _rootFileAccessNode;

}
-(id)initWithQueue:(id)arg1 rootFileAccessNode:(id)arg2 ;
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(BOOL)arg4 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 ;
-(oneway void)removePublisherForID:(id)arg1 ;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 ;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 ;
-(oneway void)removeSubscriberForID:(id)arg1 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)finalize;
@end

