/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol _MFSearchResultsConsumer <NSObject>
@required
-(BOOL)_isResetting;
-(void)_addResults:(id)arg1 ofType:(int)arg2;
-(BOOL)_shouldProcessResultsAfterFinishingType:(int)arg1;
-(BOOL)_didFinishSearchForType:(int)arg1;
-(void)_enumerateSearchResultTypesInSortOrderUsingBlock:(/*^block*/ id)arg1;
-(void)_appendSortedResultsOfType:(int)arg1 excluding:(id)arg2 toResults:(id)arg3;
@end

