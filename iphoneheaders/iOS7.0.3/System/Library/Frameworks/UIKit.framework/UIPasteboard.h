/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSArray, NSURL, UIImage, UIColor;

@interface UIPasteboard : NSObject {

	NSString* _name;

}

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,copy) NSArray * strings; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSArray * URLs; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSArray * images; 
@property (nonatomic,copy) UIColor * color; 
@property (nonatomic,copy) NSArray * colors; 
@property (nonatomic,readonly) NSString * name; 
@property (assign,getter=isPersistent,nonatomic) BOOL persistent; 
@property (nonatomic,readonly) int changeCount; 
@property (nonatomic,readonly) int numberOfItems; 
@property (nonatomic,copy) NSArray * items; 
+(id)generalPasteboard;
+(id)_findPasteboard;
+(id)_printPasteboard;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)pasteboardWithUniqueName;
+(void)removePasteboardWithName:(id)arg1 ;
-(void)pl_setAsset:(id)arg1 ;
-(void)pl_setAssets:(id)arg1 ;
-(id)pl_assetsInPhotoLibrary:(id)arg1 ;
-(BOOL)pl_containsAssets;
-(id)__ck_preferredPasteboardValues;
-(id)__ck_pasteboardTypesForIndex:(unsigned)arg1 ;
-(id)__ck_valueForPasteboardType:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)__ck_pasteboardTypeListRTF;
-(id)__ck_dataForPasteboardType:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)mf_addPasteboardRepresentationsForTextAttachments:(id)arg1 ;
-(id)mf_getAttachmentsPasteboardRepresentations;
-(void)mf_addPasteboardRepresentationsForAttachments:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setColors:(id)arg1 ;
-(id)init;
-(id)string;
-(id)images;
-(id)image;
-(id)name;
-(id)items;
-(void)setItems:(id)arg1 ;
-(id)URL;
-(id)color;
-(void)setColor:(id)arg1 ;
-(int)changeCount;
-(void)setString:(id)arg1 ;
-(int)numberOfItems;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(void)setURL:(id)arg1 ;
-(void)setImages:(id)arg1 ;
-(id)_initWithName:(id)arg1 system:(BOOL)arg2 create:(BOOL)arg3 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(void)_pasteboardChanged:(id)arg1 ;
-(void)_addItems:(id)arg1 oldPasteboardTypes:(id)arg2 ;
-(id)pasteboardTypes;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(id)dataForPasteboardType:(id)arg1 ;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(BOOL)isPersistent;
-(void)setPersistent:(BOOL)arg1 ;
-(void)setStrings:(id)arg1 ;
-(id)strings;
-(void)setURLs:(id)arg1 ;
-(id)URLs;
-(id)colors;
@end

