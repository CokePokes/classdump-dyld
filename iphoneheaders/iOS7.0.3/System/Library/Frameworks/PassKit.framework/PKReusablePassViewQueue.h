/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject {

	NSMutableSet* _passViews;

}
-(id)initWithCount:(unsigned)arg1 ;
-(id)dequeueReusablePassView;
-(void)enqueueReusablePassView:(id)arg1 ;
-(void)dealloc;
@end

