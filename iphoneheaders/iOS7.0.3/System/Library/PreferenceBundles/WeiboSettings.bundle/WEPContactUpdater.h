/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol WEPContactUpdaterDelegate;
@class ACAccount, ACAccountStore, NSMutableDictionary, NSMutableArray, NSMutableSet, NSOperationQueue, ;

@interface WEPContactUpdater : NSObject {

	void* _addressBook;
	ACAccount* _account;
	ACAccountStore* _store;
	NSMutableDictionary* _personDictionary;
	NSMutableArray* _allEmails;
	NSMutableArray* _allPhoneNumbers;
	NSMutableSet* _updatedPeople;
	NSOperationQueue* _operationQueue;
	<WEPContactUpdaterDelegate>* _delegate;
	int _expectedBatchJobs;
	int _completedBatchJobs;
	float _partialBatchJobsCompleted;
	int _expectedPhotoJobs;
	int _completedPhotoJobs;
	BOOL _warnedOfFailure;

}

@property (assign,nonatomic,__weak) <WEPContactUpdaterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_canonicalizaPhoneNumbers:(id)arg1 ;
-(void)updateContacts;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(void)updatePhotos;
-(void)_batchLookupProgress:(id)arg1 ;
-(void)_batchLookupFinished:(id)arg1 ;
-(void)_photoLookupFinished:(id)arg1 ;
-(void)_populatePhoneNumbersAndEmails;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)cancel;
-(void).cxx_destruct;
@end

