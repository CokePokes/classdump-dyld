/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/DuetLST
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class DuetLST, NSMutableDictionary;

@interface DuetLSTenergystats : NSObject {

	DuetLST* lst;
	NSMutableDictionary* launchReadings;

}

@property (nonatomic,retain) DuetLST * lst; 
-(void)setLst:(id)arg1 ;
-(id)lst;
-(id)initWithLSTinstance:(id)arg1 ;
-(void)launchStart:(id)arg1 energyUsed:(unsigned long long)arg2 ;
-(void)launchEnd:(id)arg1 energyUsed:(unsigned long long)arg2 ;
-(void)dumpAll;
-(void)dumpLight;
-(void).cxx_destruct;
@end

