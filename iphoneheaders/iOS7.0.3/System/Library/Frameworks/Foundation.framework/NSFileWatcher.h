/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Foundation/Foundation-Structs.h>
@class NSObject, NSURL, NSFileWatcherObservations, NSMutableDictionary, NSString;

@interface NSFileWatcher : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSURL* _url;
	/*^block*/ id _observer;
	BOOL _isWatching;
	NSObject<OS_dispatch_source>* _eventSource;
	unsigned long long _lastObservedEventID;
	FSEventStreamRef _eventStream;
	BOOL _eventsAreAboutDirectory;
	BOOL _isUnsettled;
	NSFileWatcherObservations* _itemObservations;
	NSMutableDictionary* _subitemObservationsByEventPath;
	NSURL* _fileReferenceURL;
	NSString* _formerPath;
	NSURL* _formerURL;

}
-(id)initWithQueue:(id)arg1 ;
-(void)setLastObservedEventID:(unsigned long long)arg1 ;
-(void)settle;
-(void)watchItem;
-(void)handleFSEventPath:(id)arg1 flags:(unsigned long)arg2 id:(unsigned long long)arg3 ;
-(void)unsettle;
-(void)dealloc;
-(void)start;
-(void)setURL:(id)arg1 ;
-(void)stop;
-(void)setObserver:(/*^block*/ id)arg1 ;
@end

