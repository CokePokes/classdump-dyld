/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMFoundation/IMDirectlyObservableObject.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, IMAccount, NSDictionary, NSDate, NSSet, IMPerson, NSArray, NSData, NSAttributedString, NSMutableArray, NSURL, IMServiceImpl;

@interface IMHandle : IMDirectlyObservableObject <NSCoding> {

	NSString* _guid;
	IMAccount* _account;
	NSString* _id;
	NSString* _uncanonicalID;
	NSString* _countryCode;
	NSDictionary* _otherServiceIDs;
	NSDate* _idleSince;
	NSDate* _feedUpdatedDate;
	NSDictionary* _extraProps;
	NSDictionary* _certs;
	NSSet* _groups;
	IMPerson* _person;
	NSString* _abFirstName;
	NSString* _abLastName;
	NSString* _abFullName;
	NSString* _abNickname;
	NSString* _displayID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _nickname;
	NSArray* _emails;
	NSString* _normalizedFormOfID;
	NSString* _IDWithoutResource;
	NSString* _IDWithTrimmedServer;
	NSString* _uniqueName;
	NSData* _pictureData;
	NSString* _statusMsg;
	NSString* _processedStatusMsg;
	NSAttributedString* _richStatusMsg;
	NSDate* _whenWentOffline;
	NSDate* _whenStatusChanged;
	NSString* _prevStatusMsg;
	NSMutableArray* _notificationNameQueue;
	NSMutableArray* _notificationQueue;
	NSURL* _statusURL;
	CFPhoneNumberRef _phoneNumberRef;
	NSString* _formattedNumber;
	BOOL _hasCheckedPhoneNumber;
	unsigned _status;
	unsigned _prevStatus;
	unsigned long long _capabilities;
	unsigned _authRequestStatus;
	unsigned _resourceIndex;
	int _IDStatus;
	BOOL _isRetainingAccount;
	BOOL _blockNotifications;
	BOOL _hasTemporaryWatch;
	BOOL _isMobile;
	BOOL _isBot;
	BOOL _isAnonymous;
	BOOL _beingTornDown;
	BOOL _hasCheckedCardMap;
	BOOL _isRegistered;
	int _priority;
	int _addressBookIdentifier;
	int _notificationQueueCount;
	NSURL* _statusMessageURL;

}

@property (nonatomic,readonly) BOOL hasNoConferencingCaps; 
@property (nonatomic,readonly) NSString * ID;                                                   //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * originalID;                                             //@synthesize uncanonicalID=_uncanonicalID - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                                            //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSString * displayID; 
@property (nonatomic,readonly) NSString * normalizedID; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * uniqueName;                                           //@synthesize uniqueName=_uniqueName - In the implementation block
@property (nonatomic,readonly) NSString * nameAndID; 
@property (nonatomic,readonly) NSString * nameAndEmail; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * nickname; 
@property (nonatomic,readonly) IMAccount * account;                                             //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) IMServiceImpl * service; 
@property (assign,nonatomic) int IDStatus;                                                      //@synthesize IDStatus=_IDStatus - In the implementation block
@property (nonatomic,readonly) NSURL * statusURL;                                               //@synthesize statusURL=_statusURL - In the implementation block
@property (nonatomic,retain) NSURL * statusMessageAsURL;                                        //@synthesize statusMessageURL=_statusMessageURL - In the implementation block
@property (nonatomic,readonly) unsigned status; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSString * nameOfStatus; 
@property (nonatomic,readonly) NSAttributedString * richStatusMessage;                          //@synthesize richStatusMsg=_richStatusMsg - In the implementation block
@property (nonatomic,readonly) NSString * offlineString; 
@property (nonatomic,readonly) unsigned previousStatus;                                         //@synthesize prevStatus=_prevStatus - In the implementation block
@property (nonatomic,readonly) NSString * previousStatusMessage;                                //@synthesize prevStatusMsg=_prevStatusMsg - In the implementation block
@property (nonatomic,readonly) double timeSinceWentOffline; 
@property (nonatomic,readonly) double timeSinceStatusChanged; 
@property (nonatomic,readonly) unsigned authRequestStatus;                                      //@synthesize authRequestStatus=_authRequestStatus - In the implementation block
@property (nonatomic,readonly) double idleTime; 
@property (nonatomic,readonly) NSString * idleString; 
@property (nonatomic,readonly) NSDate * feedUpdatedDate;                                        //@synthesize feedUpdatedDate=_feedUpdatedDate - In the implementation block
@property (assign,nonatomic) int priority;                                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL canBeAdded; 
@property (nonatomic,readonly) BOOL canBeDeleted; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) BOOL isBot;                                                      //@synthesize isBot=_isBot - In the implementation block
@property (nonatomic,readonly) BOOL isBuddy; 
@property (nonatomic,readonly) BOOL isLoginIMHandle; 
@property (nonatomic,readonly) BOOL isVisiblyBlocked; 
@property (assign,setter=setBlocked:,nonatomic) BOOL isBlocked; 
@property (nonatomic,readonly) BOOL isAnonymous; 
@property (nonatomic,readonly) BOOL isSystemUser; 
@property (nonatomic,readonly) BOOL isMobile;                                                   //@synthesize isMobile=_isMobile - In the implementation block
@property (nonatomic,readonly) BOOL isLoginIMHandleForAnyAccount; 
@property (nonatomic,readonly) NSString * mobileDeviceName; 
@property (nonatomic,readonly) BOOL watchingIMHandle; 
@property (nonatomic,readonly) NSData * pictureData;                                            //@synthesize pictureData=_pictureData - In the implementation block
@property (nonatomic,retain) NSDictionary * otherServiceIDs;                                    //@synthesize otherServiceIDs=_otherServiceIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * extraProperties;                                  //@synthesize extraProps=_extraProps - In the implementation block
@property (nonatomic,readonly) NSString * email; 
@property (nonatomic,readonly) NSArray * emails; 
@property (setter=setIMPerson:,nonatomic,retain) IMPerson * person;                             //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) int addressBookIdentifier;                                       //@synthesize addressBookIdentifier=_addressBookIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * groupsArray; 
@property (nonatomic,readonly) NSSet * groups; 
@property (nonatomic,readonly) BOOL hasOtherSiblings; 
@property (nonatomic,readonly) NSSet * siblings; 
@property (nonatomic,readonly) NSArray * siblingsArray; 
@property (nonatomic,readonly) NSArray * accountSiblingsArray; 
@property (nonatomic,readonly) NSArray * existingAccountSiblingsArray; 
@property (nonatomic,readonly) id bestSibling; 
@property (nonatomic,readonly) id bestAccountSibling; 
@property (nonatomic,readonly) BOOL isConferenceAvailable; 
@property (nonatomic,readonly) BOOL hasConferencing; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (nonatomic,readonly) BOOL hasMultiwayVideo; 
@property (nonatomic,readonly) BOOL hasAudio; 
@property (nonatomic,readonly) BOOL hasMultiwayAudio; 
@property (nonatomic,readonly) NSString * resource; 
@property (nonatomic,readonly) NSString * IDWithoutResource; 
@property (nonatomic,readonly) NSString * server; 
@property (nonatomic,readonly) NSString * accountTypeName; 
@property (nonatomic,readonly) NSString * guid;                                                 //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * _displayNameWithAbbreviation; 
@property (nonatomic,readonly) BOOL supportsARDMuxing; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,readonly) BOOL hasResource; 
@property (nonatomic,readonly) id imHandleWithoutResource; 
@property (nonatomic,readonly) id existingIMHandleWithoutResource; 
@property (nonatomic,readonly) BOOL hasServer; 
@property (nonatomic,readonly) IMPerson * _cachedPerson; 
@property (nonatomic,readonly) NSArray * dependentIMHandles; 
@property (nonatomic,readonly) BOOL areABPropertiesRecent; 
@property (setter=_setIsRegisteredWithRegistrar:) BOOL _isRegisteredWithRegistrar;              //@synthesize isRegistered=_isRegistered - In the implementation block
@property (nonatomic,retain) NSData * customPictureData; 
+(id)filterIMHandlesForBestAccountSiblings:(id)arg1 ;
+(id)imHandlesForIMPerson:(id)arg1 ;
+(void)_loadStatusNames;
+(id)bestIMHandleInArray:(id)arg1 ;
+(id)nameOfStatus:(unsigned)arg1 ;
+(void)setNotificationsEnabled:(BOOL)arg1 ;
+(BOOL)notificationsEnabled;
+(id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2 ;
-(BOOL)hasNoConferencingCaps;
-(id)groups;
-(BOOL)isBlocked;
-(id)service;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_registerForNotifications;
-(oneway void)release;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned)hash;
-(id)description;
-(id)server;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)name;
-(int)priority;
-(id)uniqueName;
-(void)setPriority:(int)arg1 ;
-(unsigned)status;
-(id)person;
-(void)_sendRemoteLogDumpRequest:(id)arg1 ;
-(BOOL)isAccountSiblingOf:(id)arg1 ;
-(int)compareIDs:(id)arg1 ;
-(BOOL)matchesIMHandle:(id)arg1 ;
-(id)imHandleForOtherAccount:(id)arg1 ;
-(int)addressBookIdentifier;
-(id)originalID;
-(id)displayNameForChat:(id)arg1 ;
-(id)_displayNameWithAbbreviation;
-(int)IDStatus;
-(void)requestIDStatus;
-(id)nameAndID;
-(void)setEmail:(id)arg1 ;
-(id)ID;
-(id)bestAccountSibling;
-(id)publicAPIPropertiesDictionary;
-(void)_removeAccountReference:(id)arg1 ;
-(int)compareAccountNames:(id)arg1 ;
-(unsigned)authRequestStatus;
-(BOOL)isBuddy;
-(void)setCustomPictureData:(id)arg1 key:(id)arg2 ;
-(void)beginNotificationQueue;
-(void)releaseNotificationQueue;
-(void)_stopRetainingAccount:(id)arg1 ;
-(void)postNotificationName:(id)arg1 ;
-(void)propertiesChanged:(id)arg1 ;
-(void)_updateOriginalID:(id)arg1 ;
-(void)_setOriginalID:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(BOOL)arg3 knownIDStatus:(int)arg4 ;
-(BOOL)_setCapabilities:(unsigned long long)arg1 ;
-(id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(BOOL)arg3 ;
-(id)resource;
-(id)otherServiceIDs;
-(BOOL)watchingIMHandle;
-(void)setHasTemporaryWatch:(BOOL)arg1 ;
-(BOOL)resetABPerson;
-(id)_cachedPerson;
-(void)setIMPerson:(id)arg1 ;
-(void)statusChanged:(unsigned)arg1 message:(id)arg2 ;
-(BOOL)isLoginIMHandle;
-(void)statusChanged:(unsigned)arg1 ;
-(int)compareStatus:(id)arg1 ;
-(void)_setCountryCode:(id)arg1 ;
-(void)_setOriginalID:(id)arg1 updateSiblings:(BOOL)arg2 ;
-(id)existingChatSiblingsArray;
-(void)setAnonymous:(BOOL)arg1 ;
-(BOOL)isAnonymous;
-(id)groupsArray;
-(id)bestIMHandleForService:(id)arg1 ;
-(BOOL)shouldQueueNotifications;
-(void)_postNotification:(id)arg1 ;
-(id)existingIMHandleWithoutResource;
-(BOOL)areABPropertiesRecent;
-(void)resetABProperties;
-(void)_clearABProperties;
-(void)resetUniqueName;
-(void)sendNotificationABPersonChanged;
-(BOOL)_hasABName;
-(BOOL)_hasServiceNameProperties;
-(id)_formattedPhoneNumber;
-(BOOL)hasServer;
-(id)_IDWithTrimmedServer;
-(id)_nameUsingUnique:(BOOL)arg1 ;
-(id)_abPersonCreateIfNeeded;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 ;
-(void)setEmails:(id)arg1 andUpdateABPerson:(BOOL)arg2 ;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(BOOL)arg4 ;
-(void)setEmail:(id)arg1 andUpdateABPerson:(BOOL)arg2 ;
-(id)extraProperties;
-(BOOL)hasResource;
-(id)IDWithoutResource;
-(id)accountSiblingsArray;
-(void)_createPhoneNumberRefIfNeeded;
-(BOOL)isMobile;
-(BOOL)supportsARDMuxing;
-(double)timeSinceWentOffline;
-(id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4 ;
-(id)existingAccountSiblingsArray;
-(BOOL)isBetterThanIMHandle:(id)arg1 ;
-(id)siblings;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(void)_setExtraProperties:(id)arg1 ;
-(BOOL)_isMyIDInList:(id)arg1 ;
-(id)imHandleWithoutResource;
-(void)setStatus:(unsigned)arg1 message:(id)arg2 richMessage:(id)arg3 ;
-(void)_updateStatusBasedOnAuthRequestStatus;
-(double)timeSinceStatusChanged;
-(double)idleTime;
-(void)_filterStatusMessage;
-(void)_clearStatusMessageURLCache;
-(id)_nameForComparisonPreferFirst:(BOOL)arg1 ;
-(id)normalizedID;
-(id)chatSiblingsArray;
-(id)_chatSiblingsArray;
-(BOOL)hasVideo;
-(BOOL)hasAudio;
-(id)pictureData;
-(void)customPictureDataChanged:(id)arg1 key:(id)arg2 ;
-(void)_unregisterFromIMPersonPictureChanges;
-(void)_registerForIMPersonPictureChanges;
-(id)initWithAccount:(id)arg1 ID:(id)arg2 ;
-(id)_handleInfo;
-(void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(BOOL)arg3 ;
-(id)nameAndEmail;
-(void)clearABPerson;
-(void)_clearABPersonLookup;
-(void)setLocalNickname:(id)arg1 ;
-(BOOL)canBeAdded;
-(BOOL)isSystemUser;
-(void)setIsMobile:(BOOL)arg1 ;
-(void)setIsBot:(BOOL)arg1 ;
-(id)mobileDeviceName;
-(BOOL)isLoginIMHandleForAnyAccount;
-(CFPhoneNumberRef)phoneNumberRef;
-(void)requestValueOfProperty:(id)arg1 ;
-(void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ;
-(id)bestIMHandleForAccount:(id)arg1 ;
-(id)bestSibling;
-(BOOL)isVisiblyBlocked;
-(void)setBlocked:(BOOL)arg1 ;
-(unsigned)sortOrderInGroup:(id)arg1 ;
-(id)accountTypeName;
-(id)dependentIMHandles;
-(void)setAuthRequestStatus:(unsigned)arg1 ;
-(void)setPersonStatus:(unsigned)arg1 ;
-(void)statusMessageChanged:(id)arg1 ;
-(id)nameOfStatus;
-(void)_setIDStatus:(int)arg1 ;
-(void)setIdleSince:(id)arg1 ;
-(void)setFeedUpdatedDate:(id)arg1 ;
-(void)setStatusURLFromString:(id)arg1 ;
-(id)offlineString;
-(id)idleString;
-(int)compareFirstNames:(id)arg1 ;
-(int)compareLastNames:(id)arg1 ;
-(int)compareNormalizedIDs:(id)arg1 ;
-(BOOL)hasOtherSiblings;
-(id)siblingsArray;
-(BOOL)isSiblingOf:(id)arg1 ;
-(BOOL)_isChatSiblingOf:(id)arg1 ;
-(id)_chatSiblings;
-(id)_bestChatSibling;
-(BOOL)hasConferencing;
-(BOOL)isConferenceAvailable;
-(BOOL)hasMultiwayVideo;
-(BOOL)hasMultiwayAudio;
-(void)_sendAutomationData:(id)arg1 properties:(id)arg2 ;
-(void)_sendCommand:(id)arg1 properties:(id)arg2 ;
-(void)_imPersonPictureChanged:(id)arg1 ;
-(id)customPictureData;
-(void)setCustomPictureData:(id)arg1 ;
-(BOOL)_isRegisteredWithRegistrar;
-(void)_setIsRegisteredWithRegistrar:(BOOL)arg1 ;
-(id)statusURL;
-(unsigned)previousStatus;
-(id)feedUpdatedDate;
-(id)previousStatusMessage;
-(id)richStatusMessage;
-(void)setOtherServiceIDs:(id)arg1 ;
-(BOOL)isBot;
-(void)setIDStatus:(int)arg1 ;
-(id)statusMessageAsURL;
-(void)setStatusMessageAsURL:(id)arg1 ;
-(void)_sendRemoteLogDumpRequest;
-(id)imHandleRegistrarGUID;
-(id)guid;
-(id)account;
-(BOOL)canBeDeleted;
-(unsigned long long)capabilities;
-(id)statusMessage;
-(void)setImageData:(id)arg1 ;
-(void)setUniqueName:(id)arg1 ;
-(id)countryCode;
-(id)firstName;
-(id)lastName;
-(id)fullName;
-(id)email;
-(id)emails;
-(void)setEmails:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasLocation;
-(id)displayID;
-(void)finalize;
-(BOOL)hasCapability:(unsigned long long)arg1 ;
-(id)nickname;
@end

