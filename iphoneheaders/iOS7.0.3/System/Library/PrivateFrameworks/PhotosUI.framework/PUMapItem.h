/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol NSCopying;
@class NSObject, CLLocation, NSDate;

@interface PUMapItem : NSObject {

	NSObject<NSCopying>* _itemId;
	CLLocation* _location;
	NSDate* _dateCreated;

}

@property (nonatomic,copy) NSObject<NSCopying> * itemId;              //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,retain) CLLocation * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSDate * dateCreated;                      //@synthesize dateCreated=_dateCreated - In the implementation block
+(id)stringForItemId:(id)arg1 ;
+(/*^block*/ id)mapItemSortingComparatorNewestToOldest;
+(/*^block*/ id)mapItemSortingComparatorOldestToNewest;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)compare:(id)arg1 ;
-(id)location;
-(id)thumbnailImage;
-(void)setDateCreated:(id)arg1 ;
-(id)dateCreated;
-(id)itemId;
-(void)setItemId:(id)arg1 ;
-(int)_mapItemSortingCompareWithMapItem:(id)arg1 ;
-(void).cxx_destruct;
-(void)setLocation:(id)arg1 ;
@end

