/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray;

@interface MNBTAManager : NSObject {

	NSMutableArray* _jobs;

}
+(id)sharedManager;
-(void)addJob:(id)arg1 ;
-(void)removeJob:(id)arg1 ;
-(void)_jobEvent:(id)arg1 name:(id)arg2 ;
-(id)_jobForName:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

