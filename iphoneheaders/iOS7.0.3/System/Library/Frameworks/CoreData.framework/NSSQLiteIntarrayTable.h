/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreData/CoreData-Structs.h>
@class NSString;

@interface NSSQLiteIntarrayTable : NSObject {

	sqlite3_intarrayRef _intarrayTable;
	NSString* _intarrayTableName;

}

@property (assign) sqlite3_intarrayRef intarrayTable;              //@synthesize intarrayTable=_intarrayTable - In the implementation block
@property (retain) NSString * intarrayTableName;                   //@synthesize intarrayTableName=_intarrayTableName - In the implementation block
-(void)setIntarrayTableName:(id)arg1 ;
-(void)setIntarrayTable:(sqlite3_intarrayRef)arg1 ;
-(sqlite3_intarrayRef)intarrayTable;
-(id)intarrayTableName;
-(void)dealloc;
@end

