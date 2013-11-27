/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;
@class ;

@interface NSProgressProxy : NSProgress {

	<NSProgressPublisher>* _forwarder;
	BOOL _isOld;
	/*^block*/ id _unpublishingHandler;

}
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(void)publish;
-(void)unpublish;
-(void)acknowledgeWithSuccess:(BOOL)arg1 ;
-(void)prioritize;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setCancellable:(BOOL)arg1 ;
-(void)setPausable:(BOOL)arg1 ;
-(void)setPausingHandler:(/*^block*/ id)arg1 ;
-(BOOL)isOld;
-(void)setPrioritizable:(BOOL)arg1 ;
-(void)setPrioritizationHandler:(/*^block*/ id)arg1 ;
-(id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(BOOL)arg3 ;
-(void)_invokePublishingHandler:(/*^block*/ id)arg1 ;
-(void)_invokeUnpublishingHandler;
-(void)dealloc;
-(void)setCancellationHandler:(/*^block*/ id)arg1 ;
-(void)cancel;
-(void)pause;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setKind:(id)arg1 ;
@end

