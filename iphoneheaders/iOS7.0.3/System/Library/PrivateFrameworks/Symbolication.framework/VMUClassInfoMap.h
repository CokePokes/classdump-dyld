/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@interface VMUClassInfoMap : NSObject <NSCoding> {

	void* _cppMap;

}
+(void)initialize;
+(id)infoMap;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(id)classInfoForAddress:(unsigned long long)arg1 ;
-(void)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2 ;
-(void)enumerateWithBlock:(/*^block*/ id)arg1 ;
-(void)addClassInfosFromMap:(id)arg1 ;
@end

