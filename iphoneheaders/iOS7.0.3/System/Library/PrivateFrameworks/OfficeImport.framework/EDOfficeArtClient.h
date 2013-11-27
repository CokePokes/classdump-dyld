/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADClient.h>
#import <OfficeImport/OADTextClient.h>

@class EDSheet, EDAnchor, EDTextBox, EDComment, NSMutableDictionary;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {

	EDSheet* mSheet;
	id mClientState;
	EDAnchor* mAnchor;
	EDTextBox* mTextBox;
	EDComment* mComment;
	NSMutableDictionary* mTableModels;
	CGRect mBounds;
	bool mIsBoundsSet;

}
-(void)setComment:(id)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)hasText;
-(id).cxx_construct;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(id)textBox;
-(BOOL)hasBounds;
-(bool)areBoundsSet;
-(void)setSheet:(id)arg1 ;
-(void)setTextBox:(id)arg1 ;
-(id)clientState;
-(void)setClientState:(id)arg1 ;
-(id)tableModels;
-(void)setTableModels:(id)arg1 ;
-(id)comment;
-(id)sheet;
@end

