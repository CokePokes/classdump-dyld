/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSCondition;

@interface _ThreadSafeContainer : NSObject {

	NSCondition* _condition;
	id _value;

}

@property (retain) id value;              //@synthesize value=_value - In the implementation block
+(id)container;
-(void)dealloc;
-(id)init;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)signal;
-(BOOL)waitUntilDate:(id)arg1 ;
-(void)wait;
@end

