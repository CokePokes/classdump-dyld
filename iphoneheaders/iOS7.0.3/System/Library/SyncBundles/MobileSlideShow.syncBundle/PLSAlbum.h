/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSlideShow/PLSItem.h>

@class NSString, NSArray, NSNumber;

@interface PLSAlbum : PLSItem {

	NSString* _name;
	NSArray* _assetUUIDs;
	NSString* _parentUUID;
	NSNumber* _albumSubclass;
	NSNumber* _albumKeyAssetFaceIndex;
	NSString* _keyAssetUUID;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * assetUUIDs;                           //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (nonatomic,retain) NSString * parentUUID;                          //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,retain) NSNumber * albumSubclass;                       //@synthesize albumSubclass=_albumSubclass - In the implementation block
@property (nonatomic,retain) NSNumber * albumKeyAssetFaceIndex;              //@synthesize albumKeyAssetFaceIndex=_albumKeyAssetFaceIndex - In the implementation block
@property (nonatomic,retain) NSString * keyAssetUUID;                        //@synthesize keyAssetUUID=_keyAssetUUID - In the implementation block
+(id)albumWithUUID:(id)arg1 ;
+(id)album;
-(BOOL)isEqualToAlbum:(id)arg1 ;
-(id)keyAssetUUID;
-(id)initFromPropertyList:(id)arg1 ;
-(void)setAlbumSubclass:(id)arg1 ;
-(void)setAlbumKeyAssetFaceIndex:(id)arg1 ;
-(void)setKeyAssetUUID:(id)arg1 ;
-(id)albumKeyAssetFaceIndex;
-(void)setParentUUID:(id)arg1 ;
-(id)parentUUID;
-(id)albumSubclass;
-(id)_itemType;
-(id)initWithUUID:(id)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)assetUUIDs;
-(void)setAssetUUIDs:(id)arg1 ;
@end

