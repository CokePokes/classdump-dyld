/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASetSessionObjects : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * objects; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)setSessionObjects;
+(id)setSessionObjectsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)objects;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setObjects:(id)arg1 ;
@end

