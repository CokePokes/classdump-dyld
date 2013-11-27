/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileCoordinatorDelegate.h>
#import <iWorkImport/TSPObjectDelegate.h>
#import <iWorkImport/TSPLazyReferenceDelegate.h>
#import <iWorkImport/TSPSupportDirectoryDelegate.h>
#import <iWorkImport/TSPDocumentResourceDownloader.h>
#import <iWorkImport/TSPPassphraseConsumer.h>

@protocol OS_dispatch_queue, OS_dispatch_group, TSPObjectContextDelegate, TSPPackage;
@class NSString, NSData, SFUCryptoKey, NSURL, TSPDocumentProperties, NSMapTable, NSObject, NSRecursiveLock, TSPDocumentResourceDataProvider, TSPDocumentSaveOperationState, TSPPackageWriteCoordinator, NSMutableArray, TSUTemporaryDirectory, TSPObject, , TSPDocumentResourceManager, TSPComponentManager, TSPDataManager, TSPSupportManager, TSPObjectContainer, NSUUID;

@interface TSPObjectContext : NSObject <TSPFileCoordinatorDelegate, TSPObjectDelegate, TSPLazyReferenceDelegate, TSPSupportDirectoryDelegate, TSPDocumentResourceDownloader, TSPPassphraseConsumer> {

	long long _lastObjectIdentifier;
	long long _modifyObjectToken;
	int _modifyObjectCount;
	unsigned _mode;
	SFUCryptoKey* _decryptionKey;
	NSURL* _documentURL;
	NSURL* _supportURL;
	TSPDocumentProperties* _documentProperties;
	NSMapTable* _objects;
	NSObject<OS_dispatch_queue>* _objectsQueue;
	NSObject<OS_dispatch_queue>* _writeQueue;
	NSRecursiveLock* _readLock;
	NSObject<OS_dispatch_queue>* _documentStateQueue;
	NSObject<OS_dispatch_queue>* _loadObserversQueue;
	NSObject<OS_dispatch_queue>* _runLoadObserversQueue;
	NSObject<OS_dispatch_queue>* _documentResourceDataProviderQueue;
	TSPDocumentResourceDataProvider* _documentResourceDataProvider;
	TSPDocumentSaveOperationState* _saveOperationState;
	TSPPackageWriteCoordinator* _packageWriteCoordinator;
	NSMutableArray* _pasteboardWriteCoordinators;
	BOOL _isWaitingForEndSave;
	NSObject<OS_dispatch_group>* _pendingEndSaveGroup;
	NSObject<OS_dispatch_group>* _outstandingReadsGroup;
	NSObject<OS_dispatch_queue>* _temporaryDirectoryQueue;
	TSUTemporaryDirectory* _temporaryDirectory;
	hash_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *> > >* _loadObservers;
	TSPObject* _supportObject;
	TSPPackageWriteCoordinator* _supportWriteCoordinator;
	NSString* _savedPassphrase;
	BOOL _shouldSavePassphrase;
	BOOL _isDocumentModified;
	BOOL _isSupportModified;
	BOOL _isPasswordProtected;
	NSString* _documentPasswordHint;
	TSPObject* _documentObject;
	<TSPObjectContextDelegate>* _delegate;
	TSPDocumentResourceDataProvider* _gilligan_documentResourceDataProvider;
	TSPDocumentResourceManager* _documentResourceManager;
	TSPComponentManager* _componentManager;
	TSPDataManager* _dataManager;
	TSPSupportManager* _supportManager;
	<TSPPackage>* _documentPackage;
	<TSPPackage>* _supportPackage;
	TSPObjectContainer* _documentObjectContainer;
	TSPObjectContainer* _supportObjectContainer;
	NSData* _passwordVerifier;

}

@property (nonatomic,readonly) NSURL * documentURL; 
@property (assign,nonatomic) BOOL isDocumentModified;                                                              //@synthesize isDocumentModified=_isDocumentModified - In the implementation block
@property (assign,nonatomic) BOOL isSupportModified;                                                               //@synthesize isSupportModified=_isSupportModified - In the implementation block
@property (assign,nonatomic) BOOL isPasswordProtected;                                                             //@synthesize isPasswordProtected=_isPasswordProtected - In the implementation block
@property (nonatomic,copy) NSString * documentPasswordHint;                                                        //@synthesize documentPasswordHint=_documentPasswordHint - In the implementation block
@property (nonatomic,readonly) TSPDocumentProperties * documentProperties;                                         //@synthesize documentProperties=_documentProperties - In the implementation block
@property (nonatomic,readonly) TSPObject * documentObject;                                                         //@synthesize documentObject=_documentObject - In the implementation block
@property (assign,nonatomic,__weak) <TSPObjectContextDelegate> * delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SFUCryptoKey * decryptionKey; 
@property (nonatomic,readonly) NSUUID * documentUUID; 
@property (nonatomic,readonly) NSUUID * versionUUID; 
@property (nonatomic,retain) TSPObject * supportObject; 
@property (nonatomic,retain) TSPDocumentResourceDataProvider * gilligan_documentResourceDataProvider;              //@synthesize gilligan_documentResourceDataProvider=_gilligan_documentResourceDataProvider - In the implementation block
@property (nonatomic,readonly) BOOL ignoreDocumentSupport; 
@property (nonatomic,readonly) BOOL isDocumentSupportTemporary; 
@property (nonatomic,readonly) BOOL ignoreUnknownContentWhileReading; 
@property (nonatomic,readonly) BOOL ignoreVersionCheckingWhileReading; 
@property (nonatomic,readonly) BOOL ignoreDocumentResourcesWhileReading; 
@property (nonatomic,readonly) TSPDocumentResourceManager * documentResourceManager;                               //@synthesize documentResourceManager=_documentResourceManager - In the implementation block
@property (nonatomic,readonly) TSPComponentManager * componentManager;                                             //@synthesize componentManager=_componentManager - In the implementation block
@property (nonatomic,readonly) TSPDataManager * dataManager;                                                       //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,readonly) TSPSupportManager * supportManager;                                                 //@synthesize supportManager=_supportManager - In the implementation block
@property (nonatomic,readonly) <TSPPackage> * documentPackage;                                                     //@synthesize documentPackage=_documentPackage - In the implementation block
@property (nonatomic,readonly) <TSPPackage> * supportPackage;                                                      //@synthesize supportPackage=_supportPackage - In the implementation block
@property (nonatomic,retain) TSPObjectContainer * documentObjectContainer;                                         //@synthesize documentObjectContainer=_documentObjectContainer - In the implementation block
@property (nonatomic,retain) TSPObjectContainer * supportObjectContainer;                                          //@synthesize supportObjectContainer=_supportObjectContainer - In the implementation block
@property (nonatomic,readonly) BOOL documentHasCurrentFileFormatVersion; 
@property (assign,nonatomic) long long lastObjectIdentifier; 
@property (nonatomic,retain) NSData * passwordVerifier;                                                            //@synthesize passwordVerifier=_passwordVerifier - In the implementation block
@property (nonatomic,readonly) BOOL areNewExternalReferencesToDataAllowed; 
@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) BOOL needsDownload; 
@property (nonatomic,readonly) long long estimatedDownloadSize; 
@property (nonatomic,readonly) BOOL isEstimatedDownloadSizePrecise; 
@property (nonatomic,readonly) NSString * passphraseHint; 
@property (nonatomic,readonly) NSData * keychainGenericItem; 
@property (nonatomic,readonly) NSString * service; 
+(BOOL)isNativeFormatURL:(id)arg1 ;
+(BOOL)isTangierEditingFormatURL:(id)arg1 ;
+(id)supportBundleURLForUUID:(id)arg1 delegate:(id)arg2 ;
+(void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2 ;
+(BOOL)requestDownloadingDocumentResourcesForURL:(id)arg1 decryptionKey:(id)arg2 usingDataProvider:(id)arg3 ;
+(void)waitForPendingEndSaveGroup:(id)arg1 ;
+(id)updateDocumentUUIDForDocumentURL:(id)arg1 preserveOriginalDocumentSupport:(BOOL)arg2 coordinateWrite:(BOOL)arg3 filePresenter:(id)arg4 delegate:(id)arg5 error:(id*)arg6 ;
+(BOOL)canCreateInstanceFromURL:(id)arg1 ;
+(BOOL)isPassphraseRequiredToInitWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 passphrase:(id*)arg4 ;
+(void)removeDefaultSupportDirectory;
+(id)supportURLForDocumentURL:(id)arg1 coordinateRead:(BOOL)arg2 delegate:(id)arg3 error:(id*)arg4 ;
+(id)requestDownloadingDocumentResourcesForURL:(id)arg1 decryptionKey:(id)arg2 ;
-(BOOL)needsDownload;
-(long long)modifyObjectTokenForNewObject;
-(void)setDocumentObject:(id)arg1 ;
-(void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2 ;
-(long long)newObjectIdentifier;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 mode:(unsigned)arg3 error:(id*)arg4 passphrase:(id)arg5 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 documentResourceManager:(id)arg3 mode:(unsigned)arg4 error:(id*)arg5 passphrase:(id)arg6 ;
-(id)initWithDelegate:(id)arg1 documentResourceManager:(id)arg2 ;
-(BOOL)willDocumentRequirePasswordWithURL:(id)arg1 error:(id*)arg2 ;
-(id)p_popSavedPassphrase;
-(BOOL)isPasswordProtected;
-(void)setPasswordVerifier:(id)arg1 ;
-(BOOL)ignoreDocumentSupport;
-(BOOL)isDocumentSupportTemporary;
-(void)setDocumentPasswordHint:(id)arg1 ;
-(BOOL)readDocumentObjectFromPackageURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)readDocumentObjectFromDatabasePackageURL:(id)arg1 error:(id*)arg2 ;
-(void)setSupportObjectImpl:(id)arg1 ;
-(void)beginSaveToURL:(id)arg1 updateType:(unsigned)arg2 documentUUID:(id)arg3 ;
-(void)beginWriteWithOriginalURL:(id)arg1 relativeURLForExternalData:(id)arg2 ;
-(void)beginWriteOperation;
-(long long)updateModifyObjectToken;
-(id)documentProperties;
-(id)documentUUID;
-(void)setSupportObject:(id)arg1 ;
-(id)supportObject;
-(id)versionUUID;
-(void)suspendLoadingModifiedFlushedComponentsAndWait;
-(BOOL)writeToURL:(id)arg1 originalPackage:(id)arg2 supportURL:(id)arg3 originalSupportPackage:(id)arg4 encryptionKey:(id)arg5 error:(id*)arg6 ;
-(id)passwordVerifier;
-(id)documentPasswordHint;
-(void)removePassphraseVerifierAndHintFromDocumentURL:(id)arg1 ;
-(id)documentPackage;
-(id)supportPackage;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 ;
-(void)endWriteOperation;
-(void)resumeLoadingModifiedFlushedComponents;
-(id)decryptionKey;
-(void)cleanUpAfterSuccessfulWrite;
-(BOOL)saveToURL:(id)arg1 encryptionKey:(id)arg2 originalURL:(id)arg3 documentUUID:(id)arg4 error:(id*)arg5 ;
-(void)beginWriteWithOriginalURL:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 encryptionKey:(id)arg2 error:(id*)arg3 ;
-(void)endWriteWithSuccess:(BOOL)arg1 ;
-(void)endSaveWithSuccess:(BOOL)arg1 ;
-(id)keychainGenericItem;
-(id)objectForIdentifier:(long long)arg1 ;
-(id)newDocumentResourceDataProvider;
-(BOOL)areExternalReferencesToDataAllowedAtURL:(id)arg1 ;
-(BOOL)readWithReadCoordinator:(id)arg1 finalizeHandlerQueue:(id)arg2 rootObject:(id*)arg3 error:(id*)arg4 readCompletion:(/*^block*/ id)arg5 ;
-(void)readSupportObjectWithDocumentResourceDataProvider:(id)arg1 areExternalDataReferencesAllowed:(BOOL)arg2 ;
-(void)checkforDataWarningsWithPackageURL:(id)arg1 ;
-(void)didFinishUsingDocumentResourceDataProvider:(id)arg1 withSuccess:(BOOL)arg2 ;
-(void)performReadOperation:(/*^block*/ id)arg1 ;
-(void)didReadDocumentObject:(id)arg1 ;
-(BOOL)didFinishSuccessfullyReadingObjects:(id)arg1 finalizeHandlerQueue:(id)arg2 ;
-(id)addLoadedObjectsAndEnqueueNotifications:(id)arg1 ;
-(void)runObjectNotificationsInQueue:(id)arg1 ;
-(void)performReadUsingAccessor:(/*^block*/ id)arg1 ;
-(void)beginIgnoringCachedObjectEviction;
-(void)endIgnoringCachedObjectEviction;
-(BOOL)areExternalReferencesSupported;
-(BOOL)readComponent:(id)arg1 isWeakReference:(BOOL)arg2 rootObject:(id*)arg3 documentPackage:(id)arg4 supportPackage:(id)arg5 error:(id*)arg6 ;
-(void)performReadUsingAccessorImpl:(/*^block*/ id)arg1 ;
-(BOOL)readObjectForIdentifier:(long long)arg1 isWeakReference:(BOOL)arg2 rootObjectComponent:(id)arg3 object:(id*)arg4 error:(id*)arg5 ;
-(BOOL)readComponent:(id)arg1 isWeakReference:(BOOL)arg2 rootObject:(id*)arg3 error:(id*)arg4 ;
-(BOOL)ignoreUnknownContentWhileReading;
-(BOOL)areNewExternalReferencesToDataAllowed;
-(BOOL)ignoreDocumentResourcesWhileReading;
-(void)cancelDownloads;
-(id)dataManager;
-(long long)estimatedDownloadSize;
-(BOOL)isEstimatedDownloadSizePrecise;
-(void)waitForSaveToFinishIfNeeded;
-(id)supportDirectoryURL;
-(id)dataOrNilForIdentifier:(long long)arg1 ;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4 ;
-(BOOL)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3 ;
-(void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3 ;
-(id)downloadWithDelegate:(id)arg1 description:(id)arg2 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 passphrase:(id)arg4 ;
-(void)beginSaveToURL:(id)arg1 updateType:(unsigned)arg2 ;
-(BOOL)saveToURL:(id)arg1 encryptionKey:(id)arg2 originalURL:(id)arg3 error:(id*)arg4 ;
-(void)replaceDocumentObject:(id)arg1 ;
-(void)beginAssertOnModify;
-(void)endAssertOnModify;
-(void)performReadOperationOnKnownObjects:(/*^block*/ id)arg1 ;
-(id)dataWithContentsOfPackagePath:(id)arg1 ;
-(void)didMoveToURL:(id)arg1 ;
-(void)didMoveSupportToURL:(id)arg1 ;
-(BOOL)isDocumentModified;
-(BOOL)isSupportModified;
-(id)readObjectIfNeededForIdentifier:(long long)arg1 isWeakReference:(BOOL)arg2 componentIdentifier:(long long)arg3 ;
-(void)enumerateDocumentResourcesUsingBlock:(/*^block*/ id)arg1 ;
-(BOOL)containsDataConformingToUTI:(id)arg1 ;
-(id)beginPasteboardWrite;
-(void)endPasteboardWriteWithCoordinator:(id)arg1 ;
-(id)initForSpotlightWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)initForQuickLookWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 passphrase:(id)arg4 ;
-(void)prepareForDocumentReplacement;
-(id)peekNextVersionUUID;
-(BOOL)ignoreVersionCheckingWhileReading;
-(BOOL)updateDocumentUUIDPreserveOriginalDocumentSupport:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)documentHasCurrentFileFormatVersion;
-(long long)lastObjectIdentifier;
-(void)setLastObjectIdentifier:(long long)arg1 ;
-(long long)incrementLastObjectIdentifier:(long long)arg1 ;
-(void)setIsDocumentModified:(BOOL)arg1 ;
-(void)setIsSupportModified:(BOOL)arg1 ;
-(void)setIsPasswordProtected:(BOOL)arg1 ;
-(id)gilligan_documentResourceDataProvider;
-(void)setGilligan_documentResourceDataProvider:(id)arg1 ;
-(id)documentResourceManager;
-(id)componentManager;
-(id)supportManager;
-(id)documentObjectContainer;
-(void)setDocumentObjectContainer:(id)arg1 ;
-(id)supportObjectContainer;
-(void)setSupportObjectContainer:(id)arg1 ;
-(id)service;
-(id)documentObject;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)context;
-(void)close;
-(id).cxx_construct;
-(id)documentURL;
-(BOOL)setPassphrase:(id)arg1 ;
-(id)temporaryDirectory;
-(id)documentRoot;
-(id)passphraseHint;
-(id)initWithDelegate:(id)arg1 ;
-(void).cxx_destruct;
@end

