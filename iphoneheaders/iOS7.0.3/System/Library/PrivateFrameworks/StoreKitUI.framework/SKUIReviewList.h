/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUICacheCoding.h>

@class NSDictionary, NSMutableArray, NSArray, NSURL, NSMutableDictionary;

@interface SKUIReviewList : NSObject <SKUICacheCoding> {

	NSDictionary* _dictionary;
	NSMutableArray* _reviews;

}

@property (nonatomic,readonly) NSArray * reviews;                                      //@synthesize reviews=_reviews - In the implementation block
@property (nonatomic,readonly) int numberOfPages; 
@property (nonatomic,readonly) int ratingCount; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) int fiveStarRatingCount; 
@property (nonatomic,readonly) int fourStarRatingCount; 
@property (nonatomic,readonly) int oneStarRatingCount; 
@property (nonatomic,readonly) int threeStarRatingCount; 
@property (nonatomic,readonly) int twoStarRatingCount; 
@property (nonatomic,readonly) NSURL * writeReviewURL; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(int)numberOfPages;
-(id)reviews;
-(float)userRating;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)cacheRepresentation;
-(id)writeReviewURL;
-(id)initWithReviewListDictionary:(id)arg1 ;
-(void)addReviews:(id)arg1 ;
-(int)fiveStarRatingCount;
-(int)fourStarRatingCount;
-(int)oneStarRatingCount;
-(int)ratingCount;
-(int)threeStarRatingCount;
-(int)twoStarRatingCount;
-(void).cxx_destruct;
@end

