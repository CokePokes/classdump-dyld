/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableArray;

@interface SymptomStore : NSObject {

	unsigned symptomIdent;
	NSString* symptomName;
	char* symptomUTF8Name;
	NSMutableArray* symptomHistory;
	unsigned symptomMinRetainTime;
	unsigned symptomMinSavedCount;

}

@property (assign,nonatomic) unsigned symptomIdent; 
@property (nonatomic,retain) NSString * symptomName; 
@property (assign,nonatomic) char* symptomUTF8Name; 
@property (nonatomic,retain) NSMutableArray * symptomHistory; 
+(void)initialize;
+(int)configure:(id)arg1 ;
+(id)idFromReporterName:(id)arg1 ;
+(id)idFromSymptomName:(id)arg1 ;
+(void)setRetainCount:(unsigned)arg1 forSymptom:(unsigned)arg2 ;
+(void)setRetainTime:(unsigned)arg1 forSymptom:(unsigned)arg2 ;
+(id)storedSymptomsWithId:(unsigned)arg1 ;
+(id)nameFromSymptomId:(unsigned)arg1 ;
+(void)noteReceivedSymptom:(id)arg1 ;
+(id)nameFromReporterId:(unsigned)arg1 ;
+(BOOL)hasNewPersistentData;
+(id)getPersistentData;
+(void)setPersistentData:(id)arg1 ;
+(int)addFromReporter:(id)arg1 ;
+(id)storeFromSymptomId:(unsigned)arg1 ;
-(id)description;
-(void)setSymptomIdent:(unsigned)arg1 ;
-(void)setSymptomName:(id)arg1 ;
-(id)symptomName;
-(void)setSymptomUTF8Name:(char*)arg1 ;
-(void)noteReceivedSymptom:(id)arg1 ;
-(unsigned)symptomIdent;
-(char*)symptomUTF8Name;
-(void)setSymptomHistory:(id)arg1 ;
-(void)setRetainTime:(unsigned)arg1 ;
-(void)setRetainCount:(unsigned)arg1 ;
-(id)symptomHistory;
-(void).cxx_destruct;
@end

