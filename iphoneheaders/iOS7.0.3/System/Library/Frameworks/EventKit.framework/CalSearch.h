/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CalSearchDataSink;
#import <EventKit/EventKit-Structs.h>
@class ;

@interface CalSearch : NSObject {

	CalDatabase* _database;
	CalFilterRef _filter;
	CFStringRef _searchString;
	int _seed;
	<CalSearchDataSink>* _dataSink;
	bool _dateToStartShowingResultsSentToDataSink;
	bool _moreResultsAvailable;
	CFArrayRef _partialResults;
	CFArrayRef _partialCachedOccurrences;
	CFArrayRef _partialCachedDays;
	CFArrayRef _partialCachedDaysIndexes;
	CFSetRef _matchedEventsSet;
	CFSetRef _matchedParticipantsSet;
	CFSetRef _matchedLocationsSet;
	bool _stopLoadingResults;
	opaque_pthread_mutex_t _dataSourceDeallocLock;
	bool _implementsCancellationCallback;

}
-(void)_startLoadingResults;
-(CalParticipantIdsSearchContext*)_createParticipantIdsSearchContext;
-(void)_getParticipantsSearchResults:(CalParticipantIdsSearchContext*)arg1 ;
-(void)_deleteParticipantIdsSearchContext:(CalParticipantIdsSearchContext*)arg1 ;
-(CalLocationIdsSearchContext*)_createLocationIdsSearchContext;
-(void)_getLocationSearchResults:(CalLocationIdsSearchContext*)arg1 ;
-(void)_deleteLocationIdsSearchContext:(CalLocationIdsSearchContext*)arg1 ;
-(CalEventIdsSearchContext*)_createEventIdsSearchContext;
-(void)_getAttendeesSearchResults:(CalEventIdsSearchContext*)arg1 ;
-(void)_getEventsSearchResults:(CalEventIdsSearchContext*)arg1 ;
-(void)_deleteEventIdsSearchContext:(CalEventIdsSearchContext*)arg1 ;
-(CalEventOccurrenceSearchContext*)_createSearchContext;
-(void)_getApplicationSearchResults:(CalEventOccurrenceSearchContext*)arg1 ;
-(void)_deleteSearchContext:(CalEventOccurrenceSearchContext*)arg1 ;
-(void)_addMatchedParticipantIds:(CFArrayRef)arg1 ;
-(void)_addMatchedLocationIds:(CFArrayRef)arg1 ;
-(void)_addMatchedEventIds:(CFArrayRef)arg1 ;
-(id)initWithDatabase:(CalDatabase*)arg1 filter:(CalFilterRef)arg2 dataSink:(id)arg3 ;
-(void)startSearching;
-(void)stopSearching;
-(bool)moreResultsAvailable;
-(int)seed;
-(void)dealloc;
@end

