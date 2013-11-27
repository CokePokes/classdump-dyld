/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface HistogramElement : NSObject <NSCoding> {

	NSString* stringkey;
	double probability;
	unsigned long long count;
	unsigned long long queryID;

}

@property (nonatomic,retain) NSString * stringkey; 
@property (assign,nonatomic) double probability; 
@property (assign,nonatomic) unsigned long long count; 
@property (assign,nonatomic) unsigned long long queryID; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(void)setCount:(unsigned long long)arg1 ;
-(id)stringkey;
-(double)probability;
-(id)initWithString:(id)arg1 withProbability:(double)arg2 withQueryID:(unsigned long long)arg3 ;
-(unsigned long long)queryID;
-(id)initWithString:(id)arg1 withCount:(unsigned long long)arg2 withQueryID:(unsigned long long)arg3 ;
-(void)setStringkey:(id)arg1 ;
-(void)setProbability:(double)arg1 ;
-(void)setQueryID:(unsigned long long)arg1 ;
-(void).cxx_destruct;
@end

