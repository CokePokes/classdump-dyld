/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ExFAT.framework/ExFAT
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSDiscardableContent.h>

@interface UserFSBuffer : NSObject <NSDiscardableContent> {

	unsigned long _allocatedSize;
	int _fd;
	unsigned _busyCount;
	BOOL _dirty;
	unsigned long _length;
	void* _buffer;
	unsigned long long _offset;

}

@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long length;                   //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) void* buffer;                           //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) BOOL dirty;                               //@synthesize dirty=_dirty - In the implementation block
-(unsigned long)length;
-(unsigned long long)offset;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(BOOL)dirty;
-(int)_readBlockContents;
-(int)_writeBlockContents;
-(id)initWithOffset:(unsigned long long)arg1 length:(unsigned long)arg2 fileDescriptor:(int)arg3 ;
-(int)resizeToLength:(unsigned long)arg1 ;
-(void*)buffer;
-(void)setDirty:(BOOL)arg1 ;
@end

