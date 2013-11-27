/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDictionary;

@interface AFAccount : NSObject {

	BOOL _isActive;
	NSString* _identifier;
	NSString* _label;
	NSString* _assistantIdentifier;
	NSString* _speechIdentifier;
	NSString* _hostname;
	NSString* _predefinedServer;
	NSString* _aceHost;
	NSString* _group;
	NSDictionary* _lastSyncDates;
	NSString* _localeIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * assistantIdentifier;              //@synthesize assistantIdentifier=_assistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * speechIdentifier;                 //@synthesize speechIdentifier=_speechIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostname;                         //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * predefinedServer;                 //@synthesize predefinedServer=_predefinedServer - In the implementation block
@property (nonatomic,copy) NSString * aceHost;                          //@synthesize aceHost=_aceHost - In the implementation block
@property (nonatomic,copy) NSString * group;                            //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSDictionary * lastSyncDates;                //@synthesize lastSyncDates=_lastSyncDates - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                 //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                           //@synthesize isActive=_isActive - In the implementation block
-(id)description;
-(BOOL)isActive;
-(id)identifier;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)localeIdentifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setGroup:(id)arg1 ;
-(id)group;
-(void)setAssistantIdentifier:(id)arg1 ;
-(void)setSpeechIdentifier:(id)arg1 ;
-(void)setPredefinedServer:(id)arg1 ;
-(void)setAceHost:(id)arg1 ;
-(void)setLastSyncDates:(id)arg1 ;
-(id)initWithMessageDictionary:(id)arg1 ;
-(id)messageDictionary;
-(id)assistantIdentifier;
-(id)speechIdentifier;
-(id)predefinedServer;
-(id)aceHost;
-(id)lastSyncDates;
-(void)setHostname:(id)arg1 ;
-(void).cxx_destruct;
-(id)hostname;
-(void)setLocaleIdentifier:(id)arg1 ;
@end

