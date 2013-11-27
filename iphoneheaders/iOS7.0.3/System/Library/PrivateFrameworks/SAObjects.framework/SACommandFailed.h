/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class NSString, NSArray;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand>

@property (assign,nonatomic) int errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
@property (nonatomic,@dynamic,copy) NSString * appId; 
@property (nonatomic,@dynamic,copy) NSArray * callbacks; 
+(id)commandFailed;
+(id)commandFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)commandFailedWithErrorCode:(int)arg1 ;
+(id)commandFailedWithReason:(id)arg1 ;
-(id)groupIdentifier;
-(void)setReason:(id)arg1 ;
-(id)reason;
-(id)initWithReason:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithErrorCode:(int)arg1 ;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
@end

