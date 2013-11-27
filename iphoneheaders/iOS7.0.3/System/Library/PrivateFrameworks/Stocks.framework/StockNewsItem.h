/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDate, NSURL;

@interface StockNewsItem : NSObject {

	unsigned long long _ID;
	NSString* _headline;
	NSString* _summary;
	NSString* _source;
	NSDate* _date;
	NSURL* _link;
	NSString* _localizedDateString;

}

@property (assign,nonatomic) unsigned long long ID;                         //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSString * headline;                           //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) NSString * summary;                            //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSURL * link;                                  //@synthesize link=_link - In the implementation block
@property (nonatomic,readonly) NSString * localizedDateString; 
+(id)localizedStringForDate:(id)arg1 ;
-(void)setHeadline:(id)arg1 ;
-(id)headline;
-(void)dealloc;
-(id)description;
-(id)date;
-(void)setDate:(id)arg1 ;
-(id)archiveDictionary;
-(id)source;
-(void)setSource:(id)arg1 ;
-(void)setLink:(id)arg1 ;
-(id)link;
-(unsigned long long)ID;
-(void)setID:(unsigned long long)arg1 ;
-(id)initWithArchiveDictionary:(id)arg1 ;
-(int)chronologicalComparisonWithNewsItem:(id)arg1 ;
-(id)localizedDateString;
-(void)resetLocale;
-(void).cxx_destruct;
-(id)summary;
-(void)setSummary:(id)arg1 ;
@end

