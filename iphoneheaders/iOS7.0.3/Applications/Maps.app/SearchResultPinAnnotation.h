/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MKPinAnnotationView.h>

@class SearchResult;

@interface SearchResultPinAnnotation : MKPinAnnotationView {

	int _selectionBehavior;

}

@property (nonatomic,retain) SearchResult * searchResult; 
@property (assign,nonatomic) int selectionBehavior;                    //@synthesize selectionBehavior=_selectionBehavior - In the implementation block
+(id)keyPathsForValuesAffectingAppearance;
-(void)setSearchResult:(id)arg1 ;
-(void)_updatePinColorForSearchResult;
-(id)initWithSearchResult:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelectionBehavior:(int)arg1 ;
-(int)selectionBehavior;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAnnotation:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id)searchResult;
-(void)setDragState:(unsigned)arg1 ;
-(BOOL)isDraggable;
@end

