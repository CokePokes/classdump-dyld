/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICacheCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSString, NSArray, NSMutableDictionary;

@interface SKUIItemList : NSObject <SKUICacheCoding, NSCopying> {

	NSMutableArray* _items;
	NSString* _seeAllURLString;
	NSString* _title;
	NSString* _seeAllTitle;

}

@property (nonatomic,copy) NSArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * seeAllTitle;                                     //@synthesize seeAllTitle=_seeAllTitle - In the implementation block
@property (nonatomic,copy) NSString * seeAllURLString;                                 //@synthesize seeAllURLString=_seeAllURLString - In the implementation block
@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(void)removeItemsAtIndexes:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)cacheRepresentation;
-(id)seeAllTitle;
-(id)seeAllURLString;
-(void)setSeeAllTitle:(id)arg1 ;
-(void)setSeeAllURLString:(id)arg1 ;
-(void).cxx_destruct;
@end

