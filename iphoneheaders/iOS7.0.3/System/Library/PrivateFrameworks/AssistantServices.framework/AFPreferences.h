/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AFPreferences : NSObject {

	BOOL _registeredForInternalPrefs;
	BOOL _registeredForLanguageCode;
	BOOL _registeredForOutputVoice;
	NSObject<OS_dispatch_queue>* _navTokenQueue;
	BOOL _navTokenIsValid;
	int _navToken;

}
+(id)sharedPreferences;
-(void)dealloc;
-(id)init;
-(void)synchronize;
-(BOOL)dictationIsEnabled;
-(id)languageCode;
-(id)birthCertificateDataForLanguageCode:(id)arg1 ;
-(id)outputVoice;
-(void)_registerForInteralPrefs;
-(void)_registerForLanguageCode;
-(void)_registerForOutputVoice;
-(void)setOutputVoice:(id)arg1 ;
-(void)_registerForNavStatusIfNeeded;
-(void)setBirthCertificateData:(id)arg1 forLanguageCode:(id)arg2 ;
-(id)whitelistedLanguages;
-(void)_preferencesDidChangeExternally;
-(void)_internalPreferencesDidChangeExternally;
-(void)_languageCodeDidChangeExternally;
-(void)_ouputVoiceDidChangeExternally;
-(void)_setAssistantIsEnabledLocal:(BOOL)arg1 ;
-(void)_setDictationIsEnabledLocal:(BOOL)arg1 ;
-(void)setAssistantIsEnabled:(BOOL)arg1 ;
-(void)setDictationIsEnabled:(BOOL)arg1 ;
-(int)bugReportingMode;
-(void)setBugReportingMode:(int)arg1 ;
-(BOOL)debugButtonIsEnabled;
-(void)setDebugButtonIsEnabled:(BOOL)arg1 ;
-(int)handsFreeMode;
-(void)setHandsFreeMode:(int)arg1 ;
-(BOOL)manualEndpointingEnabled;
-(void)setManualEndpointingEnabled:(BOOL)arg1 ;
-(BOOL)disableAssistantWhilePasscodeLocked;
-(void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1 ;
-(BOOL)shouldShowReadyForLanguageCode:(id)arg1 ;
-(void)didShowReadyForLanguageCode:(id)arg1 ;
-(void)setShouldShowReadyForLanguageCode:(id)arg1 ;
-(void)synchronizeVoiceServicesLanguageCode;
-(id)valueForSessionContextPreferenceKey:(id)arg1 ;
-(void)setValue:(id)arg1 forSessionContextKey:(id)arg2 ;
-(id)languagesMissingBirthCertificates;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(BOOL)fileLoggingIsEnabled;
-(BOOL)assistantIsEnabled;
-(void)setLanguageCode:(id)arg1 ;
-(void).cxx_destruct;
@end

