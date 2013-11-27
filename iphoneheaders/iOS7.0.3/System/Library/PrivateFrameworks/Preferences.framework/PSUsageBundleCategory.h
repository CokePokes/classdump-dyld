/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PSUsageBundleApp, NSString;

@interface PSUsageBundleCategory : NSObject {

	PSUsageBundleApp* _usageBundleApp;
	NSString* _identifier;
	NSString* _name;

}

@property (assign,nonatomic) PSUsageBundleApp * usageBundleApp;              //@synthesize usageBundleApp=_usageBundleApp - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)usageBundleApp;
-(void)setUsageBundleApp:(id)arg1 ;
@end

