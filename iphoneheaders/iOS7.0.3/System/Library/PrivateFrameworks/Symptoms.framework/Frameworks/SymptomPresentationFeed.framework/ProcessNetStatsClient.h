/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SymptomPresentationFeed/SymptomPresentationFeed-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface ProcessNetStatsClient : NSObject {

	NSString* primaryKey;
	float pollingInterval;
	NStatManagerRef manager;
	NSMutableArray* entities;
	NSMutableDictionary* durableRollUp;
	int wlanIdx;
	int wwanIdx;
	id _delegate;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)_timeoutHandler;
-(void)_addEntryToRollUp:(id)arg1 ;
-(id)initWithPrimaryKey:(id)arg1 pollInterval:(float)arg2 ;
-(id)getRollUpWithBaseline:(id)arg1 ;
-(void).cxx_destruct;
@end

