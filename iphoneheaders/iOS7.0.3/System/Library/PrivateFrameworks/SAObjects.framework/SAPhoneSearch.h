/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber;

@interface SAPhoneSearch : SADomainCommand

@property (nonatomic,copy) NSArray * contacts; 
@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSNumber * faceTime; 
@property (nonatomic,copy) NSNumber * faceTimeAudio; 
@property (nonatomic,copy) NSNumber * isNew; 
@property (nonatomic,copy) NSNumber * last; 
@property (nonatomic,copy) NSNumber * missed; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSNumber * voiceMail; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)contacts;
-(void)setContacts:(id)arg1 ;
-(id)isNew;
-(id)groupIdentifier;
-(id)start;
-(id)end;
-(void)setStart:(id)arg1 ;
-(void)setEnd:(id)arg1 ;
-(void)setOutgoing:(id)arg1 ;
-(id)missed;
-(void)setMissed:(id)arg1 ;
-(id)last;
-(void)setLast:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)faceTime;
-(void)setFaceTime:(id)arg1 ;
-(id)faceTimeAudio;
-(void)setFaceTimeAudio:(id)arg1 ;
-(void)setIsNew:(id)arg1 ;
-(id)outgoing;
-(id)voiceMail;
-(void)setVoiceMail:(id)arg1 ;
@end

