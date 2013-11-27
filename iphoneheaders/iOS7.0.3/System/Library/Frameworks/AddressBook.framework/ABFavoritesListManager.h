/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AddressBook/AddressBook-Structs.h>
@class NSMutableArray;

@interface ABFavoritesListManager : NSObject {

	void* _addressBook;
	NSMutableArray* _list;
	CFDictionaryRef _uidToEntry;
	struct {
		unsigned dirty : 1;
		unsigned postCount : 1;
		unsigned needsReload : 1;
		unsigned unused : 29;
	}  _flags;

}
+(id)sharedInstanceWithAddressBook:(void*)arg1 ;
+(id)sharedInstance;
-(id)initWithAddressBook:(void*)arg1 ;
-(BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2 ;
-(void)_addEntryToMap:(id)arg1 ;
-(void)recacheIdentitiesSoon;
-(void)_loadListWithAddressBook:(void*)arg1 ;
-(void)_entryIdentityChanged:(id)arg1 ;
-(void)_loadList;
-(id)entriesForPeople:(id)arg1 ;
-(BOOL)_isValueForEntry:(id)arg1 equalToValue:(id)arg2 ;
-(id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 identifier:(int)arg4 value:(id)arg5 label:(id)arg6 ;
-(id)entriesForPerson:(void*)arg1 ;
-(id)entryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)entryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(BOOL)isFull;
-(void)addEntry:(id)arg1 ;
-(void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2 ;
-(void)_scheduleSave;
-(BOOL)_writeFavoritesToFile:(id)arg1 ;
-(void)_delayedLookup;
-(id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 value:(id)arg4 label:(id)arg5 ;
-(BOOL)containsEntryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(BOOL)containsEntryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(BOOL)addEntryForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3 ;
-(void)saveImmediately;
-(void)_listChangedExternally;
-(void)removeEntryAtIndex:(int)arg1 ;
-(void)moveEntryAtIndex:(int)arg1 toIndex:(int)arg2 ;
-(void)removeAllEntries;
-(void)save;
-(void)dealloc;
-(void)_postChangeNotification;
-(id)entries;
@end

