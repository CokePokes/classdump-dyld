/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface ML3ImportItem : NSObject {

	int _sourceType;
	long long _persistentIdentifier;

}

@property (assign,nonatomic) int sourceType;                              //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) long long persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(id)valueForProperty:(unsigned)arg1 ;
-(BOOL)hasValueForProperty:(unsigned)arg1 ;
-(id)sanitizedStringValueForProperty:(unsigned)arg1 ;
-(id)deduplicationPredicates;
-(id)allPropertyValues;
-(BOOL)canInsertIntoPurchasePlaylist;
-(id)sortTitle;
-(id)sortArtist;
-(id)sortSeries;
-(id)sortAlbum;
-(id)sortAlbumArtist;
-(id)effectiveAlbumArtist;
-(id)effectiveSortAlbumArtist;
-(id)sortComposer;
-(id)sortGenre;
-(id)sortEpisodeId;
-(long long)persistentIdentifier;
-(void)setPersistentIdentifier:(long long)arg1 ;
@end

