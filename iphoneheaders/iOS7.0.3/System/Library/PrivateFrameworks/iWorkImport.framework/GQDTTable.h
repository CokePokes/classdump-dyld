/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDTTableModel, GQDSStyle;

@interface GQDTTable : GQDGraphic <GQDNameMappable> {

	GQDTTableModel* mModel;
	GQDSStyle* mStyle;
	BOOL mIsStreamed;

}
+(const StateSpec*)stateForReading;
-(int)walkTableWithGenerator:(Class)arg1 state:(id)arg2 ;
-(BOOL)isStreamed;
-(id)defaultVectorStyleForVectorType:(int)arg1 ;
-(void)dealloc;
-(id)model;
-(void)setModel:(id)arg1 ;
-(id)tableStyle;
-(void)setTableStyle:(id)arg1 ;
@end

