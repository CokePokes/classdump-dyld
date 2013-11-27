/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUCallTreeNode.h>

@class VMUSampler, NSHashTable, NSMapTable, NSString, NSArray;

@interface VMUCallTreeRoot : VMUCallTreeNode {

	CSTypeRef _symbolicator;
	VMUSampler* _sampler;
	unsigned _options;
	NSHashTable* _uniqueNodeNames;
	NSMapTable* _addressToSymbolNameMap;
	NSMapTable* _addressToLeafSymbolNameMap;
	NSMapTable* _threadPortToNameMap;
	NSMapTable* _dispatchQueueSerialNumToNameMap;
	NSString* _binaryImagesDescription;
	NSArray* _binaryImages;

}
-(void)dealloc;
-(id)initWithSymbolicator:(CSTypeRef)arg1 sampler:(id)arg2 options:(unsigned)arg3 ;
-(id)addBacktrace:(id)arg1 ;
-(id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg1 ;
-(void)allBacktracesHaveBeenAdded;
-(id)threadDescriptionStringForBacktrace:(id)arg1 returnedAddress:(unsigned long long*)arg2 ;
-(id)descriptionStringForAddress:(unsigned long long)arg1 atTime:(unsigned long long)arg2 leafFrame:(BOOL)arg3 startOfRecursion:(BOOL)arg4 ;
-(id)addBacktrace:(id)arg1 count:(unsigned)arg2 numBytes:(unsigned long long)arg3 ;
-(void)addChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5 ;
-(id)initWithCallGraphFile:(id)arg1 fileHeader:(id*)arg2 topFunctionsList:(id*)arg3 binaryImagesList:(id*)arg4 ;
@end

