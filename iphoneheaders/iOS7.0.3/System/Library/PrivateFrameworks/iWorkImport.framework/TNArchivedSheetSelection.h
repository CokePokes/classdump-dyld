/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKArchivedSelection.h>

@class TNSheetSelection;

@interface TNArchivedSheetSelection : TSPObject <TSKArchivedSelection> {

	TNSheetSelection* mSelection;

}

@property (nonatomic,retain) TNSheetSelection * selection; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)dealloc;
-(id)selection;
-(void)setSelection:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end

