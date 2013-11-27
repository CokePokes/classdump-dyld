/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class NSMutableArray, SKUIProductPageItem, SKUIColorScheme;

@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection {

	NSMutableArray* _actions;
	SKUIProductPageItem* _item;
	NSMutableArray* _titles;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(int)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void).cxx_destruct;
@end

