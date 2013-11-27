/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray, CLALSRequester;

@interface BatchData : NSObject {

	NSArray* _data;
	unsigned _count;
	unsigned _index;
	double _startTime;
	CLALSRequester* _requester;

}

@property (nonatomic,retain) NSArray * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) CLALSRequester * requester;              //@synthesize requester=_requester - In the implementation block
-(id)initWithData:(id)arg1 startTime:(double)arg2 requester:(id)arg3 ;
-(void)dealloc;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)requester;
-(void)setRequester:(id)arg1 ;
@end

