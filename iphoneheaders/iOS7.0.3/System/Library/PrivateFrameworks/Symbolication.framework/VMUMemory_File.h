/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUMemory_Base.h>
#import <Symbolication/VMUMemory.h>

@class NSDate, NSString, VMUArchitecture, NSMutableDictionary;

@interface VMUMemory_File : VMUMemory_Base <VMUMemory> {

	char* _mappedAddress;
	unsigned long _mappedSize;
	NSDate* _lastModifiedTimestamp;
	VMURange _addressRange;
	VMURange _fileRange;
	NSString* _path;
	VMUArchitecture* _architecture;
	NSMutableDictionary* _sharedCacheMap;

}
+(id)headerWithPath:(id)arg1 ;
+(id)memoryWithPath:(id)arg1 ;
+(id)headerFromSharedCacheWithPath:(id)arg1 ;
+(id)memoryWithPath:(id)arg1 fileRange:(VMURange)arg2 mapToAddress:(unsigned long long)arg3 architecture:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(id)view;
-(id)path;
-(BOOL)map;
-(VMURange)addressRange;
-(id)architecture;
-(id)memoryFromSubRange:(VMURange)arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3 ;
-(BOOL)isContiguous;
-(id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2 ;
-(id)swappedView;
-(id)lastModifiedTimestamp;
-(id)initWithPath:(id)arg1 fileRange:(VMURange)arg2 mapToAddress:(unsigned long long)arg3 architecture:(id)arg4 ;
-(void)buildSharedCacheMap;
-(unsigned long long)sharedCacheHeaderOffsetForPath:(id)arg1 ;
-(void)finalize;
@end

