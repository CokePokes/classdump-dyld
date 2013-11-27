/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIElementProtocol <NSObject>
@required
+(void)applyElementAttributeCacheScheme:(int)arg1;
+(id)uiElementAtCoordinate:(CGPoint)arg1;
-(BOOL)isValid;
-(id)objectWithAXAttribute:(int)arg1 parameter:(void*)arg2;
-(void)enableCache:(BOOL)arg1;
-(void)updateCacheWithAttributes:(id)arg1;
-(CGPoint*)pointWithAXAttribute:(int)arg1;
-(id)numberWithAXAttribute:(int)arg1;
-(CGRect*)rectWithAXAttribute:(int)arg1;
-(id)uiElementsWithAttribute:(int)arg1 parameter:(void*)arg2;
-(void)setAXAttribute:(int)arg1 withNumber:(id)arg2;
-(void)setAXAttribute:(int)arg1 withObject:(id)arg2 synchronous:(BOOL)arg3;
-(void)updateCache:(int)arg1;
-(NSRange*)rangeWithAXAttribute:(int)arg1;
-(NSRange*)nextCursorRangeInDirection:(unsigned)arg1 unit:(unsigned)arg2 outputRange:(NSRange*)arg3 currentCursorRange:(NSRange)arg4;
-(BOOL)isValidForApplication:(id)arg1;
-(id)arrayWithAXAttribute:(int)arg1;
-(id)stringWithAXAttribute:(int)arg1;
-(BOOL)boolWithAXAttribute:(int)arg1;
-(CGPathRef)pathWithAXAttribute:(int)arg1;
-(id)objectWithAXAttribute:(int)arg1;
-(id)uiElementsWithAttribute:(int)arg1;
-(BOOL)canPerformAXAction:(int)arg1;
-(BOOL)performAXAction:(int)arg1;
-(BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
-(void)disableCache;
-(id)nextElementsWithCount:(unsigned)arg1;
-(id)previousElementsWithCount:(unsigned)arg1;
-(void)setAXAttribute:(int)arg1 withBOOL:(BOOL)arg2;
-(void)setAXAttribute:(int)arg1 withString:(id)arg2;
-(void)setAXAttribute:(int)arg1 withLong:(long)arg2;
-(void)setAXAttribute:(int)arg1 withFloat:(float)arg2;
-(void)setAXAttribute:(int)arg1 withPoint:(CGPoint)arg2;
-(void)setAXAttribute:(int)arg1 withSize:(CGSize)arg2;
-(void)setAXAttribute:(int)arg1 withRange:(NSRange)arg2;
-(void)setAXAttribute:(int)arg1 withUIElement:(id)arg2;
-(void)setAXAttribute:(int)arg1 withUIElementArray:(id)arg2;
-(void)setAXAttribute:(int)arg1 withArray:(id)arg2;
-(void)setAXAttribute:(int)arg1 withObject:(id)arg2;
-(NSRange*)nextCursorRangeInDirection:(unsigned)arg1 unit:(unsigned)arg2 outputRange:(NSRange*)arg3;
-(BOOL)isMockElement;
-(int)pid;
@end

