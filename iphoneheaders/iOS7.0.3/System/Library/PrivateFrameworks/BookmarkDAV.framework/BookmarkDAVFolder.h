/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVContainer.h>
#import <BookmarkDAV/CoreDAVModifiedContainer.h>
#import <BookmarkDAV/CoreDAVAddedContainer.h>
#import <CoreDAV/CoreDAVLeafDataPayload.h>

@class NSDictionary, NSMutableArray, NSString, CoreDAVErrorItem, NSArray, NSURL, NSData;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer, CoreDAVLeafDataPayload> {

	NSDictionary* _appleAttributes;
	NSMutableArray* _childrenOrder;
	NSString* _bulkParsedCTag;
	NSString* _bulkParsedPTag;
	CoreDAVErrorItem* _bulkUploadErrorItem;

}

@property (@dynamic) BOOL isBookmarkFolder; 
@property (@dynamic) BOOL isBookmarkBarFolder; 
@property (@dynamic) BOOL isBookmarkMenuFolder; 
@property (readonly) NSDictionary * appleAttributes;                    //@synthesize appleAttributes=_appleAttributes - In the implementation block
@property (retain) NSString * bulkParsedCTag;                           //@synthesize bulkParsedCTag=_bulkParsedCTag - In the implementation block
@property (retain) NSString * bulkParsedPTag;                           //@synthesize bulkParsedPTag=_bulkParsedPTag - In the implementation block
@property (readonly) NSArray * childrenOrder;                           //@synthesize childrenOrder=_childrenOrder - In the implementation block
@property (retain) CoreDAVErrorItem * bulkUploadErrorItem;              //@synthesize bulkUploadErrorItem=_bulkUploadErrorItem - In the implementation block
@property (retain) NSURL * serverID; 
@property (readonly) NSData * dataPayload; 
@property (readonly) NSString * syncKey; 
+(id)copyPropertyMappingsForParser;
-(void)dealloc;
-(id)appleAttributes;
-(id)bulkUploadErrorItem;
-(void)setBulkUploadErrorItem:(id)arg1 ;
-(id)initWithServerID:(id)arg1 containerName:(id)arg2 appleAttributes:(id)arg3 ;
-(void)setBulkParsedCTag:(id)arg1 ;
-(void)setBulkParsedPTag:(id)arg1 ;
-(void)_faultResourceType;
-(id)_appleAttributesString;
-(BOOL)isBookmarkFolder;
-(BOOL)isBookmarkBarFolder;
-(BOOL)isBookmarkMenuFolder;
-(void)setIsBookmarkFolder:(BOOL)arg1 ;
-(void)setIsBookmarkBarFolder:(BOOL)arg1 ;
-(void)setIsBookmarkMenuFolder:(BOOL)arg1 ;
-(id)bulkParsedCTag;
-(id)bulkParsedPTag;
-(void)applyParsedProperties:(id)arg1 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(id)dataPayload;
-(id)childrenOrder;
-(id)copyMkcolTask;
-(id)copyPropPatchTask;
-(void)setServerID:(id)arg1 ;
-(id)serverID;
-(id)syncKey;
@end

