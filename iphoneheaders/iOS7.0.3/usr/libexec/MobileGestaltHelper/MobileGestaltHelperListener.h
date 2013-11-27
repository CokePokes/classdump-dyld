/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/MobileGestaltHelper
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <MobileGestaltHelper/MobileGestaltHelper.h>

@interface MobileGestaltHelperListener : NSObject <NSXPCListenerDelegate, MobileGestaltHelper>
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)getSpringboardRegionOverride:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)getLocalizedStringForFD:(id)arg1 key:(id)arg2 value:(id)arg3 tableName:(id)arg4 reply:(/*^block*/ id)arg5 ;
-(void)getServerAnswerForQuestion:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)getAppleTVMode:(/*^block*/ id)arg1 ;
@end

