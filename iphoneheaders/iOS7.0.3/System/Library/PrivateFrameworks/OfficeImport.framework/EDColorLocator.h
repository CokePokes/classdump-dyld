/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class TSUColor;

@interface EDColorLocator : NSObject {

	unsigned mColorOffset;
	int mColorIndex;
	TSUColor* mColor;

}
-(void)dealloc;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(id)color;
-(void)setColor:(id)arg1 ;
-(int)colorIndex;
-(id)initWith:(id)arg1 index:(int)arg2 offset:(unsigned)arg3 ;
-(void)setColorIndex:(int)arg1 ;
@end

