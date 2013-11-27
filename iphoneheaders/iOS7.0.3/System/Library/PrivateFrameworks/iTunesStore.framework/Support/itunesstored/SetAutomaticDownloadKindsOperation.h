/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class SSAuthenticationContext, NSString, NSSet;

@interface SetAutomaticDownloadKindsOperation : ISOperation {

	SSAuthenticationContext* _authenticationContext;
	NSString* _clientIdentifierHeader;
	NSSet* _downloadKinds;
	NSSet* _previousDownloadKinds;
	BOOL _runsOnlyIfKindsAreDirty;
	BOOL _shouldSuppressServerDialogs;

}

@property (readonly) NSSet * downloadKinds; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSSet * previousDownloadKinds; 
@property (assign) BOOL runsOnlyIfKindsAreDirty; 
@property (assign) BOOL shouldSuppressServerDialogs; 
-(BOOL)runsOnlyIfKindsAreDirty;
-(BOOL)_isFatalError:(id)arg1 ;
-(BOOL)shouldSuppressServerDialogs;
-(id)_copyFilteredDownloadKinds;
-(BOOL)_postDownloadKinds:(id)arg1 error:(id*)arg2 ;
-(id)previousDownloadKinds;
-(void)setPreviousDownloadKinds:(id)arg1 ;
-(void)setRunsOnlyIfKindsAreDirty:(BOOL)arg1 ;
-(void)setShouldSuppressServerDialogs:(BOOL)arg1 ;
-(id)uniqueKey;
-(void)dealloc;
-(void)_run;
-(void)run;
-(id)initWithDownloadKinds:(id)arg1 ;
-(id)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(id)arg1 ;
-(BOOL)shouldFailAfterUniquePredecessorError:(id)arg1 ;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(id)downloadKinds;
@end

