/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ASDownloadDelegate <NSObject>
@property (assign,getter=isStalled,nonatomic) BOOL stalled; 
@required
-(BOOL)isStalled;
-(void)startDownload:(id)arg1 withOptions:(id)arg2 inState:(id)arg3;
-(BOOL)downloadIsInFlight:(id)arg1;
-(void)pauseDownload:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)resumeDownload:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)cancelDownload:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)setStalled:(BOOL)arg1;
-(void)updateOptionsForDownload:(id)arg1 options:(id)arg2;
@end

