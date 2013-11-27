/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol RefinementSelectionDelegate;
@class SearchInfo, NSDictionary, ;

@interface RefinementTableViewController : UITableViewController {

	SearchInfo* _refinementSearchInfo;
	NSDictionary* _textAttributes;
	<RefinementSelectionDelegate>* _delegate;

}

@property (nonatomic,retain) SearchInfo * refinementSearchInfo;                     //@synthesize refinementSearchInfo=_refinementSearchInfo - In the implementation block
@property (assign,nonatomic) <RefinementSelectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setRefinementSearchInfo:(id)arg1 ;
-(id)refinementSearchInfo;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(id)initWithStyle:(int)arg1 ;
-(CGSize)preferredContentSize;
@end

