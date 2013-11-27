/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem {

	NSString* _symbolicColorName;

}

@property (nonatomic,retain) NSString * symbolicColorName;              //@synthesize symbolicColorName=_symbolicColorName - In the implementation block
@property (retain) NSString * colorString; 
-(id)symbolicColorName;
-(void)setSymbolicColorName:(id)arg1 ;
-(void)setColorString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)parserFoundAttributes:(id)arg1 ;
-(id)colorString;
-(void)write:(id)arg1 ;
@end

