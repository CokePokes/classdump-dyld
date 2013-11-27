/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SLMicroBlogSheetDelegate
@property (nonatomic,copy) id locationInformationChangedBlock; 
@optional
-(void)ensureUserRecordStore;
-(int)characterCountForText:(id)arg1 shortenedURLCost:(int)arg2;
-(BOOL)countMediaAttachmentsTowardCharacterCount;
-(id)cachedProfileImageDataForScreenName:(id)arg1;

@required
-(void)setGeotagStatus:(int)arg1;
-(void)setLocationInformationChangedBlock:(/*^block*/ id)arg1;
-(void)setActiveAccountIdentifier:(id)arg1;
-(void)fetchSessionInfo:(/*^block*/ id)arg1;
-(void)fetchRecordForScreenName:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)fetchCurrentUrlLimits:(/*^block*/ id)arg1;
-(void)fetchCurrentImageLimits:(/*^block*/ id)arg1;
-(void)fetchRelationshipWithScreenName:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)fetchGeotagStatus:(/*^block*/ id)arg1;
-(void)sendStatus:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/ id)arg1;
-(void)overrideLocationWithLatitude:(float)arg1 longitude:(float)arg2 name:(id)arg3;
-(void)showSettingsIfNeeded;
-(id)serviceAccountTypeIdentifier;
-(/*^block*/ id)locationInformationChangedBlock;
@end

