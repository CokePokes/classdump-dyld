/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSInputStream.h>

@class SLRequestMultiPart, NSData;

@interface SLRequestMultiPartInputStream : NSInputStream {

	SLRequestMultiPart* _multiPart;
	unsigned _streamStatus;
	unsigned _bytesReadInState;
	unsigned _totalBytesRead;
	NSData* _srcData;
	int _currentState;

}
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(BOOL)hasBytesAvailable;
-(unsigned)readStateSourceData:(id)arg1 toBuffer:(char*)arg2 offset:(unsigned)arg3 maxLength:(unsigned)arg4 ;
-(int)currentStateRead:(char*)arg1 maxLength:(unsigned)arg2 ;
-(id)initWithMultiPart:(id)arg1 ;
-(unsigned)length;
-(void)close;
-(void)transitionState;
-(void).cxx_destruct;
-(void)open;
@end

