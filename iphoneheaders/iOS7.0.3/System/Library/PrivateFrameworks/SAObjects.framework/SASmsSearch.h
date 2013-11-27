/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString, NSNumber, NSArray;

@interface SASmsSearch : SADomainCommand

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * senders; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSNumber * unread; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)groupIdentifier;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)start;
-(id)end;
-(void)setStart:(id)arg1 ;
-(void)setEnd:(id)arg1 ;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(void)setOutgoing:(id)arg1 ;
-(id)senders;
-(void)setSenders:(id)arg1 ;
-(id)recipients;
-(void)setRecipients:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)outgoing;
-(id)unread;
-(void)setUnread:(id)arg1 ;
@end

