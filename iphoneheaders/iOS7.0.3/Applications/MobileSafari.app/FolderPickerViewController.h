/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/PopoverSizingTableViewController.h>

@protocol FolderPickerViewControllerDelegate;
@class , WebBookmarkCollection, NSSet, WebBookmark, NSArray;

@interface FolderPickerViewController : PopoverSizingTableViewController {

	<FolderPickerViewControllerDelegate>* _delegate;
	WebBookmarkCollection* _collection;
	NSSet* _hiddenFolderIdentifiers;
	WebBookmark* _parentBookmark;
	NSArray* _bookmarkFolders;
	int _selectedFolderIndex;

}
-(id)initWithDelegate:(id)arg1 bookmarkCollection:(id)arg2 ;
-(void)willShowForParentBookmark:(id)arg1 hiddenFolderIdentifiers:(id)arg2 ;
-(id)_bookmarkFolders;
-(id)_tintedFavoritesFolderIcon;
-(id)_tintedFolderIcon;
-(void)_bookmarksChanged;
-(float)minimumHeightInPopoverView;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)_cancel;
-(void)_bookmarksDidReload;
@end

