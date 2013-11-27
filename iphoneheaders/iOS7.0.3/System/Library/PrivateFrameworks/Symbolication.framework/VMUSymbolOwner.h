/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol VMUMemory;
@class NSString, NSDictionary, , NSArray;

@interface VMUSymbolOwner : NSObject <NSCopying> {

	NSString* _name;
	NSDictionary* _signature;
	<VMUMemory>* _textMemory;
	NSArray* _regions;
	NSArray* _symbols;
	NSArray* _sourceInfos;
	unsigned _flags;
	unsigned _currentVersion;
	unsigned _compatibilityVersion;

}
+(id)symbolOwnerWithName:(id)arg1 signature:(id)arg2 textMemory:(id)arg3 regions:(id)arg4 symbols:(id)arg5 sourceInfos:(id)arg6 flags:(unsigned)arg7 currentVersion:(unsigned)arg8 compatibilityVersion:(unsigned)arg9 ;
-(BOOL)validate;
-(id)signature;
-(BOOL)containsAddress:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)size;
-(id)description;
-(id)path;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)name;
-(int)compare:(id)arg1 ;
-(id)symbols;
-(id)regions;
-(unsigned)flags;
-(unsigned)currentVersion;
-(id)architecture;
-(BOOL)isMachO;
-(id)symbolsForMangledName:(id)arg1 ;
-(id)sourceInfosInAddressRange:(VMURange)arg1 ;
-(unsigned)compatibilityVersion;
-(BOOL)isCommpage;
-(BOOL)isProtected;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
-(id)programTextForAddressRange:(VMURange)arg1 ;
-(id)sourceInfos;
-(void)slideToSegmentAddresses:(id)arg1 ;
-(id)symbolOwnerByAddingContentsOfOwner:(id)arg1 ;
-(id)regionForAddress:(unsigned long long)arg1 ;
-(BOOL)isLazy;
-(id)regionsForName:(id)arg1 ;
-(id)symbolForAddress:(unsigned long long)arg1 ;
-(id)symbolsForName:(id)arg1 ;
-(id)symbolsInAddressRange:(VMURange)arg1 ;
-(id)programTextForAddress:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 signature:(id)arg2 textMemory:(id)arg3 regions:(id)arg4 symbols:(id)arg5 sourceInfos:(id)arg6 flags:(unsigned)arg7 currentVersion:(unsigned)arg8 compatibilityVersion:(unsigned)arg9 ;
-(id)symbolForName:(id)arg1 ;
-(BOOL)isPEF;
-(BOOL)isAOut;
-(BOOL)isDylib;
-(BOOL)isDyld;
-(BOOL)isBundle;
-(BOOL)isDsym;
-(BOOL)isEqualToSymbolOwner:(id)arg1 ;
@end

