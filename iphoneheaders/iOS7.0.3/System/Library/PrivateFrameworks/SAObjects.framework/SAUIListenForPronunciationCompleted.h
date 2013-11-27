/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString, SASPronunciationData;

@interface SAUIListenForPronunciationCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * errorCode; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,retain) SASPronunciationData * pronunciationData; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)listenForPronunciationCompleted;
+(id)listenForPronunciationCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)pronunciationData;
-(id)interactionId;
-(void)setInteractionId:(id)arg1 ;
-(void)setPronunciationData:(id)arg1 ;
-(id)errorCode;
-(void)setErrorCode:(id)arg1 ;
@end

