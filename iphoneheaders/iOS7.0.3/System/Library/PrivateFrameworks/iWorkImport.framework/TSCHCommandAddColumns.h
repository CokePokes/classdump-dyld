/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartCommand.h>

@class NSString;

@interface TSCHCommandAddColumns : TSCHChartCommand {

	NSRange mColumnRange;
	NSString* mColumnName;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)commitPrimitive;
-(void)undoPrimitive;
-(void)redoPrimitive;
-(const ChartCommandArchive*)chartCommandArchiveFromUnarchiver:(id)arg1 ;
-(id)initWithChartInfo:(id)arg1 columnRange:(NSRange)arg2 columnName:(id)arg3 ;
-(void)dealloc;
-(id).cxx_construct;
@end

