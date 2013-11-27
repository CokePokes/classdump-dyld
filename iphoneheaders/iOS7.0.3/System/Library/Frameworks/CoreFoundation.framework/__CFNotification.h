/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSNotification.h>
#import <CoreFoundation/NSCopying.h>

@interface __CFNotification : NSNotification <NSCopying> {

	id _name;
	id _object;
	id _userInfo;
	BOOL _fouSemantics;
	BOOL _dyingObject;

}
-(id)initWithName:(CFStringRef)arg1 object:(const void*)arg2 userInfo:(CFDictionaryRef)arg3 foundation:(BOOL)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)userInfo;
-(id)name;
-(id)object;
-(void)finalize;
@end

