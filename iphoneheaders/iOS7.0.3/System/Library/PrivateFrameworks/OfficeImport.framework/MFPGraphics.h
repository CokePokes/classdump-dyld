/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPGraphicsState, NSMutableArray, MFPObjectTable, NSMutableDictionary;

@interface MFPGraphics : NSObject {

	CGRect mCanvas;
	int mHorzDpi;
	int mVertDpi;
	MFPGraphicsState* mCurrentState;
	NSMutableArray* mStateStack;
	MFPObjectTable* mObjectTable;
	NSMutableDictionary* mAvailableFonts;

}
+(float)unitsPerInch:(int)arg1 ;
-(void)dealloc;
-(id)currentState;
-(id).cxx_construct;
-(id)initWithCanvas:(CGRect)arg1 ;
-(void)setHorizontalDpi:(int)arg1 verticalDpi:(int)arg2 ;
-(id)objectTable;
-(CGRect)canvas;
-(void)fillPath:(id)arg1 brush:(id)arg2 ;
-(void)strokePath:(id)arg1 pen:(id)arg2 ;
-(void)saveGraphicsStateWithId:(unsigned)arg1 ;
-(void)restoreGraphicsStateOrEndContainerWithId:(unsigned)arg1 ;
-(void)beginContainerWithId:(unsigned)arg1 boundsInParent:(CGRect)arg2 bounds:(CGRect)arg3 boundsUnit:(int)arg4 ;
-(void)beginContainerNoParamsWithId:(unsigned)arg1 ;
-(CGAffineTransform)pageTransformWithScale:(float)arg1 unit:(int)arg2 ;
-(BOOL)areThereOpenContainers;
-(id)fontNameForUppercaseFontName:(id)arg1 ;
-(float)pixelsPerUnit:(int)arg1 direction:(int)arg2 ;
-(void)beginContainerWithId:(unsigned)arg1 containerTransform:(CGAffineTransform)arg2 ;
@end

