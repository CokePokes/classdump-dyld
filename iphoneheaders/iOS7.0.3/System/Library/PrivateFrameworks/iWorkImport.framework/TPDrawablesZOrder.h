/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPObject.h>

@class NSMutableArray;

@interface TPDrawablesZOrder : TSPObject {

	NSMutableArray* _drawables;

}

@property (nonatomic,readonly) unsigned drawableCount; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)removeDrawable:(id)arg1 ;
-(unsigned)zOrderOfDrawable:(id)arg1 ;
-(unsigned)insertDrawable:(id)arg1 atZOrder:(unsigned)arg2 ;
-(void)moveDrawable:(id)arg1 toZOrder:(unsigned)arg2 ;
-(id)orderedDrawables:(id)arg1 ;
-(void)removeDrawableAtZOrder:(unsigned)arg1 ;
-(void)moveDrawableAtZOrder:(unsigned)arg1 toZOrder:(unsigned)arg2 ;
-(id)drawableAtZOrder:(unsigned)arg1 ;
-(void)moveDrawables:(id)arg1 toZOrder:(unsigned)arg2 ;
-(void)swapDrawableAtZOrder:(unsigned)arg1 withDrawableAtZOrder:(unsigned)arg2 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(unsigned)drawableCount;
-(unsigned)addDrawable:(id)arg1 ;
-(id)drawableEnumerator;
@end

