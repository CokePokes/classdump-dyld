/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSURL, NSString, NSDictionary;

@interface BBAction : NSObject <NSCopying, NSCoding> {

	/*^block*/ id _internalBlock;
	BOOL _deliverResponse;
	NSURL* _launchURL;
	NSString* _launchBundleID;
	BOOL _launchCanBypassPinLock;
	NSString* _activatePluginName;
	NSDictionary* _activatePluginContext;
	int _actionType;

}

@property (nonatomic,retain) NSURL * launchURL;                               //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy) NSString * launchBundleID;                         //@synthesize launchBundleID=_launchBundleID - In the implementation block
@property (assign,nonatomic) BOOL launchCanBypassPinLock;                     //@synthesize launchCanBypassPinLock=_launchCanBypassPinLock - In the implementation block
@property (nonatomic,copy) NSString * activatePluginName;                     //@synthesize activatePluginName=_activatePluginName - In the implementation block
@property (nonatomic,copy) NSDictionary * activatePluginContext;              //@synthesize activatePluginContext=_activatePluginContext - In the implementation block
@property (assign,nonatomic) BOOL canBypassPinLock; 
@property (nonatomic,copy) id internalBlock;                                  //@synthesize internalBlock=_internalBlock - In the implementation block
@property (assign,nonatomic) int actionType;                                  //@synthesize actionType=_actionType - In the implementation block
+(id)action;
+(id)actionWithCallblock:(/*^block*/ id)arg1 ;
+(id)actionWithLaunchURL:(id)arg1 callblock:(/*^block*/ id)arg2 ;
+(id)actionWithLaunchBundleID:(id)arg1 callblock:(/*^block*/ id)arg2 ;
+(id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2 ;
-(id)bundleID;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)url;
-(BOOL)deliverResponse:(id)arg1 ;
-(void)setCallblock:(/*^block*/ id)arg1 ;
-(void)setLaunchBundleID:(id)arg1 ;
-(id)initWithActivatePluginName:(id)arg1 activationContext:(id)arg2 ;
-(void)setActivatePluginName:(id)arg1 ;
-(void)setActivatePluginContext:(id)arg1 ;
-(void)setInternalBlock:(/*^block*/ id)arg1 ;
-(BOOL)launchCanBypassPinLock;
-(void)setLaunchCanBypassPinLock:(BOOL)arg1 ;
-(/*^block*/ id)internalBlock;
-(id)launchBundleID;
-(id)activatePluginName;
-(id)activatePluginContext;
-(BOOL)canBypassPinLock;
-(void)setCanBypassPinLock:(BOOL)arg1 ;
-(id)partialDescription;
-(BOOL)hasLaunchInfo;
-(BOOL)isURLLaunchAction;
-(BOOL)isAppLaunchAction;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(void)setLaunchURL:(id)arg1 ;
-(id)launchURL;
@end

