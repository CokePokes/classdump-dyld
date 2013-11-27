/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSNumber, UIFont;

@interface PKPassFieldTemplate : NSObject {

	NSNumber* _boxedTextAlignment;
	NSNumber* _boxedVerticalPadding;
	NSNumber* _boxedSuppressesLabel;
	NSNumber* _boxedValueCanWrap;
	NSNumber* _boxedSuppressesEmptyLabel;
	UIFont* _labelFont;
	UIFont* _valueFont;
	Class _viewSubclass;

}

@property (assign,nonatomic) int textAlignment; 
@property (assign,nonatomic) float verticalPadding; 
@property (nonatomic,retain) UIFont * labelFont;                                //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                                //@synthesize valueFont=_valueFont - In the implementation block
@property (assign,nonatomic) BOOL suppressesLabel; 
@property (assign,nonatomic) BOOL suppressesEmptyLabel; 
@property (assign,nonatomic) BOOL valueCanWrap; 
@property (nonatomic,retain) Class viewSubclass;                                //@synthesize viewSubclass=_viewSubclass - In the implementation block
@property (nonatomic,retain) NSNumber * boxedTextAlignment;                     //@synthesize boxedTextAlignment=_boxedTextAlignment - In the implementation block
@property (nonatomic,retain) NSNumber * boxedVerticalPadding;                   //@synthesize boxedVerticalPadding=_boxedVerticalPadding - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesLabel;                   //@synthesize boxedSuppressesLabel=_boxedSuppressesLabel - In the implementation block
@property (nonatomic,retain) NSNumber * boxedValueCanWrap;                      //@synthesize boxedValueCanWrap=_boxedValueCanWrap - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesEmptyLabel;              //@synthesize boxedSuppressesEmptyLabel=_boxedSuppressesEmptyLabel - In the implementation block
+(id)fieldTemplateWithTextAlignment:(int)arg1 ;
+(id)_templateByResolvingTemplate:(id)arg1 withDefault:(id)arg2 ;
+(id)fieldTemplateWithVerticalPadding:(float)arg1 ;
+(id)fieldTemplateWithViewSubclass:(Class)arg1 ;
-(void)setLabelFont:(id)arg1 ;
-(void)setVerticalPadding:(float)arg1 ;
-(void)setValueFont:(id)arg1 ;
-(id)valueFont;
-(void)setViewSubclass:(Class)arg1 ;
-(id)boxedTextAlignment;
-(void)setBoxedTextAlignment:(id)arg1 ;
-(id)boxedVerticalPadding;
-(void)setBoxedVerticalPadding:(id)arg1 ;
-(id)boxedSuppressesLabel;
-(void)setBoxedSuppressesLabel:(id)arg1 ;
-(id)boxedSuppressesEmptyLabel;
-(void)setBoxedSuppressesEmptyLabel:(id)arg1 ;
-(id)boxedValueCanWrap;
-(void)setBoxedValueCanWrap:(id)arg1 ;
-(Class)viewSubclass;
-(BOOL)suppressesLabel;
-(void)setSuppressesLabel:(BOOL)arg1 ;
-(BOOL)suppressesEmptyLabel;
-(void)setSuppressesEmptyLabel:(BOOL)arg1 ;
-(BOOL)valueCanWrap;
-(void)setValueCanWrap:(BOOL)arg1 ;
-(void)dealloc;
-(void)setTextAlignment:(int)arg1 ;
-(int)textAlignment;
-(id)labelFont;
-(float)verticalPadding;
@end

