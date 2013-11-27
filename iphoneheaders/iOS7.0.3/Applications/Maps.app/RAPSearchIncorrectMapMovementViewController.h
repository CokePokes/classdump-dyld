/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Maps/ReportAProblemReporter.h>

@protocol ReportAProblemReporter;
@class UITextView, NSString, UIViewController, ReportAProblemNavigationController;

@interface RAPSearchIncorrectMapMovementViewController : UITableViewController <UITextViewDelegate, ReportAProblemReporter> {

	int _correctionKind;
	unsigned _selectedMovementType;
	BOOL _showsDidNotMoveLocationPicker;
	BOOL _shouldShowKeyboardForDidNotMoveLocationPicker;
	UITextView* _textView;
	NSString* _pickedLocation;
	UIViewController<ReportAProblemReporter>* _iCloudViewController;

}

@property (nonatomic,copy) NSString * pickedLocation;                                                  //@synthesize pickedLocation=_pickedLocation - In the implementation block
@property (nonatomic,readonly) ReportAProblemNavigationController * navigationController; 
-(void)populateRPProblem:(id)arg1 request:(id)arg2 ;
-(id)initWithCorrectionKind:(int)arg1 ;
-(void)_updateForNewSelectedMovementType;
-(void)_send;
-(id)pickedLocation;
-(void)setPickedLocation:(id)arg1 ;
-(void)_updateSendButton;
-(id)_titleForDidNotMoveCell;
-(BOOL)_isLocationPickerAtIndexPath:(id)arg1 ;
-(id)_indexPathForLocationPicker;
-(id)_indexPathForDidNotMoveCell;
-(void)dealloc;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)navigationController;
-(void)viewDidLoad;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)_cancel;
@end

