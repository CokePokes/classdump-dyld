/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

@interface TSTNumberNode : TSTExpressionNode {

	double mNumber;
	NSString* mString;

}

@property (assign,nonatomic) double number; 
@property (nonatomic,retain) NSString * string; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(NumberNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const NumberNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS266)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)exportString;
-(id)argumentSpec;
-(id)initWithContext:(id)arg1 number:(double)arg2 string:(id)arg3 firstIndex:(unsigned)arg4 lastIndex:(unsigned)arg5 ;
-(id)initWithContext:(id)arg1 number:(double)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(void)dealloc;
-(id)string;
-(void)setString:(id)arg1 ;
-(double)number;
-(void)setNumber:(double)arg1 ;
-(int)tokenType;
@end

