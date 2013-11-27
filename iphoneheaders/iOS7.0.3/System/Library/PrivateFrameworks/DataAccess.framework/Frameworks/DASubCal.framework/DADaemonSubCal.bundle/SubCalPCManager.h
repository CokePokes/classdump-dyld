/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DADaemonSupport/PCConnectionManagerDelegate.h>

@protocol SubCalPCManagerDelegate;
@class PCConnectionManager, ;

@interface SubCalPCManager : NSObject <PCConnectionManagerDelegate> {

	PCConnectionManager* _pcManager;
	<SubCalPCManagerDelegate>* _delegate;

}
-(void)dealloc;
-(void)stop;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
-(id)initWithDelegate:(id)arg1 serviceIdentifier:(id)arg2 ;
-(void)restart;
@end

