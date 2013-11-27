/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {

	NSArray* _affectedStores;

}
+(void)initialize;
-(id)affectedStores;
-(void)setAffectedStores:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)requestType;
@end

