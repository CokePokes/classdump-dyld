/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SASettingGetNumberResponse.h>

@class SASettingEntity;

@interface SASettingGetFloatResponse : SASettingGetNumberResponse

@property (nonatomic,retain) SASettingEntity * setting; 
+(id)getFloatResponse;
+(id)getFloatResponseWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getFloatResponseWithSetting:(id)arg1 ;
-(id)groupIdentifier;
-(id)setting;
-(id)initWithSetting:(id)arg1 ;
-(id)encodedClassName;
-(void)setSetting:(id)arg1 ;
@end

