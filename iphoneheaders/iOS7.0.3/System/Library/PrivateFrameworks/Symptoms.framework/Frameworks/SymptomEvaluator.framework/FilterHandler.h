/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@interface FilterHandler : NSObject <SymptomAdditionalProtocol>
+(id)sharedInstance;
+(int)configure:(id)arg1 ;
+(bool)noteSymptom:(id)arg1 ;
+(id)evaluate:(id)arg1 ;
-(id)init;
-(id)description;
-(int)configure:(id)arg1 ;
-(bool)noteSymptom:(id)arg1 ;
-(int)configureSubsystem:(id)arg1 ;
@end

