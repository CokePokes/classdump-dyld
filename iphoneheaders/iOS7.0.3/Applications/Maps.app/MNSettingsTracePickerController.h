/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/AuxiliaryDebugViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>

@protocol DebugViewControllerDelegate;
@class , NSArray, NSString, UIActionSheet;

@interface MNSettingsTracePickerController : AuxiliaryDebugViewController <UIActionSheetDelegate, MFMailComposeViewControllerDelegate> {

	<DebugViewControllerDelegate>* _delegate;
	NSArray* _myFiles;
	NSString* _selectedTracePath;
	NSString* _selectedTraceName;
	UIActionSheet* _myFileSheet;
	UIActionSheet* _deleteFileSheet;
	BOOL _showingPlayButton;
	NSArray* _myFileSheetTrackPickerOptions;
	UIActionSheet* deleteFileSheet;

}

@property (assign,nonatomic) <DebugViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIActionSheet * deleteFileSheet; 
@property (nonatomic,retain) UIActionSheet * myFileSheet;                           //@synthesize myFileSheet=_myFileSheet - In the implementation block
@property (nonatomic,retain) NSArray * myFileSheetTracePickerOptions;               //@synthesize myFileSheetTrackPickerOptions=_myFileSheetTrackPickerOptions - In the implementation block
@property (nonatomic,retain) NSArray * myFiles;                                     //@synthesize myFiles=_myFiles - In the implementation block
@property (nonatomic,retain) NSString * selectedTracePath;                          //@synthesize selectedTracePath=_selectedTracePath - In the implementation block
@property (nonatomic,retain) NSString * selectedTraceName;                          //@synthesize selectedTraceName=_selectedTraceName - In the implementation block
+(id)navigationDestinationTitle;
-(void)setDeleteFileSheet:(id)arg1 ;
-(void)setMyFileSheet:(id)arg1 ;
-(void)setMyFileSheetTracePickerOptions:(id)arg1 ;
-(void)setMyFiles:(id)arg1 ;
-(void)setSelectedTracePath:(id)arg1 ;
-(void)setSelectedTraceName:(id)arg1 ;
-(void)_reloadTraces;
-(void)_updateTracePickerOptions;
-(Class)_mfMailComposeViewController;
-(id)myFileSheetTracePickerOptions;
-(id)myFileSheet;
-(id)deleteFileSheet;
-(id)myFiles;
-(id)selectedTracePath;
-(id)selectedTraceName;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end

