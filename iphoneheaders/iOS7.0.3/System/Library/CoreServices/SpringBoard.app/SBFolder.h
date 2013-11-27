/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBIconIndexNode.h>
#import <SpringBoard/SBIconIndexMutableListObserver.h>
#import <SpringBoard/SBIconListModelObserver.h>

@class NSString, SBFolderIcon, NSMutableSet, NSMutableDictionary, NSHashTable, SBIconIndexMutableList;

@interface SBFolder : NSObject <SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver> {

	NSString* _displayName;
	NSString* _defaultDisplayName;
	BOOL _open;
	SBFolderIcon* _icon;
	BOOL _cancelable;
	NSMutableSet* _addedIcons;
	NSMutableSet* _removedIcons;
	NSMutableDictionary* _coalesceChangesRequests;
	NSHashTable* _nodeObservers;
	NSHashTable* _folderObservers;
	SBIconIndexMutableList* _lists;

}

@property (nonatomic,retain) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL isOpen;                                      //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) SBFolderIcon * icon;                              //@synthesize icon=_icon - In the implementation block
@property (assign,getter=isCancelable,nonatomic) BOOL cancelable;              //@synthesize cancelable=_cancelable - In the implementation block
+(unsigned)maxListCount;
-(BOOL)isNewsstandFolder;
-(id)visibleIcons;
-(BOOL)canAddIcon;
-(void)startCoalescingContentChangesWithRequestID:(id)arg1 ;
-(void)stopCoalescingContentChangesForRequestID:(id)arg1 ;
-(id)indexPathForIcon:(id)arg1 ;
-(id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id*)arg2 ;
-(id)iconAtIndexPath:(id)arg1 ;
-(id)listContainingLeafIconWithIdentifier:(id)arg1 ;
-(id)placeIcon:(id)arg1 atIndexPath:(id*)arg2 ;
-(id)performCascadingIconInsertion:(id)arg1 indexPath:(id)arg2 ;
-(void)removeIconAtIndexPath:(id)arg1 ;
-(void)compactIconsAndLists;
-(void)removeEmptyList:(id)arg1 ;
-(void)setCancelable:(BOOL)arg1 ;
-(id)nodeIdentifier;
-(id)indexPathForNodeIdentifier:(id)arg1 ;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(id)iconsOfClass:(Class)arg1 ;
-(void)setIsOpen:(BOOL)arg1 ;
-(id)leafIcons;
-(id)allIcons;
-(BOOL)matchesRepresentation:(id)arg1 ;
-(BOOL)resetWithRepresentation:(id)arg1 model:(id)arg2 leafIdentifiersAdded:(id)arg3 ;
-(void)purgeLists;
-(id)indexPathForIconWithIdentifier:(id)arg1 ;
-(BOOL)compactLists;
-(id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)arg1 ;
-(id)insertIcon:(id)arg1 atIndexPath:(id*)arg2 ;
-(BOOL)isIconStateDirty;
-(void)markIconStateClean;
-(void)addNodeObserver:(id)arg1 ;
-(void)addFolderObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(void)removeFolderObserver:(id)arg1 ;
-(void)purgeIconImages;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(unsigned)indexOfList:(id)arg1 ;
-(id)addEmptyList;
-(id)_listsForCompaction;
-(void)_removeLists:(id)arg1 ;
-(id)_createNewListWithIcon:(id)arg1 ;
-(void)_addList:(id)arg1 ;
-(Class)listModelClass;
-(id)performCascadingIconInsertion:(id)arg1 listIndex:(unsigned)arg2 iconIndex:(unsigned)arg3 ;
-(Class)listViewClass;
-(void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(BOOL)arg2 ;
-(BOOL)_addListsForRepresentation:(id)arg1 model:(id)arg2 leafIdentifiersAdded:(id)arg3 ;
-(void)_setDisplayNameFromRepresentation:(id)arg1 ;
-(BOOL)_isCoalescingContentChanges;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2 ;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(Class)controllerClass;
-(BOOL)shouldRemoveWhenEmpty;
-(BOOL)canRemoveIcons;
-(BOOL)canEditDisplayName;
-(id)folderIcons;
-(id)indexPathForIcon:(id)arg1 includingPlaceholders:(BOOL)arg2 ;
-(id)listContainingIcon:(id)arg1 ;
-(BOOL)isFull;
-(BOOL)isOpen;
-(void)dealloc;
-(id)init;
-(id)representation;
-(BOOL)isEmpty;
-(void)setIcon:(id)arg1 ;
-(id)displayName;
-(id)listAtIndex:(unsigned)arg1 ;
-(id)folderType;
-(id)addIcon:(id)arg1 ;
-(unsigned)listCount;
-(void)setDisplayName:(id)arg1 ;
-(id)lists;
-(BOOL)isCancelable;
-(id)icon;
@end

