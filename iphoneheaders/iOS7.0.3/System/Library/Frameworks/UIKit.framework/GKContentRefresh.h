/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GKContentRefresh <NSObject>
@optional
-(void)_gkForceNextContentUpdate;
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/ id)arg1;

@required
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/ id)arg1;
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
@end

