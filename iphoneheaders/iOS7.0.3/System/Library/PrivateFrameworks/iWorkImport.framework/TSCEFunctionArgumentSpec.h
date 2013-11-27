/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray, TSCEFunctionSpec;

@interface TSCEFunctionArgumentSpec : NSObject {

	int mArgumentType;
	BOOL mForceArrayMode;
	double mMinValue;
	double mMaxValue;
	BOOL mDisallowDuration;
	BOOL mDisallowCurrency;
	short mIndex;
	int mAccessorMode;
	int mArgumentContext;
	int mRangeContext;
	NSArray* mDisallowedTypes;
	vector<TSCEValue, std::__1::allocator<TSCEValue> >* mModeValues;
	short mDefaultModeIndex;
	TSCEFunctionSpec* mFunctionSpec;
	BOOL mMinInclusive;
	BOOL mMaxInclusive;
	BOOL mIsInteger;
	BOOL mReferenceForGeometryOnly;

}

@property (nonatomic,readonly) short defaultModeIndex; 
@property (assign,nonatomic) TSCEFunctionSpec * functionSpec; 
@property (nonatomic,readonly) vector<TSCEValue* modeValues; 
+(id)argumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(int)arg6 minValue:(double)arg7 minInclusive:(BOOL)arg8 maxValue:(double)arg9 maxInclusive:(BOOL)arg10 isInteger:(BOOL)arg11 disallowDuration:(BOOL)arg12 disallowCurrency:(BOOL)arg13 modeValues:(vector<TSCEValue, std::__1::allocator<TSCEValue> >*)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(BOOL)arg16 forceArrayMode:(BOOL)arg17 ;
-(int)accessorMode;
-(int)preferredType;
-(int)argumentContext;
-(BOOL)disallowCurrency;
-(BOOL)disallowDuration;
-(void)setFunctionSpec:(id)arg1 ;
-(id)localizedFunctionName;
-(id)disallowedTypes;
-(int)rangeContext;
-(BOOL)minInclusive;
-(BOOL)maxInclusive;
-(vector<TSCEValue, std::__1::allocator<TSCEValue> >*)modeValues;
-(short)defaultModeIndex;
-(BOOL)referenceForGeometryOnly;
-(BOOL)forceArrayMode;
-(id)initArgumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(int)arg6 minValue:(double)arg7 minInclusive:(BOOL)arg8 maxValue:(double)arg9 maxInclusive:(BOOL)arg10 isInteger:(BOOL)arg11 disallowDuration:(BOOL)arg12 disallowCurrency:(BOOL)arg13 modeValues:(vector<TSCEValue, std::__1::allocator<TSCEValue> >*)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(BOOL)arg16 forceArrayMode:(BOOL)arg17 ;
-(id)nativeSyntaxString;
-(id)localizedToolTipString;
-(BOOL)isMode;
-(short)numModes;
-(int)indexForModeValue:(TSCEValue*)arg1 ;
-(TSCEValue)valueForModeIndex:(short)arg1 ;
-(id)localizedArgumentName;
-(int)indexForModeString:(id)arg1 ;
-(int)indexForModeNumber:(double)arg1 ;
-(int)indexForModeBool:(BOOL)arg1 ;
-(id)nativeSyntaxStringForModeIndex:(short)arg1 ;
-(id)localizedModeNameForModeIndex:(short)arg1 ;
-(id)localizedModeToolTipStringForModeIndex:(short)arg1 ;
-(id)localizedModeMenuItemStringForModeIndex:(short)arg1 ;
-(BOOL)typeIsDisallowed:(int)arg1 value:(TSCEValue*)arg2 ;
-(id)functionSpec;
-(BOOL)isOptional;
-(void)dealloc;
-(double)minValue;
-(short)index;
-(double)maxValue;
-(BOOL)isInteger;
@end

