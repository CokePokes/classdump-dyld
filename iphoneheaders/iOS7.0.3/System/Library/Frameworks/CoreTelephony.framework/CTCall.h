/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@class NSString;

@interface CTCall : NSObject {

	NSString* _callState;
	NSString* _callID;

}

@property (nonatomic,copy) NSString * callState;              //@synthesize callState=_callState - In the implementation block
@property (nonatomic,copy) NSString * callID;                 //@synthesize callID=_callID - In the implementation block
+(id)callForCTCallRef:(CTCallRef)arg1 ;
-(id)callState;
-(void)setCallState:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)callID;
-(void)setCallID:(id)arg1 ;
@end

