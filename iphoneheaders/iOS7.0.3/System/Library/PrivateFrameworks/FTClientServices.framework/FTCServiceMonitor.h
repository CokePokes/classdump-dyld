/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface FTCServiceMonitor : NSObject {

	int _availability;
	int _type;
	int _token;

}

@property (nonatomic,readonly) int serviceType; 
-(id)initWithServiceType:(int)arg1 ;
-(void)dealloc;
-(int)serviceType;
-(int)serviceAvailability;
-(void)updateAvailability;
-(void)_updateAvailability;
-(void)_postAvailability:(int)arg1 ;
-(void)handleActiveAccountsChanged:(id)arg1 ;
@end

