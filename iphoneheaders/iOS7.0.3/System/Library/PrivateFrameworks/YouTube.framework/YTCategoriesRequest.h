/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray;

@interface YTCategoriesRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _categories;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clearDelegate;
-(void)loadRequest:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)didAuthenticate:(id)arg1 ;
-(id)_categoriesURL;
-(void)requestCategoriesWithDelegate:(id)arg1 ;
@end

