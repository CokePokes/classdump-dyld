/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDate;

@interface PDAutomaticGroup : NSObject {

	NSString* _passTypeID;
	NSString* _groupingID;
	int _passStyle;
	NSDate* _minDate;
	NSDate* _maxDate;
	NSDate* _ingestedDate;

}

@property (nonatomic,copy) NSString * passTypeID;                //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,copy) NSString * groupingID;                //@synthesize groupingID=_groupingID - In the implementation block
@property (assign,nonatomic) int passStyle;                      //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) NSDate * minDate;                   //@synthesize minDate=_minDate - In the implementation block
@property (nonatomic,retain) NSDate * maxDate;                   //@synthesize maxDate=_maxDate - In the implementation block
@property (nonatomic,retain) NSDate * ingestedDate;              //@synthesize ingestedDate=_ingestedDate - In the implementation block
+(id)automaticGroupWithGroupingProfile:(id)arg1 ;
-(id)passTypeID;
-(void)setPassTypeID:(id)arg1 ;
-(id)minDate;
-(id)maxDate;
-(void)addPassWithGroupingProfile:(id)arg1 ;
-(void)setMinDate:(id)arg1 ;
-(void)setMaxDate:(id)arg1 ;
-(BOOL)_canAcceptDate:(id)arg1 withLeeway:(double)arg2 ;
-(BOOL)_dateIsAcceptable:(id)arg1 ;
-(void)dealloc;
-(int)passStyle;
-(void)setGroupingID:(id)arg1 ;
-(void)setIngestedDate:(id)arg1 ;
-(id)groupingID;
-(id)ingestedDate;
-(void)setPassStyle:(int)arg1 ;
@end

