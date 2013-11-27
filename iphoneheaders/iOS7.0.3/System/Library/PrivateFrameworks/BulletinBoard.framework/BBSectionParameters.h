/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSLock, BBSectionSubtypeParameters, NSMutableDictionary, NSString, BBSectionIcon;

@interface BBSectionParameters : NSObject <NSSecureCoding> {

	NSLock* _lock;
	BOOL _showsSubtitle;
	BOOL _usesVariableLayout;
	BOOL _orderSectionUsingRecencyDate;
	BOOL _showsDateInFloatingLockScreenAlert;
	BOOL _displaysCriticalBulletins;
	unsigned _messageNumberOfLines;
	BBSectionSubtypeParameters* _defaultSubtypeParameters;
	NSMutableDictionary* _allSubtypeParameters;
	NSString* _displayName;
	BBSectionIcon* _icon;
	NSString* _uniqueIdentifier;

}

@property (assign,nonatomic) BOOL showsSubtitle;                                                 //@synthesize showsSubtitle=_showsSubtitle - In the implementation block
@property (assign,nonatomic) BOOL usesVariableLayout;                                            //@synthesize usesVariableLayout=_usesVariableLayout - In the implementation block
@property (assign,nonatomic) unsigned messageNumberOfLines;                                      //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL orderSectionUsingRecencyDate;                                  //@synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate - In the implementation block
@property (assign,nonatomic) BOOL showsDateInFloatingLockScreenAlert;                            //@synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) BBSectionIcon * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL displaysCriticalBulletins;                                     //@synthesize displaysCriticalBulletins=_displaysCriticalBulletins - In the implementation block
@property (nonatomic,retain) BBSectionSubtypeParameters * defaultSubtypeParameters;              //@synthesize defaultSubtypeParameters=_defaultSubtypeParameters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allSubtypeParameters;                         //@synthesize allSubtypeParameters=_allSubtypeParameters - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)addSectionParametersToCache:(id)arg1 ;
+(void)removeSectionParametersFromCache:(id)arg1 ;
+(id)copyCachedSectionParametersWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setIcon:(id)arg1 ;
-(id)uniqueIdentifier;
-(id)displayName;
-(void)setUniqueIdentifier:(id)arg1 ;
-(BOOL)displaysCriticalBulletins;
-(void)setDisplaysCriticalBulletins:(BOOL)arg1 ;
-(void)setMessageNumberOfLines:(unsigned)arg1 ;
-(void)setDefaultSubtypeParameters:(id)arg1 ;
-(void)setAllSubtypeParameters:(id)arg1 ;
-(void)setShowsSubtitle:(BOOL)arg1 ;
-(void)setUsesVariableLayout:(BOOL)arg1 ;
-(void)setOrderSectionUsingRecencyDate:(BOOL)arg1 ;
-(void)setShowsDateInFloatingLockScreenAlert:(BOOL)arg1 ;
-(id)defaultSubtypeParameters;
-(id)allSubtypeParameters;
-(BOOL)showsSubtitle;
-(unsigned)messageNumberOfLines;
-(BOOL)usesVariableLayout;
-(BOOL)orderSectionUsingRecencyDate;
-(BOOL)showsDateInFloatingLockScreenAlert;
-(id)parametersForSubtype:(int)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)icon;
@end

