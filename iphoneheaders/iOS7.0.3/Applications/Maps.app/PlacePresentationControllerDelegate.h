/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PlacePresentationControllerDelegate <NSObject>
@required
-(void)presentationController:(id)arg1 handleReportAProblemWithSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 showDirctionsToSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 showDirectionsFromSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 showTransitDirectionsToSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 removeCustomSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 addBookmarkForSearchResult:(id)arg2 title:(id)arg3;
-(void)presentationController:(id)arg1 wasDismissedForSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 completedActivityOfType:(id)arg2 forSearchResult:(id)arg3;
-(void)presentationController:(id)arg1 searchForAddress:(id)arg2;
-(BOOL)presentationController:(id)arg1 shouldShowDirectionsForSearchResult:(id)arg2;
-(BOOL)presentationController:(id)arg1 shouldShowReportAProblemForSearchResult:(id)arg2;
-(void)presentationController:(id)arg1 didSelectDisplayedAddressForSearchResult:(id)arg2;
@end

