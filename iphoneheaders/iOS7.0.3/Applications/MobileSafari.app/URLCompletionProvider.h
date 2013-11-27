/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/CompletionProvider.h>

@protocol OS_dispatch_queue;
@class WebBookmarkCollection, NSMutableArray, NSString, URLCompletionDatabase, NSObject;

@interface URLCompletionProvider : CompletionProvider {

	WebBookmarkCollection* _collection;
	NSMutableArray* _completionList;
	unsigned _maxResults;
	NSString* _currentPrefix;
	BOOL _historyWasModified;
	opaque_pthread_mutex_t _prefixMutex;
	unsigned _urlCompletionBackgroundTaskIdentifier;
	URLCompletionDatabase* _completionDatabase;
	NSObject<OS_dispatch_queue>* _completionQueue;
	BOOL _providesTopHits;

}

@property (assign,nonatomic) BOOL providesTopHits;              //@synthesize providesTopHits=_providesTopHits - In the implementation block
-(void)setStringToComplete:(id)arg1 ;
-(unsigned)maximumCachedCompletionCount;
-(void)_historyDidChange:(id)arg1 ;
-(void)_endURLCompletionBackgroundTask;
-(void)_startURLCompletionBackgroundTask;
-(void)_doUpdateForPrefix:(id)arg1 ;
-(void)_rescheduleEndOfURLCompletionBackgroundTask;
-(id)initWithBookmarkCollection:(id)arg1 maxResults:(unsigned)arg2 searchableCollectionsMask:(int)arg3 ;
-(BOOL)providesTopHits;
-(void)setProvidesTopHits:(BOOL)arg1 ;
-(void)dealloc;
@end

