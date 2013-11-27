/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, NSMutableDictionary;

@interface NSFileAccessNode : NSObject {

	NSFileAccessNode* _parent;
	NSString* _name;
	NSString* _normalizedName;
	NSFileAccessNode* _symbolicLinkDestination;
	unsigned _symbolicLinkReferenceCount;
	NSMutableDictionary* _childrenByNormalizedName;
	id _presenterOrPresenters;
	id _provider;
	id _accessClaimOrClaims;
	BOOL _isArbitrationBoundary;
	BOOL _isFilePackageIsFigured;
	BOOL _isFilePackage;
	NSString* _lastRequestedChildName;
	NSFileAccessNode* _lastRequestedChild;
	id _progressPublisherOrPublishers;
	id _progressSubscriberOrSubscribers;

}
-(id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3 ;
-(id)descendantForFileURL:(id)arg1 ;
-(void)setSymbolicLinkDestination:(id)arg1 ;
-(id)pathToDescendantForFileURL:(id)arg1 componentRange:(NSRange*)arg2 ;
-(id)descendantAtPath:(id)arg1 componentRange:(NSRange)arg2 create:(BOOL)arg3 ;
-(void)forEachPresenterOfContainingItemPerformProcedure:(/*^block*/ id)arg1 ;
-(id)itemProvider;
-(id)pathFromAncestor:(id)arg1 ;
-(void)forEachProgressPublisherOfItemPerformProcedure:(/*^block*/ id)arg1 ;
-(void)setParent:(id)arg1 name:(id)arg2 ;
-(void)forEachPresenterOfItemOrContainedItemPerformProcedure:(/*^block*/ id)arg1 ;
-(id)urlOfSubitemAtPath:(id)arg1 plusPath:(id)arg2 ;
-(void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(/*^block*/ id)arg1 ;
-(void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(/*^block*/ id)arg1 ;
-(void)forEachPresenterOfItemOrContainingItemPerformProcedure:(/*^block*/ id)arg1 ;
-(void)setArbitrationBoundary;
-(BOOL)itemIsItemAtLocation:(id)arg1 ;
-(BOOL)itemIsInItemAtLocation:(id)arg1 ;
-(void)forEachPresenterOfContainingFilePackagePerformProcedure:(/*^block*/ id)arg1 ;
-(void)forEachPresenterOfItemPerformProcedure:(/*^block*/ id)arg1 ;
-(BOOL)itemIsFilePackage;
-(void)forEachPresenterOfContainedItemPerformProcedure:(/*^block*/ id)arg1 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)forEachRelevantAccessClaimPerformProcedure:(/*^block*/ id)arg1 ;
-(BOOL)itemIsSubarbitrable;
-(void)addAccessClaim:(id)arg1 ;
-(void)removeAccessClaim:(id)arg1 ;
-(void)removeSelfIfUseless;
-(void)removeChildForNormalizedName:(id)arg1 ;
-(id)normalizationOfChildName:(id)arg1 ;
-(void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3 ;
-(id)childForRange:(NSRange)arg1 ofPath:(id)arg2 ;
-(void)forEachDescendantPerformProcedure:(/*^block*/ id)arg1 ;
-(id)biggestFilePackageLocation;
-(void)forEachAccessClaimOnItemPerformProcedure:(/*^block*/ id)arg1 ;
-(id)pathExceptPrivate;
-(void)forEachProgressSubscriberOfItemPerformProcedure:(/*^block*/ id)arg1 ;
-(void)assertLive;
-(void)forEachReactorToItemOrContainedItemPerformProcedure:(/*^block*/ id)arg1 ;
-(void)addPresenter:(id)arg1 ;
-(void)removePresenter:(id)arg1 ;
-(void)setProvider:(id)arg1 ;
-(void)addProgressPublisher:(id)arg1 ;
-(void)removeProgressPublisher:(id)arg1 ;
-(void)addProgressSubscriber:(id)arg1 ;
-(void)removeProgressSubscriber:(id)arg1 ;
-(void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(/*^block*/ id)arg1 ;
-(void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(/*^block*/ id)arg1 ;
-(void)assertDead;
-(void)assertDescendantsLive;
-(void)dealloc;
-(id)description;
-(id)url;
-(id)standardizedURL;
-(id)parent;
@end

