/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {

	NSValue* mDrawableValue;
	NSString* mGroupId;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)drawable;
-(id)groupId;
-(id)initWithDrawable:(id)arg1 groupId:(id)arg2 ;
-(void)setDrawable:(id)arg1 ;
-(void)setGroupId:(id)arg1 ;
@end

