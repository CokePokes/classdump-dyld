/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ProtocolBuffer/PBDataReader.h>

@interface SPSearchResultDeserializer : PBDataReader {

	unsigned _byteVector;
	BOOL _munmapAtDealloc;

}
-(void)dealloc;
-(BOOL)deserializeNextSection:(id*)arg1 ;
-(id)initWithMappedRegion:(unsigned)arg1 length:(unsigned)arg2 ;
-(id)initWithMallocRegion:(unsigned)arg1 length:(unsigned)arg2 ;
-(id)initWithSerializer:(id)arg1 ;
@end

