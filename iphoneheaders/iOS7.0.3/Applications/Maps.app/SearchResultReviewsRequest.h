/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/SearchResultResourceRequest.h>

@interface SearchResultReviewsRequest : SearchResultResourceRequest {

	/*^block*/ id _reviewsHandler;

}

@property (nonatomic,copy) id reviewsHandler;              //@synthesize reviewsHandler=_reviewsHandler - In the implementation block
+(id)requestWithSearchResult:(id)arg1 ;
-(void)setReviewsHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)reviewsHandler;
-(void)dealloc;
-(id)url;
-(id)urlRequest;
-(void)handleError:(id)arg1 ;
-(void)handleData:(id)arg1 ;
@end

