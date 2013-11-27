/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDInsertionContext.h>

@interface TSDDragInsertionContext : TSDInsertionContext {

	CGPoint mPreferredCenter;
	BOOL mPreferredCenterRequired;
	BOOL mShouldEndEditing;
	BOOL mFromDragToInsertController;
	BOOL mInsertWillBeDiscarded;

}
-(BOOL)shouldEndEditing;
-(id)initWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 shouldEndEditing:(BOOL)arg3 fromDragToInsertController:(BOOL)arg4 insertWillBeDiscarded:(BOOL)arg5 ;
-(BOOL)hasPreferredCenter;
-(BOOL)isPreferredCenterRequired;
-(CGPoint)preferredCenter;
-(BOOL)insertFloating;
-(BOOL)insertFromDrag;
-(BOOL)fromDragToInsertController;
-(BOOL)insertWillBeDiscarded;
-(id)init;
-(BOOL)isInteractive;
@end

