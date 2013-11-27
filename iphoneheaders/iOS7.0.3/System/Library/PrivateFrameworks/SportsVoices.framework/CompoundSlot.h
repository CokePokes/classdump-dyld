/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsVoices/Slot.h>

@class SlotSequence;

@interface CompoundSlot : Slot {

	SlotSequence* _slots;

}

@property (readonly) SlotSequence * slots;              //@synthesize slots=_slots - In the implementation block
-(id)initFromPlist:(id)arg1 ;
-(id)slots;
-(BOOL)matches:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithArray:(id)arg1 ;
-(id)reversed;
@end

