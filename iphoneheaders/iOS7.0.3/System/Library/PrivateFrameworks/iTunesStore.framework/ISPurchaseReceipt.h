/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iTunesStore/iTunesStore-Structs.h>
@class NSData, NSString, NSDate, NSNumber;

@interface ISPurchaseReceipt : NSObject {

	NSData* mReceiptData;
	SecCmsMessageStrRef mDecodedMessage;
	SecCmsSignedDataStrRef mSignedData;
	NSString* mReceiptPath;
	NSString* mBundleID;
	NSString* mBundleVersion;
	NSString* mParentalControls;
	NSString* mDownloadID;
	NSString* mAdamID;
	NSDate* mPurchaseDate;
	NSString* mPurchaseDateString;
	NSString* mDSID;
	NSString* mHWType;
	NSDate* mReceiptCreationDate;
	NSString* mDeveloperID;
	NSString* mInstallerVersionID;
	NSString* mReceiptType;
	NSNumber* mFRToolVersion;
	NSString* mExpirationDateString;
	NSDate* mExpirationDate;
	NSString* mRenewalDateString;
	NSDate* mRenewalDate;
	NSString* mOraganizationDisplayName;
	NSString* mCancellationReason;
	BOOL mHashIsValid;
	BOOL _createdFromCoder;

}

@property (readonly) NSString * receiptType; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSString * parentalControls; 
@property (readonly) NSDate * purchaseDate; 
@property (readonly) NSString * purchaseDateString; 
@property (readonly) NSString * dsid; 
@property (readonly) NSString * hwtype; 
@property (readonly) NSDate * receiptCreationDate; 
@property (readonly) NSString * developerID; 
@property (readonly) NSString * downloadID; 
@property (readonly) NSString * adamID; 
@property (readonly) NSString * installerVersionID; 
@property (readonly) NSNumber * frToolVersion; 
@property (readonly) NSDate * expirationDate; 
@property (readonly) NSDate * renewalDate; 
@property (readonly) NSString * renewalDateString; 
@property (readonly) NSString * organizationDisplayName; 
@property (readonly) NSString * cancellationReason; 
@property (@dynamic,readonly) BOOL isVPPLicensed; 
@property (@dynamic,readonly) BOOL isRevoked; 
@property (readonly) NSData * receiptData; 
@property (@dynamic,readonly) NSString * receiptDataString; 
@property (@dynamic,readonly) BOOL isProductionReceipt; 
+(id)receiptPathForBundleAtPath:(id)arg1 ;
+(id)receiptWithContentsOfFile:(id)arg1 ;
+(id)receiptFromBundleAtPath:(id)arg1 ;
+(id)receiptFromBundleAtURL:(id)arg1 ;
-(BOOL)isRevoked;
-(id)adamID;
-(id)bundleVersion;
-(void)dealloc;
-(id)bundleIdentifier;
-(BOOL)isValid;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)expirationDate;
-(id)purchaseDate;
-(BOOL)_load;
-(CFArrayRef)_copySignedDataCertificates;
-(id)receiptCreationDate;
-(BOOL)_checkWWDRIssuerForTrust:(SecTrustRef)arg1 ;
-(int)_verifySignatureCheckRevocation:(BOOL)arg1 checkExpiration:(BOOL)arg2 useCurrentDate:(BOOL)arg3 ;
-(BOOL)validateAndCheckGUIDSeparately:(BOOL*)arg1 ;
-(id)receiptData;
-(int)checkSignature;
-(int)checkSignatureSkipRevocation;
-(int)checkSignatureAgainstCurrentDate;
-(BOOL)validateAndCheckGUIDSepately:(BOOL*)arg1 ;
-(id)receiptDataString;
-(BOOL)isProductionReceipt;
-(BOOL)isVPPLicensed;
-(id)receiptType;
-(id)purchaseDateString;
-(id)parentalControls;
-(id)downloadID;
-(id)dsid;
-(id)hwtype;
-(id)developerID;
-(id)installerVersionID;
-(id)frToolVersion;
-(id)renewalDate;
-(id)renewalDateString;
-(id)organizationDisplayName;
-(id)cancellationReason;
@end

