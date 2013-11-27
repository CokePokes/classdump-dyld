/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSNumber;

@interface CoreDAVSRVResourceRecord : NSObject {

	NSString* _serviceString;
	NSNumber* _priority;
	NSNumber* _weight;
	NSNumber* _port;
	NSString* _target;

}

@property (retain) NSString * serviceString;              //@synthesize serviceString=_serviceString - In the implementation block
@property (retain) NSNumber * priority;                   //@synthesize priority=_priority - In the implementation block
@property (retain) NSNumber * weight;                     //@synthesize weight=_weight - In the implementation block
@property (retain) NSNumber * port;                       //@synthesize port=_port - In the implementation block
@property (retain) NSString * target;                     //@synthesize target=_target - In the implementation block
-(void)setPort:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)priority;
-(void)setPriority:(id)arg1 ;
-(id)weight;
-(void)setWeight:(id)arg1 ;
-(id)serviceString;
-(void)setServiceString:(id)arg1 ;
-(id)port;
@end

