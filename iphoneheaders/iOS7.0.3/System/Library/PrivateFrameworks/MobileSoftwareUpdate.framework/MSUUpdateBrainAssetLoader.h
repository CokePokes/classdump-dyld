/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ASAsset;

@interface MSUUpdateBrainAssetLoader : NSObject {

	ASAsset* _updateAsset;

}

@property (nonatomic,retain) ASAsset * updateAsset;              //@synthesize updateAsset=_updateAsset - In the implementation block
-(void)dealloc;
-(id)updateAsset;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/ id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(bool)purgeUpdateBrains:(id*)arg1 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(void)setUpdateAsset:(id)arg1 ;
-(BOOL)cancel:(id*)arg1 ;
-(id)initWithUpdateAsset:(id)arg1 ;
@end

