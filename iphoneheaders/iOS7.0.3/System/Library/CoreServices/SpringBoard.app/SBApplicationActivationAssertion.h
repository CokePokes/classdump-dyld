/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SBApplication, NSString;

@interface SBApplicationActivationAssertion : NSObject {

	SBApplication* _app;
	NSString* _name;

}

@property (nonatomic,readonly) SBApplication * application;              //@synthesize app=_app - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
-(id)initWithApplication:(id)arg1 name:(id)arg2 ;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)application;
@end

