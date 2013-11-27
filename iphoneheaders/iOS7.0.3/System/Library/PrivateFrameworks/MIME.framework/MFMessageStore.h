/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableSet;

@interface MFMessageStore : NSObject <NSCopying> {

	NSMutableSet* _uniqueStrings;
	SCD_Union_MF8* _caches;

}
+(void)setDefaultMessageHeadersClass:(Class)arg1 ;
+(Class)classForMimePart;
+(Class)headersClass;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setMessageClass:(Class)arg1 ;
-(void)_flushAllCaches;
-(id)_bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 ;
-(id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(void)_flushAllMessageData;
-(id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 ;
-(id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)_flushAllCachesLocking:(BOOL)arg1 ;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)decryptedTopLevelPartForPart:(id)arg1 ;
-(id)defaultAlternativeForPart:(id)arg1 ;
-(id)bestAlternativeForPart:(id)arg1 ;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1 ;
-(id)additionalHeadersForReplyOfMessage:(id)arg1 ;
-(id)additionalHeadersForForwardOfMessage:(id)arg1 ;
-(id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 ;
-(id)uniquedString:(id)arg1 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 withConsumer:(id)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 ;
@end

