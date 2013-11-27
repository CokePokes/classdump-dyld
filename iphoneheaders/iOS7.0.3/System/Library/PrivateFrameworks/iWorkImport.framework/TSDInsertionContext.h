/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDInsertionContext : NSObject

@property (nonatomic,readonly) BOOL hasPreferredCenter; 
@property (getter=isPreferredCenterRequired,nonatomic,readonly) BOOL preferredCenterRequired; 
@property (nonatomic,readonly) CGPoint preferredCenter; 
@property (nonatomic,readonly) BOOL shouldEndEditing; 
@property (nonatomic,readonly) BOOL insertFloating; 
@property (nonatomic,readonly) BOOL insertFromDrag; 
@property (nonatomic,readonly) BOOL fromDragToInsertController; 
@property (nonatomic,readonly) BOOL insertWillBeDiscarded; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
+(id)dragInsertionContextWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 shouldEndEditing:(BOOL)arg3 fromDragToInsertController:(BOOL)arg4 insertWillBeDiscarded:(BOOL)arg5 ;
+(id)nonInteractiveInsertionContext;
+(id)nonInteractiveFloatingInsertionContext;
+(id)dragInsertionContextWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 fromDragToInsertController:(BOOL)arg3 insertWillBeDiscarded:(BOOL)arg4 ;
-(BOOL)shouldEndEditing;
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

