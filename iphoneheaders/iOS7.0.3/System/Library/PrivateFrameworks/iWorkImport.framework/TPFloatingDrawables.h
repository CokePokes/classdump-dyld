/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKDocumentObject.h>

@class NSMutableDictionary, TSUPointerKeyDictionary, TPDocumentRoot;

@interface TPFloatingDrawables : TSPObject <TSKDocumentObject> {

	NSMutableDictionary* _drawablesByPageIndex;
	TSUPointerKeyDictionary* _pageIndexByDrawable;
	TPDocumentRoot* _documentRoot;

}

@property (nonatomic,readonly) TPDocumentRoot * documentRoot;              //@synthesize documentRoot=_documentRoot - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)removeDrawable:(id)arg1 ;
-(unsigned)maximumPageIndex;
-(id)drawablesOnPageIndex:(unsigned)arg1 ;
-(void)p_addDrawable:(id)arg1 toPageIndex:(unsigned)arg2 ;
-(unsigned)countOfAllDrawables;
-(void)addDrawable:(id)arg1 toPageIndex:(unsigned)arg2 insertContext:(id)arg3 suppressDOLC:(BOOL)arg4 ;
-(void)addDrawable:(id)arg1 toPageIndex:(unsigned)arg2 insertContext:(id)arg3 ;
-(void)p_removeDrawable:(id)arg1 ;
-(void)removeDrawable:(id)arg1 suppressDOLC:(BOOL)arg2 ;
-(unsigned)pageIndexForDrawable:(id)arg1 ;
-(BOOL)hasAnyDrawables;
-(id)allDrawables;
-(id)orderedDrawablesOnPageIndex:(unsigned)arg1 ;
-(void)addDrawables:(id)arg1 toPageIndex:(unsigned)arg2 insertContext:(id)arg3 ;
-(void)removeDrawables:(id)arg1 ;
-(void)moveDrawable:(id)arg1 toPageIndex:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(id)drawableEnumerator;
-(id)documentRoot;
@end

