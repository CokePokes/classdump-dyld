/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class TSTMasterLayout, NSMutableArray;

@interface TSTLayoutTask : NSObject {

	TSTMasterLayout* mMasterLayout;
	NSMutableArray* mCellStatesToLayout;

}

@property (nonatomic,retain) NSMutableArray * cellStatesToLayout; 
-(id)initWithMasterLayout:(id)arg1 ;
-(id)cellStatesToLayout;
-(void)flushToGlobalCaches;
-(void)setCellStatesToLayout:(id)arg1 ;
-(void)dealloc;
@end

