/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDBGPlaceholder.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDDrawable;

@interface GQDBGObjectPlaceholder : GQDBGPlaceholder <GQDNameMappable> {

	char* mContentType;
	GQDDrawable* mDrawable;

}
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(void)dealloc;
-(id)drawable;
@end

