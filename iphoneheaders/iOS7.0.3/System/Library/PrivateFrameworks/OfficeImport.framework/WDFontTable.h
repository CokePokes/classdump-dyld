/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class TSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {

	TSUNoCopyDictionary* mFontTable;
	NSMutableArray* mFontsInOrderOfInsertion;

}
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)clear;
-(id)fonts;
-(id)createFontWithName:(id)arg1 ;
-(id)fontWithName:(id)arg1 create:(BOOL)arg2 ;
-(id)fontWithName:(id)arg1 ;
@end

