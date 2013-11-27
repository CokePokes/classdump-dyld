/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class NSArray;

@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand>

@property (nonatomic,copy) NSArray * identifiers; 
+(id)domainObjectRetrieve;
+(id)domainObjectRetrieveWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)identifiers;
-(void)setIdentifiers:(id)arg1 ;
@end

