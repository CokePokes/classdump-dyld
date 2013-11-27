/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPStorage, NSCharacterSet, NSMutableArray;

@interface TSWPStorageIterator : NSObject {

	TSWPStorage* _storage;
	NSCharacterSet* _markers;
	unsigned _charIndex;
	unsigned _startCharIndex;
	NSMutableArray* _rangeProviders;
	NSMutableArray* _locationProviders;
	NSMutableArray* _pendingEvents;
	BOOL _sendEventsForNilObjects;
	BOOL _lastEventWasMarker;

}

@property (nonatomic,retain) NSCharacterSet * markers;              //@synthesize markers=_markers - In the implementation block
-(id)initWithStorage:(id)arg1 ;
-(void)addRangeProvider:(id)arg1 ;
-(void)p_emitPendingCharactersAndEvent:(id)arg1 ;
-(void)p_emitEventWithType:(int)arg1 provider:(id)arg2 range:(NSRange)arg3 object:(id)arg4 ;
-(void)p_emitEventForMarkerCharacter:(unsigned short)arg1 atIndex:(unsigned)arg2 ;
-(void)p_forceRangeEndForProvider:(id)arg1 providerIndex:(unsigned)arg2 atCharIndex:(unsigned)arg3 ;
-(void)addAttributeRangeProvider:(int)arg1 ;
-(void)addLocationProvider:(id)arg1 ;
-(id)nextEvent;
-(id)markers;
-(void)setMarkers:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end

