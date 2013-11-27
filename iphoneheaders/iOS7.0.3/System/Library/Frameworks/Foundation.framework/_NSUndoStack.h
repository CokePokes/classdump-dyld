/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class _NSUndoObject;

@interface _NSUndoStack : NSObject {

	unsigned _max;
	unsigned _count;
	unsigned _nestingLevel;
	_NSUndoObject* _head;

}
-(id)topUndoObject;
-(void)markBegin;
-(BOOL)isDiscardable;
-(id)popUndoObject;
-(void)markEnd;
-(id)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setDiscardable:(BOOL)arg1 ;
-(void)removeAllObjectsWithTarget:(id)arg1 ;
-(void)_removeBottom;
-(id)_beginMark;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(BOOL)popAndInvoke;
-(unsigned)nestingLevel;
-(void)push:(id)arg1 ;
-(unsigned)max;
-(void)setMax:(unsigned)arg1 ;
@end

