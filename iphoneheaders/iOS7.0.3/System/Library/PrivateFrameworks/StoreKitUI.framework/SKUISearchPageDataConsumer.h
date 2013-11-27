/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSVURLDataConsumer.h>

@class SKUIClientContext, NSString;

@interface SKUISearchPageDataConsumer : SSVURLDataConsumer {

	SKUIClientContext* _clientContext;
	NSString* _searchTerm;

}

@property (nonatomic,copy) NSString * searchTerm;              //@synthesize searchTerm=_searchTerm - In the implementation block
+(id)consumerWithClientContext:(id)arg1 ;
-(id)searchTerm;
-(void)setSearchTerm:(id)arg1 ;
-(id)_newSearchResultGroupWithBubbleDictionary:(id)arg1 platformDictionary:(id)arg2 editorialDictionary:(id)arg3 ;
-(id)_priceFacet;
-(id)_categoriesFacetWithCategories:(id)arg1 ;
-(id)_sortFacetWithSorts:(id)arg1 ;
-(void).cxx_destruct;
-(id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
@end

