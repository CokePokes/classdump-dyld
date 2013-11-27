/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableSet, NSMutableArray;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGContext* CGContextRef;

typedef struct __CFString* CFStringRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGImage* CGImageRef;

typedef struct _NSZone* NSZoneRef;

typedef struct _FigCascadeContext* FigCascadeContextRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_PL9;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct {
	SCD_Struct_PL9 field1;
	SCD_Struct_PL9 field2;
} SCD_Struct_PL11;

typedef struct changeList_s {
	NSMutableSet* inserted;
	NSMutableSet* updated;
	NSMutableSet* deleted;
} changeList_s;

typedef struct contentChanges_s {
	NSMutableArray* container;
	NSMutableArray* updatedContent;
} contentChanges_s;

typedef struct {
	int field1;
	CGSize field2;
	CGRect field3;
	CGRect field4;
	unsigned field5;
	int field6;
	int field7;
	float field8[4];
	float field9[4];
	unsigned field10;
} SCD_Struct_PL14;

typedef struct __CFSet* CFSetRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_PL16;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_PL18;

typedef struct {
	SCD_Struct_PL18 field1;
	SCD_Struct_PL18 field2;
} SCD_Struct_PL19;

typedef struct UDateIntervalFormat* UDateIntervalFormatRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

