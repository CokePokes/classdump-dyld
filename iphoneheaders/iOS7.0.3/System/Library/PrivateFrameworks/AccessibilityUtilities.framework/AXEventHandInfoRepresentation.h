/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray;

@interface AXEventHandInfoRepresentation : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _systemGesturePossible;
	unsigned char _swipe;
	unsigned short _initialFingerCount;
	unsigned short _currentFingerCount;
	unsigned _eventType;
	NSArray* _paths;
	unsigned _handIdentity;
	unsigned _handIndex;
	unsigned _handEventMask;
	CGPoint _handPosition;

}

@property (assign,nonatomic) unsigned eventType;                               //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) unsigned short initialFingerCount;                //@synthesize initialFingerCount=_initialFingerCount - In the implementation block
@property (assign,nonatomic) unsigned short currentFingerCount;                //@synthesize currentFingerCount=_currentFingerCount - In the implementation block
@property (nonatomic,retain) NSArray * paths;                                  //@synthesize paths=_paths - In the implementation block
@property (assign,nonatomic) unsigned char systemGesturePossible;              //@synthesize systemGesturePossible=_systemGesturePossible - In the implementation block
@property (assign,nonatomic) unsigned handIdentity;                            //@synthesize handIdentity=_handIdentity - In the implementation block
@property (assign,nonatomic) unsigned handIndex;                               //@synthesize handIndex=_handIndex - In the implementation block
@property (assign,nonatomic) CGPoint handPosition;                             //@synthesize handPosition=_handPosition - In the implementation block
@property (assign,nonatomic) unsigned handEventMask;                           //@synthesize handEventMask=_handEventMask - In the implementation block
@property (assign,nonatomic) unsigned char swipe;                              //@synthesize swipe=_swipe - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)representationWithHandInfo:(SCD_Struct_AX10*)arg1 ;
-(unsigned)eventType;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long)length;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)paths;
-(void)setInitialFingerCount:(unsigned short)arg1 ;
-(void)setCurrentFingerCount:(unsigned short)arg1 ;
-(void)setSwipe:(unsigned char)arg1 ;
-(void)setSystemGesturePossible:(unsigned char)arg1 ;
-(void)setPaths:(id)arg1 ;
-(unsigned short)initialFingerCount;
-(unsigned short)currentFingerCount;
-(unsigned char)swipe;
-(unsigned char)systemGesturePossible;
-(unsigned)handIdentity;
-(void)setHandIdentity:(unsigned)arg1 ;
-(CGPoint)handPosition;
-(void)setHandPosition:(CGPoint)arg1 ;
-(unsigned)handIndex;
-(void)setHandIndex:(unsigned)arg1 ;
-(unsigned)handEventMask;
-(void)setHandEventMask:(unsigned)arg1 ;
-(void)writeToHandInfo:(SCD_Struct_AX10*)arg1 ;
-(void)setEventType:(unsigned)arg1 ;
@end

