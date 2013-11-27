/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCHChartAxis, TSCH3DAxisLabelKind;

@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator {

	TSCHChartAxis* mAxis;
	TSCH3DAxisLabelKind* mKind;

}

@property (nonatomic,readonly) TSCH3DAxisLabelKind * kind; 
+(id)enumeratorWithAxis:(id)arg1 kind:(id)arg2 ;
-(id)stringForLabelResources:(id)arg1 ;
-(id)initWithAxis:(id)arg1 kind:(id)arg2 ;
-(void)dealloc;
-(unsigned)count;
-(id)string;
-(void)update;
-(id)kind;
-(int)labelPosition;
-(BOOL)shouldRender;
@end

