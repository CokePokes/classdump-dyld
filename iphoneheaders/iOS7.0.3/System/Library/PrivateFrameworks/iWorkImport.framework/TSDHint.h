/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSDHint <NSObject>
@optional
-(BOOL)isFirstHint;
-(CGSize*)effectiveSize;
-(CGSize*)maximumSize;

@required
+(Class)archivedHintClass;
-(BOOL)overlapsWithSelection:(id)arg1;
-(void)offsetByDelta:(int)arg1;
-(id)firstChildHint;
-(id)lastChildHint;
@end

