/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSDictionary, NSArray;

@interface VMULazySymbolOwner : NSObject {

	NSString* _name;
	NSDictionary* _signature;
	NSArray* _regions;
	unsigned _flags;

}
+(id)lazySymbolOwnerWithName:(id)arg1 signature:(id)arg2 regions:(id)arg3 flags:(unsigned)arg4 ;
-(BOOL)validate;
-(id)signature;
-(BOOL)containsAddress:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)name;
-(id)regions;
-(unsigned)flags;
-(id)architecture;
-(BOOL)isProtected;
-(void)slideToSegmentAddresses:(id)arg1 ;
-(BOOL)isLazy;
-(BOOL)overlapsAddressRange:(VMURange)arg1 ;
-(BOOL)hasRegionsForName:(id)arg1 ;
-(id)initWithName:(id)arg1 signature:(id)arg2 regions:(id)arg3 flags:(unsigned)arg4 ;
@end

