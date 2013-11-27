/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <Game Center~iphone/GKGamesDataSource.h>

@class NSMutableOrderedSet;

@interface GKGamePointsCompareDataSource : GKGamesDataSource {

	NSMutableOrderedSet* _localGames;

}

@property (nonatomic,retain) NSMutableOrderedSet * localGames;              //@synthesize localGames=_localGames - In the implementation block
-(void)loadGameDetailsForPlayer:(id)arg1 fromGames:(id)arg2 forPages:(NSRange)arg3 handler:(/*^block*/ id)arg4 ;
-(void)loadGamesListForPlayer:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)configureCell:(id)arg1 withGameRecordAtIndex:(unsigned)arg2 ;
-(Class)headerClass;
-(void)setLocalGames:(id)arg1 ;
-(id)localGames;
-(void)_loadGamesListForPlayer:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)gameRecordForLocalPlayerAtIndexPath:(id)arg1 ;
-(Class)cellClass;
-(void)dealloc;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
@end

