/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/InfoCardCinematics.h>

@protocol InfoCardBackgroundDelegate;
@class SearchResult, ;

@interface InfoCardBackgroundView : UIView <InfoCardCinematics> {

	int _preparationState;
	SearchResult* _searchResult;
	<InfoCardBackgroundDelegate>* _delegate;

}

@property (readonly) int backgroundType; 
@property (nonatomic,retain) SearchResult * searchResult;                //@synthesize searchResult=_searchResult - In the implementation block
@property (assign) <InfoCardBackgroundDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) int preparationState;                               //@synthesize preparationState=_preparationState - In the implementation block
+(id)backgroundWithType:(int)arg1 ;
-(void)setSearchResult:(id)arg1 ;
-(void)prepareForPresentation;
-(BOOL)canDisplayForSearchResult:(id)arg1 ;
-(int)preparationState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)present;
-(void)reset;
-(int)backgroundType;
-(id)searchResult;
@end

