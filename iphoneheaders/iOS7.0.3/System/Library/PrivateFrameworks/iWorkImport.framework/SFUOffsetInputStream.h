/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/SFUInputStream.h>

@protocol SFUInputStream;
@class ;

@interface SFUOffsetInputStream : NSObject <SFUInputStream> {

	<SFUInputStream>* mInputStream;
	long long mInitialOffset;

}
-(void)dealloc;
-(long long)offset;
-(void)close;
-(BOOL)canSeek;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initWithInputStream:(id)arg1 initialOffset:(long long)arg2 ;
-(id)initWithInputStream:(id)arg1 ;
@end

