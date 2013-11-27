/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <CertInfo/CertInfoTrustDescription.h>

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription> {

	SecTrustRef _trust;
	int _action;

}
-(void)dealloc;
-(id)initWithTrust:(SecTrustRef)arg1 action:(int)arg2 ;
-(unsigned)certificateCount;
-(id)certificatePropertiesAtIndex:(unsigned)arg1 ;
-(id)summaryTitle;
-(id)summarySubtitle;
-(BOOL)isTrusted;
-(id)summaryDescriptionItems;
-(id)certificateSubjectSummaryAtIndex:(unsigned)arg1 ;
-(id)certificateIssuerSummaryAtIndex:(unsigned)arg1 ;
-(id)certificateExpirationDateAtIndex:(unsigned)arg1 ;
-(id)_expirationDate;
@end

