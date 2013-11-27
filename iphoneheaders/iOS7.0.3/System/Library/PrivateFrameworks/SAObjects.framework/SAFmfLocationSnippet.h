/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSArray, NSString, NSURL;

@interface SAFmfLocationSnippet : SAUISnippet

@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSArray * locations; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,copy) NSURL * searchContext; 
+(id)locationSnippet;
+(id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)proximity;
-(void)setProximity:(id)arg1 ;
-(id)groupIdentifier;
-(void)setLocations:(id)arg1 ;
-(void)setSearchContext:(id)arg1 ;
-(id)searchContext;
-(id)locations;
-(id)encodedClassName;
-(id)atRequestedLocation;
-(void)setAtRequestedLocation:(id)arg1 ;
@end

