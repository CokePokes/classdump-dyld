/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSMutableArray, NSArray;

@interface SUAggregateDataSource : SUTableDataSource {

	NSMutableArray* _headerViews;
	NSMutableArray* _sources;
	int _tableViewStyle;

}

@property (assign,nonatomic) int tableViewStyle;               //@synthesize tableViewStyle=_tableViewStyle - In the implementation block
@property (nonatomic,readonly) NSArray * sources;              //@synthesize sources=_sources - In the implementation block
-(id)sources;
-(BOOL)canSelectIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(int)numberOfRowsInSection:(int)arg1 ;
-(int)numberOfSections;
-(void)setTableViewStyle:(int)arg1 ;
-(id)headerViewForSection:(int)arg1 ;
-(int)tableViewStyle;
-(void)setCellReuseSource:(id)arg1 ;
-(BOOL)deleteIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
-(BOOL)canDoubleTapIndexPath:(id)arg1 ;
-(BOOL)canDeleteIndexPath:(id)arg1 ;
-(float)cellHeightForIndexPath:(id)arg1 ;
-(void)reloadCellContexts;
-(int)numberOfColumnsInSection:(int)arg1 ;
-(int)_localIndexForSectionIndex:(int)arg1 ;
-(id)dataSourceForIndexPath:(id)arg1 ;
-(void)addDataSource:(id)arg1 withHeaderView:(id)arg2 ;
-(id)indexPathForRowIndex:(unsigned)arg1 inSectionIndex:(unsigned)arg2 ;
@end

