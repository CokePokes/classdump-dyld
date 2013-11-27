/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask {

	NSSet* _searchItems;
	BOOL _applyToPrincipalCollectionSet;
	NSDictionary* _extraAttributes;

}

@property (retain) NSSet * searchItems;                             //@synthesize searchItems=_searchItems - In the implementation block
@property (retain) NSDictionary * extraAttributes;                  //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (assign) BOOL applyToPrincipalCollectionSet;              //@synthesize applyToPrincipalCollectionSet=_applyToPrincipalCollectionSet - In the implementation block
-(void)setSearchItems:(id)arg1 ;
-(id)searchItems;
-(void)dealloc;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(void)setApplyToPrincipalCollectionSet:(BOOL)arg1 ;
-(id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(BOOL)arg4 extraAttributes:(id)arg5 ;
-(BOOL)applyToPrincipalCollectionSet;
-(id)requestBody;
-(id)httpMethod;
-(void)setExtraAttributes:(id)arg1 ;
-(id)extraAttributes;
@end

