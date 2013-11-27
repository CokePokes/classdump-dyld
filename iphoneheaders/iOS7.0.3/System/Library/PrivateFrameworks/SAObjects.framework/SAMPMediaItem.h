/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSString, SACalendar, SAMPPlaybackInfo, SAMPReleaseInfo;

@interface SAMPMediaItem : SAMPMediaEntity

@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,retain) SACalendar * dateAdded; 
@property (nonatomic,retain) SACalendar * datePurchased; 
@property (nonatomic,copy) NSString * genre; 
@property (nonatomic,retain) SAMPPlaybackInfo * playbackInfo; 
@property (nonatomic,retain) SAMPReleaseInfo * releaseInfo; 
@property (nonatomic,copy) NSString * sortAlbum; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)mediaItem;
+(id)mediaItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)artist;
-(id)genre;
-(void)setArtist:(id)arg1 ;
-(void)setReleaseInfo:(id)arg1 ;
-(id)releaseInfo;
-(id)sortArtist;
-(id)sortAlbum;
-(id)album;
-(void)setAlbum:(id)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(void)setSortArtist:(id)arg1 ;
-(id)dateAdded;
-(void)setDateAdded:(id)arg1 ;
-(void)setDatePurchased:(id)arg1 ;
-(id)playbackInfo;
-(void)setPlaybackInfo:(id)arg1 ;
-(void)setSortAlbum:(id)arg1 ;
-(void)setGenre:(id)arg1 ;
-(id)datePurchased;
@end

