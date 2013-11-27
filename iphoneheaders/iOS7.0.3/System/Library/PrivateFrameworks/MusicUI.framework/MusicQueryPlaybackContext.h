/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicPlaybackContext.h>

@class NSArray, MPMediaQuery;

@interface MusicQueryPlaybackContext : MusicPlaybackContext {

	NSArray* _prefixMediaItems;
	MPMediaQuery* _query;
	unsigned _startIndex;

}

@property (nonatomic,copy) NSArray * prefixMediaItems;              //@synthesize prefixMediaItems=_prefixMediaItems - In the implementation block
@property (nonatomic,readonly) MPMediaQuery * query;                //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) unsigned startIndex;                   //@synthesize startIndex=_startIndex - In the implementation block
+(Class)queueFeederClass;
-(void)setPrefixMediaItems:(id)arg1 ;
-(id)prefixMediaItems;
-(id)query;
-(id)initWithQuery:(id)arg1 ;
-(void)setStartIndex:(unsigned)arg1 ;
-(unsigned)startIndex;
-(void).cxx_destruct;
@end

