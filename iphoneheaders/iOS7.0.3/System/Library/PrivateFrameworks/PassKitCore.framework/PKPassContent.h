/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class PKBarcode, PKImage, NSArray, NSURL, NSString;

@interface PKPassContent : NSObject <NSCoding, NSSecureCoding> {

	PKBarcode* _barcode;
	int _transitType;
	PKImage* _footerImage;
	NSArray* _storeIdentifiers;
	NSURL* _appLaunchURL;
	NSString* _logoText;
	NSString* _localizedDescription;
	NSArray* _frontFieldBuckets;
	NSArray* _backFieldBuckets;

}

@property (nonatomic,retain) PKBarcode * barcode;                        //@synthesize barcode=_barcode - In the implementation block
@property (assign,nonatomic) int transitType;                            //@synthesize transitType=_transitType - In the implementation block
@property (nonatomic,retain) PKImage * footerImage;                      //@synthesize footerImage=_footerImage - In the implementation block
@property (nonatomic,copy) NSArray * storeIdentifiers;                   //@synthesize storeIdentifiers=_storeIdentifiers - In the implementation block
@property (nonatomic,copy) NSURL * appLaunchURL;                         //@synthesize appLaunchURL=_appLaunchURL - In the implementation block
@property (nonatomic,copy) NSString * logoText;                          //@synthesize logoText=_logoText - In the implementation block
@property (nonatomic,copy) NSArray * frontFieldBuckets;                  //@synthesize frontFieldBuckets=_frontFieldBuckets - In the implementation block
@property (nonatomic,copy) NSArray * backFieldBuckets;                   //@synthesize backFieldBuckets=_backFieldBuckets - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)localizedDescription;
-(void)setLogoText:(id)arg1 ;
-(void)setTransitType:(int)arg1 ;
-(void)setFrontFieldBuckets:(id)arg1 ;
-(void)setBackFieldBuckets:(id)arg1 ;
-(void)setBarcode:(id)arg1 ;
-(void)setFooterImage:(id)arg1 ;
-(void)setStoreIdentifiers:(id)arg1 ;
-(void)setAppLaunchURL:(id)arg1 ;
-(id)barcode;
-(int)transitType;
-(id)footerImage;
-(id)logoText;
-(id)frontFieldBuckets;
-(id)backFieldBuckets;
-(id)storeIdentifiers;
-(id)appLaunchURL;
-(id)initWithPassURL:(id)arg1 ;
-(void)flushFormattedFieldValues;
@end

