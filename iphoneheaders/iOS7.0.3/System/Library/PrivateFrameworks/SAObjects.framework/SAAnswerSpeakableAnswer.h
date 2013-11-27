/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SAAnswerSpeakableAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * parameters; 
@property (nonatomic,copy) NSString * templateName; 
+(id)speakableAnswer;
+(id)speakableAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(id)encodedClassName;
-(id)templateName;
-(void)setTemplateName:(id)arg1 ;
@end

