/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSArray;

@interface SUVariableCellConfigurationCache : NSObject {

	NSMutableDictionary* _caches;
	id _cellContext;
	float _tableHeight;

}

@property (nonatomic,readonly) NSArray * caches; 
@property (nonatomic,retain) id cellContext;                  //@synthesize cellContext=_cellContext - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)resetLayoutCaches;
-(id)cacheForClass:(Class)arg1 ;
-(id)cellContext;
-(id)initWithTableHeight:(float)arg1 ;
-(void)setCellContext:(id)arg1 ;
-(id)caches;
@end

