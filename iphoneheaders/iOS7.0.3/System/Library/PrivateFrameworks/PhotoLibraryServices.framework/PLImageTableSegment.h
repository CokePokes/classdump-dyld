/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PLImageTable;

@interface PLImageTableSegment : NSObject {

	PLImageTable* _imageTable;
	unsigned long _index;
	void* _ptr;
	unsigned long _length;
	BOOL _dying;

}
-(oneway void)release;
-(void)dealloc;
-(void*)bytes;
-(id)initWithImageTable:(id)arg1 index:(unsigned long)arg2 length:(unsigned long)arg3 idealAddress:(void*)arg4 ;
-(id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long)arg3 ;
@end

