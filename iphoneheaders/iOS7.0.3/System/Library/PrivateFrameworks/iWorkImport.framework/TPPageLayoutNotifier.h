/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TPPageControllerLayoutObserver.h>

@class TPPageController;

@interface TPPageLayoutNotifier : NSObject <TPPageControllerLayoutObserver> {

	TPPageController* _pageController;

}
-(id)initWithPageController:(id)arg1 ;
-(void)pageController:(id)arg1 didLayoutPageAtIndex:(unsigned)arg2 sectionIndex:(unsigned)arg3 syncing:(BOOL)arg4 ;
-(void)dealloc;
-(void)teardown;
@end

