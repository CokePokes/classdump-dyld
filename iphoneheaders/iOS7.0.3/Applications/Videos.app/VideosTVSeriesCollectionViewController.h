/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Videos/Videos-Structs.h>
#import <Videos/VideosArtworkCollectionViewController.h>

@interface VideosTVSeriesCollectionViewController : VideosArtworkCollectionViewController {

	int* _unplayedCounts;
	BOOL _calculating;
	BOOL _needsRecalculation;
	BOOL _shouldReload;
	BOOL _visible;
	BOOL _recalculationWantedWhileNotVisible;

}
+(id)storeAction;
-(void)_calculateUnplayedCounts;
-(id)dataSourceForSeriesNamed:(id)arg1 ;
-(id)detailViewControllerWithDataSource:(id)arg1 ;
-(CGSize)iPhoneItemSize;
-(CGSize)iPadPortraitItemSize;
-(CGSize)iPadLandscapeItemSize;
-(int)collectionView:(id)arg1 artworkFormatForIndexPath:(id)arg2 ;
-(unsigned)unplayedCountForCollection:(id)arg1 ;
-(id)title;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)dataSourceDidInvalidate;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
@end

