/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSSet, CoreDAVResponseItem, NSURL;

@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask {

	NSSet* _propPatchRemoveElements;
	NSSet* _propPatchSetElements;
	CoreDAVResponseItem* _responseItem;
	BOOL _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (assign,nonatomic,@dynamic) <CoreDAVPropPatchTaskDelegate> * delegate; 
@property (nonatomic,retain) NSURL * priorOrderedURL;                                         //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                                               //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (retain) CoreDAVResponseItem * responseItem;                                        //@synthesize responseItem=_responseItem - In the implementation block
@property (retain) NSSet * propPatchRemoveElements;                                           //@synthesize propPatchRemoveElements=_propPatchRemoveElements - In the implementation block
@property (retain) NSSet * propPatchSetElements;                                              //@synthesize propPatchSetElements=_propPatchSetElements - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(int)absoluteOrder;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)priorOrderedURL;
-(id)propPatchSetElements;
-(id)propPatchRemoveElements;
-(void)setResponseItem:(id)arg1 ;
-(id)responseItem;
-(id)initWithPropertiesToSet:(id)arg1 andRemove:(id)arg2 atURL:(id)arg3 ;
-(void)setPropPatchRemoveElements:(id)arg1 ;
-(void)setPropPatchSetElements:(id)arg1 ;
-(id)requestBody;
-(id)httpMethod;
@end

