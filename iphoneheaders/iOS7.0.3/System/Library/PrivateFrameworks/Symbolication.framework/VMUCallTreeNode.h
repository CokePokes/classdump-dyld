/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUCallTreeNode : NSObject {

	VMUCallTreeNode* _parent;
	NSString* _name;
	unsigned long long _address;
	unsigned _count;
	unsigned long long _numBytes;
	unsigned _numChildren;
	SCD_Union_VM2* _un;

}
+(id)rootForSamples:(id)arg1 symbolicator:(CSTypeRef)arg2 sampler:(id)arg3 options:(unsigned)arg4 ;
+(id)nodeWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
+(id)rootForSamples:(id)arg1 symbolicator:(CSTypeRef)arg2 ;
+(id)makeFakeRootForNode:(id)arg1 ;
+(id)rootForTraceData:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)name;
-(int)compare:(id)arg1 ;
-(void)setChildren:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(id)childAtIndex:(unsigned)arg1 ;
-(unsigned long long)address;
-(BOOL)isPseudo;
-(id)pseudoNodeTopOfStackChild;
-(id)sortedChildrenWithPseudoNode;
-(id)largestTopOfStackPath;
-(id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
-(unsigned)numChildren;
-(void)setNumChildren:(unsigned)arg1 ;
-(unsigned long long)numBytes;
-(void)getBrowserName:(id)arg1 ;
-(id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 nodeSearchType:(int)arg3 isLeafNode:(BOOL)arg4 ;
-(int)compareSizeAndCount:(id)arg1 ;
-(void)parseNameIntoSymbol:(id*)arg1 library:(id*)arg2 loadAddress:(unsigned long long*)arg3 offset:(unsigned long long*)arg4 address:(unsigned long long*)arg5 suffix:(id*)arg6 ;
-(id)pseudoName;
-(id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2 ;
-(void)countFunctionOccurrencesInTree:(id)arg1 ;
-(id)fullOutputWithThreshold:(unsigned)arg1 showPseudoNodes:(BOOL)arg2 ;
-(BOOL)callTreeHasBranches;
-(id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1 showPseudoNodes:(BOOL)arg2 ;
-(id)filterOutSymbols:(id)arg1 required:(id)arg2 ;
-(id)chargeLibrariesInSet:(id)arg1 toCaller:(id)arg2 parentLibrary:(id)arg3 ;
-(id)pruneCount:(unsigned)arg1 ;
-(id)pruneMallocSize:(unsigned long long)arg1 ;
-(id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 ;
-(void)addTraceEvent:(id)arg1 forTraceData:(id)arg2 ;
-(id)allChildren;
-(id)browserName;
-(BOOL)symbolNameIsUnknown;
-(BOOL)isMallocBlockContentNode;
-(id)nameWithoutOffset;
-(id)nameWithStringsForSymbol:(id)arg1 library:(id)arg2 loadAddress:(id)arg3 offset:(id)arg4 address:(id)arg5 suffix:(id)arg6 ;
-(int)comparePuttingMainThreadFirst:(id)arg1 ;
-(id)fullOutputWithThreshold:(unsigned)arg1 ;
-(id)stringFromCallTreeIndentIfNoBranches:(BOOL)arg1 ;
-(id)invertedNode;
-(id)filterOutSymbols:(id)arg1 ;
-(id)chargeLibrariesToCallers:(id)arg1 keepBoundaries:(BOOL)arg2 ;
-(id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)arg1 ;
-(id)parent;
@end

