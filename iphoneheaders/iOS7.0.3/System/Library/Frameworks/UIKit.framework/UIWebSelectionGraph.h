/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray;

@interface UIWebSelectionGraph : NSObject {

	NSMutableArray* _selectionNodes;

}
-(void)dealloc;
-(id)init;
-(void)clearNodes;
-(id)addNodeFromSelection:(id)arg1 ;
-(void)exploreFromNode:(id)arg1 outwards:(BOOL)arg2 maxDepth:(int)arg3 ;
-(void)exploreFromNode:(id)arg1 ;
@end

