/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OCPPackageProperties : NSObject {

	NSString* mCreator;
	NSString* mDescription;
	NSString* mKeywords;
	NSString* mTitle;

}
-(void)dealloc;
-(id)description;
-(id)title;
-(id)keywords;
-(id)initWithXml:(xmlDoc*)arg1 ;
-(id)creator;
-(void)readFromXml:(xmlDoc*)arg1 ;
@end

