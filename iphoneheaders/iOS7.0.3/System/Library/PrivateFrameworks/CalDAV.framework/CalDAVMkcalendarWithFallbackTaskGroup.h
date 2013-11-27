/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSSet, NSDictionary;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _url;
	BOOL _shouldSupportVEVENT;
	BOOL _shouldSupportVTODO;
	NSSet* _primaryElements;
	NSSet* _fallbackElements;
	NSDictionary* _headersToOverride;
	NSDictionary* _responseHeaders;

}

@property (assign,nonatomic) BOOL shouldSupportVEVENT;                      //@synthesize shouldSupportVEVENT=_shouldSupportVEVENT - In the implementation block
@property (assign,nonatomic) BOOL shouldSupportVTODO;                       //@synthesize shouldSupportVTODO=_shouldSupportVTODO - In the implementation block
@property (nonatomic,retain) NSDictionary * headersToOverride;              //@synthesize headersToOverride=_headersToOverride - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHeaders;                //@synthesize responseHeaders=_responseHeaders - In the implementation block
-(void)dealloc;
-(id)headersToOverride;
-(void)_mkcalendarAfterFailureCount:(unsigned)arg1 ;
-(void)setResponseHeaders:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(BOOL)shouldSupportVEVENT;
-(void)setShouldSupportVEVENT:(BOOL)arg1 ;
-(BOOL)shouldSupportVTODO;
-(void)setShouldSupportVTODO:(BOOL)arg1 ;
-(void)setHeadersToOverride:(id)arg1 ;
-(void)startTaskGroup;
-(id)responseHeaders;
@end

