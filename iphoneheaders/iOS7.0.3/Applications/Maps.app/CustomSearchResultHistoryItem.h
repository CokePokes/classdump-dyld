/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/HistoryItem.h>

@class SearchResult;

@interface CustomSearchResultHistoryItem : NSObject <HistoryItem> {

	SearchResult* _customSearchResult;

}

@property (nonatomic,readonly) SearchResult * customSearchResult;              //@synthesize customSearchResult=_customSearchResult - In the implementation block
-(id)customSearchResult;
-(id)initWithSearchResult:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(int)type;
@end

