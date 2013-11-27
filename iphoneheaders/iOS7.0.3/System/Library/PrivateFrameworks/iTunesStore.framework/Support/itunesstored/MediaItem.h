/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray;

@interface MediaItem : NSObject {

	NSArray* _chapters;
	double _duration;
	int _type;

}

@property (nonatomic,retain) NSArray * chapters;                    //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) double durationInSeconds;              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
-(id)_copyChapterVideoTracksForAsset:(id)arg1 ;
-(void)setDurationInSeconds:(double)arg1 ;
-(double)durationInSeconds;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithPath:(id)arg1 ;
-(id)chapters;
-(void)setChapters:(id)arg1 ;
@end

