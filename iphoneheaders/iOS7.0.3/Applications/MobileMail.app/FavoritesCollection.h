/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, NSArray, NSString;

@interface FavoritesCollection : NSObject {

	unsigned _type;
	NSMutableArray* _items;
	NSArray* _visibleItems;
	BOOL _isEditing;
	BOOL _transient;

}

@property (assign,nonatomic) BOOL transient;                           //@synthesize transient=_transient - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                           //@synthesize isEditing=_isEditing - In the implementation block
@property (getter=doesSync,readonly) BOOL doesSync; 
@property (getter=hidesHeader,readonly) BOOL hidesHeader; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSArray * items;                        //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * visibleItems; 
@property (nonatomic,readonly) BOOL isOutboxCollection; 
+(id)mailboxesCollection;
+(id)accountsCollection;
+(id)outboxCollection;
+(id)accountMailboxesCollection;
+(id)displayOrder;
-(BOOL)isShowingSharedMailboxOfType:(unsigned)arg1 ;
-(BOOL)isShowingAllInboxes;
-(id)itemsOfType:(unsigned)arg1 ;
-(BOOL)isMailboxesCollection;
-(BOOL)isOutboxCollection;
-(BOOL)isAccountMailboxesCollection;
-(BOOL)hidesHeader;
-(id)initWithtype:(unsigned)arg1 ;
-(void)invalidateVisibleItems;
-(BOOL)addItem:(id)arg1 ordered:(BOOL)arg2 ;
-(int)indexForNewItem:(id)arg1 ;
-(id)itemWithSyncKey:(id)arg1 ;
-(BOOL)isAccountsCollection;
-(id)_displayNameForCollectionOfType:(unsigned)arg1 ;
-(void)prepareForWriting;
-(void)addOrUpdateItem:(id)arg1 replacedItem:(id*)arg2 ;
-(id)removeItemWithSyncKey:(id)arg1 ;
-(BOOL)doesSync;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)setTransient:(BOOL)arg1 ;
-(id)visibleItems;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)items;
-(void)setItems:(id)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)isVisible;
-(BOOL)addItem:(id)arg1 ;
-(id)removeItem:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)uniqueId;
-(id)displayName;
-(id)removeItemAtIndex:(int)arg1 ;
-(BOOL)transient;
@end

