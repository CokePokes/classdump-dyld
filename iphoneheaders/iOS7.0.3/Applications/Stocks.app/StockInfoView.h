/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class Stock, UILabel, LoadingLabel, StockMetadataGridView;

@interface StockInfoView : UIView {

	Stock* _stock;
	UILabel* _titleLabel;
	LoadingLabel* _loadingLabel;
	StockMetadataGridView* _gridView;
	BOOL _pauseUpdates;

}

@property (nonatomic,retain) Stock * stock;              //@synthesize stock=_stock - In the implementation block
-(void)setUpdatesPaused:(BOOL)arg1 ;
-(void)_stockWillBeRemoved:(id)arg1 ;
-(void)_metadataDidUpdate;
-(void)_redrawGridView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setStock:(id)arg1 ;
-(id)stock;
-(void).cxx_destruct;
@end

