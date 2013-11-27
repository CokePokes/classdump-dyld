/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface WBSURLCompletionDatabase : NSObject {

	void* _private;

}
-(void)dealloc;
-(id)init;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(/*^block*/ id)arg2 ;
-(void)getBestMatchesForTypedString:(id)arg1 topHits:(id*)arg2 matches:(id*)arg3 limit:(unsigned)arg4 ;
-(void)clearBookmarkMatchesCaches;
-(void)clearMatchesCaches;
@end

