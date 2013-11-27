/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, IPodLibraryItem;

@interface AddItemToIPodLibraryOperation : ISOperation {

	NSNumber* _insertedItemPersistentIdentifier;
	IPodLibraryItem* _libraryItem;

}

@property (readonly) IPodLibraryItem * IPodLibraryItem; 
@property (readonly) NSNumber * insertedItemPersistentIdentifier; 
-(id)_libraryItem;
-(void)_setInsertedItemPersistentIdentifier:(long long)arg1 ;
-(id)initWithIPodLibraryItem:(id)arg1 ;
-(id)IPodLibraryItem;
-(id)insertedItemPersistentIdentifier;
-(void)dealloc;
-(void)run;
@end

