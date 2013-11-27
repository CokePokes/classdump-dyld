/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface SagaUpdatePlaylistOperation : CloudLibraryOperation {

	unsigned _databaseRevision;
	NSArray* _itemSagaIDs;
	unsigned long long _playlistSagaID;

}

@property (nonatomic,readonly) unsigned databaseRevision;              //@synthesize databaseRevision=_databaseRevision - In the implementation block
-(id)newPropertyListRepresentation;
-(id)initWithPlaylistSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 ;
-(void)main;
-(unsigned)databaseRevision;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(void).cxx_destruct;
@end

