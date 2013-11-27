/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVLeafItem* _commonName;

}

@property (retain) CoreDAVHrefItem * href;                    //@synthesize href=_href - In the implementation block
@property (retain) CoreDAVLeafItem * commonName;              //@synthesize commonName=_commonName - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setCommonName:(id)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(id)commonName;
-(id)href;
-(void)setHref:(id)arg1 ;
@end

