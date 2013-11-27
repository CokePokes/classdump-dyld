/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessoryUpdaterBundles/AppleDigitalAVAdapterUpdater.bundle/AppleDigitalAVAdapterUpdater
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileAssetUpdater/MobileAssetUpdater.h>

@class NSString, NSURL;

@interface AppleSTDP20XXUpdater : MobileAssetUpdater {

	BOOL _allowMissingDevice;
	unsigned char _firmwareVersionMajor;
	unsigned char _firmwareVersionMinor;
	NSString* _flashDriverFilename;
	NSString* _firmwareUpdateFilename;
	NSURL* _flashDriverURL;
	NSURL* _firmwareUpdateURL;
	BOOL _isLoadingFlasher;
	unsigned _flasherLength;
	unsigned _firmwareLength;
	/*^block*/ id _progressHandler;
	NSString* _firmewareUpdateFilename;

}

@property (readonly) BOOL allowMissingDevice;                                //@synthesize allowMissingDevice=_allowMissingDevice - In the implementation block
@property (nonatomic,retain) NSString * flashDriverFilename;                 //@synthesize flashDriverFilename=_flashDriverFilename - In the implementation block
@property (nonatomic,retain) NSString * firmwareUpdateFilename;              //@synthesize firmewareUpdateFilename=_firmewareUpdateFilename - In the implementation block
@property (nonatomic,retain) NSURL * flashDriverURL;                         //@synthesize flashDriverURL=_flashDriverURL - In the implementation block
@property (nonatomic,retain) NSURL * firmwareUpdateURL;                      //@synthesize firmwareUpdateURL=_firmwareUpdateURL - In the implementation block
-(id)initWithAssetType:(id)arg1 allowMissing:(BOOL)arg2 ;
-(id)flashDriverURL;
-(BOOL)allowMissingDevice;
-(int)readFirmwareVersion:(unsigned long)arg1 ;
-(void)setFlashDriverFilename:(id)arg1 ;
-(id)flashDriverFilename;
-(void)setFirmwareUpdateFilename:(id)arg1 ;
-(void)setFlashDriverURL:(id)arg1 ;
-(id)firmwareUpdateFilename;
-(void)setFirmwareUpdateURL:(id)arg1 ;
-(id)firmwareUpdateURL;
-(BOOL)shouldApplyFirmware;
-(id)updateFirmware:(/*^block*/ id)arg1 ;
-(id)loadFlasher:(/*^block*/ id)arg1 ;
-(void)progressUpdate:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)overrideQueryPredicateFromDict:(id)arg1 ;
-(id)queryPredicate;
-(id)assetWithMaxVersion:(id)arg1 ;
-(id)validateAssetAttributes:(id)arg1 ;
-(id)validateAsset;
@end

