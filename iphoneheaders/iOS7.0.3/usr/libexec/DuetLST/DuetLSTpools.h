/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/DuetLST
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class DuetLST, NSMutableArray, NSObject;

@interface DuetLSTpools : NSObject {

	DuetLST* lst;
	NSMutableArray* pooltable;
	int poolNotificationToken;
	NSObject<OS_dispatch_queue>* poolQueue;

}

@property (nonatomic,retain) DuetLST * lst; 
-(void)setLst:(id)arg1 ;
-(id)lst;
-(id)initWithLSTinstance:(id)arg1 ;
-(void)dumpAll;
-(void)dumpLight;
-(void)writePool:(id)arg1 withValue:(long long)arg2 ;
-(void)decrementPool:(id)arg1 decrementValue:(long long)arg2 ;
-(long long)readPool:(id)arg1 ;
-(void)incrementPool:(id)arg1 incrementValue:(long long)arg2 ;
-(void)allocPool:(id)arg1 withValue:(long long)arg2 ;
-(void)deletePool:(id)arg1 ;
-(void)persistentPoolWrite:(id)arg1 withValue:(long long)arg2 ;
-(void)doAllocPool:(id)arg1 withValue:(long long)arg2 ;
-(long long)persistentPoolRead:(id)arg1 andDelete:(BOOL)arg2 ;
-(void)doDecrementPool:(id)arg1 decrementValue:(long long)arg2 ;
-(void)doIncrementPool:(id)arg1 incrementValue:(long long)arg2 ;
-(void).cxx_destruct;
@end

