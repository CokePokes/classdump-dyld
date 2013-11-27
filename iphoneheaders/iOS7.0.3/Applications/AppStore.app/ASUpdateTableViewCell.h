/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIItemTableViewCell.h>

@class ASUpdateCellLayout;

@interface ASUpdateTableViewCell : SKUIItemTableViewCell {

	BOOL _isIPad;
	ASUpdateCellLayout* _layout;

}

@property (nonatomic,readonly) ASUpdateCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(void)configureForItem:(id)arg1 rowIndex:(int)arg2 textLayout:(id)arg3 numberOfLines:(int)arg4 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)layout;
-(void)configureForItem:(id)arg1 rowIndex:(int)arg2 ;
-(void).cxx_destruct;
@end

