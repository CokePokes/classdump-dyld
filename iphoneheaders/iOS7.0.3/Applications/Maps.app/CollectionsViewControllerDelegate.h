/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CollectionsViewControllerDelegate <CollectionsTableViewControllerDelegate>
@optional
-(void)collectionsViewControllerDidReceiveMemoryWarning:(id)arg1;
-(void)closeCollectionsViewController:(id)arg1;
-(id)collectionsPopoverController;

@required
-(void)collectionsViewController:(id)arg1 choseHistoryItem:(id)arg2;
-(void)collectionsViewController:(id)arg1 choseBookmark:(id)arg2;
-(void)collectionsViewController:(id)arg1 choseAddress:(id)arg2;
@end

