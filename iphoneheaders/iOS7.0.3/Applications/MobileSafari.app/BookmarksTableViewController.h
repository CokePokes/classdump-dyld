/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/PopoverSizingTableViewController.h>
#import <MobileSafari/BookmarksPanelStateRestoring.h>

@protocol BookmarksTableViewControllerDelegate;
@class NSString, WebBookmarkCollection, WebBookmarkList, WebBookmark, ;

@interface BookmarksTableViewController : PopoverSizingTableViewController <BookmarksPanelStateRestoring> {

	WebBookmarkCollection* _collection;
	WebBookmarkList* _bookmarkList;
	WebBookmark* _favoritesFolder;
	unsigned _skipOffset;
	float _restoredScrollPosition;
	BOOL _useTransparentCells;
	WebBookmark* _folder;
	<BookmarksTableViewControllerDelegate>* _delegate;

}

@property (nonatomic,readonly) unsigned folderID; 
@property (nonatomic,retain) WebBookmark * folder;                                           //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic) <BookmarksTableViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * collectionType; 
-(id)currentStateDictionary;
-(BOOL)restoreStateWithDictionary:(id)arg1 ;
-(float)currentScrollPosition;
-(void)restoreScrollPosition:(float)arg1 ;
-(id)collectionType;
-(void)reloadBookmarks;
-(id)initWithFolder:(id)arg1 inCollection:(id)arg2 skipOffset:(unsigned)arg3 ;
-(void)_recreateBookmarkLists;
-(BOOL)_inRootFolder;
-(id)bookmarksNavigationController;
-(id)bookmarksTableViewCellWithReuseIdentifier:(id)arg1 ;
-(id)_tintedImageNamed:(id)arg1 ;
-(id)_grayedOutFavoriteFolderIcon;
-(id)_collectionForRowAtIndexPath:(id)arg1 ;
-(id)_grayedOutHistoryFolderIcon;
-(id)_bookmarkAtIndexPath:(id)arg1 ;
-(id)_tableViewCellForBookmark:(id)arg1 ;
-(void)_pushInfoViewControllerForBookmark:(id)arg1 ;
-(id)initWithFolder:(id)arg1 inCollection:(id)arg2 ;
-(void)_updateTableViewCellsTextStyleForEditing:(BOOL)arg1 ;
-(id)selectedBookmarks;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)delegate;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)setFolder:(id)arg1 ;
-(id)folder;
-(unsigned)folderID;
@end

