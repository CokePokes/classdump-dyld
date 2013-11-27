/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class WebBookmark, CloudTab, NSURL, WBSAutomaticReadingListItem;

@interface NavigationDestination : NSObject {

	unsigned _type;
	WebBookmark* _bookmark;
	CloudTab* _cloudTab;
	NSURL* _URL;
	WBSAutomaticReadingListItem* _automaticReadingListItem;

}

@property (nonatomic,readonly) unsigned type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) WebBookmark * bookmark;                                              //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,retain) CloudTab * cloudTab;                                                 //@synthesize cloudTab=_cloudTab - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) WBSAutomaticReadingListItem * automaticReadingListItem;              //@synthesize automaticReadingListItem=_automaticReadingListItem - In the implementation block
+(id)navigationDestinationWithBookmark:(id)arg1 ;
+(id)navigationDestinationWithCloudTab:(id)arg1 ;
+(id)navigationDestinationWithHistoryURL:(id)arg1 ;
+(id)navigationDestinationWithAutomaticReadingListItem:(id)arg1 ;
-(id)automaticReadingListItem;
-(id)cloudTab;
-(void)setCloudTab:(id)arg1 ;
-(void)setAutomaticReadingListItem:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)type;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)_initWithType:(unsigned)arg1 ;
-(id)bookmark;
-(void)setBookmark:(id)arg1 ;
@end

