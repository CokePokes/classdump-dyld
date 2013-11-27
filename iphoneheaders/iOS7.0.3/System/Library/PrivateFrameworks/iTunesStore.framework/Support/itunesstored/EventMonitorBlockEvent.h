/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/EventMonitorEvent.h>
#import <CoreFoundation/NSCopying.h>

@interface EventMonitorBlockEvent : EventMonitorEvent <NSCopying> {

	/*^block*/ id _eventBlock;
	/*^block*/ id _testBlock;

}

@property (nonatomic,copy) id eventBlock;              //@synthesize eventBlock=_eventBlock - In the implementation block
@property (nonatomic,copy) id testBlock;               //@synthesize testBlock=_testBlock - In the implementation block
-(BOOL)hasOccurred;
-(/*^block*/ id)eventBlock;
-(void)setEventBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)testBlock;
-(void)setTestBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)performAction;
@end

