/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSKCommand.h>

@class KNSlide, KNBuildChunk;

@interface KNCommandSlideInsertBuildChunk : TSKCommand {

	KNSlide* mSlide;
	KNBuildChunk* mBuildChunk;
	unsigned mIndex;

}

@property (nonatomic,readonly) KNSlide * slide; 
@property (nonatomic,readonly) KNBuildChunk * buildChunk; 
@property (nonatomic,readonly) unsigned index; 
-(id)buildChunk;
-(id)initWithSlide:(id)arg1 buildChunk:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(unsigned)index;
-(id)slide;
-(BOOL)process;
@end

