/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Stocks/StockUpdaterDelegate.h>

@class NSMutableArray, NSMutableDictionary;

@interface StockUpdateManager : NSObject <StockUpdaterDelegate> {

	NSMutableArray* _updaters;
	BOOL _postingRemoteUpdateNotification;
	NSMutableArray* _activeUpdaters;
	NSMutableArray* _inactiveUpdaters;
	NSMutableDictionary* _cacheDurationForParts;

}
+(void)clearSharedManager;
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(BOOL)isLoading;
-(void)failWithError:(id)arg1 ;
-(BOOL)hadError;
-(id)availableStockUpdater;
-(void)updateStockComprehensive:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)updateAllStocksBasicWithCompletion:(/*^block*/ id)arg1 ;
-(void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(BOOL)arg3 ;
-(void)stockUpdater:(id)arg1 didFailWithError:(id)arg2 whileUpdatingStocks:(id)arg3 comprehensive:(BOOL)arg4 ;
-(void)stocksDidUpdateRemotely;
-(void)resetUpdaters;
-(double)cacheDurationForParts:(id)arg1 ;
-(void)setBasicDataCacheTimeInterval:(double)arg1 ;
-(void)updateStocksComprehensive:(id)arg1 ;
-(void)updateStockComprehensive:(id)arg1 ;
-(void)updateAllStocksBasic;
-(void).cxx_destruct;
@end

