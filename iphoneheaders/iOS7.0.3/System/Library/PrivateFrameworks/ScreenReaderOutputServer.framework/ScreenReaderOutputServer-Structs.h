/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSData;

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct {
	NSData* realData;
	NSData* virtualData;
	NSData* aggregatedData;
	int virtualAlignment;
	int masterStatusCellIndex;
} SCD_Struct_SC2;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct {
	double quietSince;
	double busySince;
	double nextWillMemorizeNotificationTime;
	double memorizeNextKeyImmediatelyTimeout;
	BOOL prepareToMemorizeNextKey;
	BOOL requestPrepareToMemorizeNextKey;
	BOOL memorizeNextKeyImmediately;
	BOOL willMemorizeNow;
	BOOL isQuiet;
	BOOL newDown;
	__CFArray currentChord;
	__CFSet downKeys;
	unsigned routerEvent;
	int routerIndex;
	int routerToken;
	id appToken;
	int routerLocation;
	BOOL currentBrailleChordContainsSpacebar;
	BOOL spacebarIsDown;
	BOOL skipBrailleKeyboardKeyTranslation;
	__CFArray currentBrailleChord;
	__CFSet downBrailleDots;
	unsigned currentBrailleModifiers;
	unsigned downBrailleModifiers;
	id brailleString;
	 NSMutableString;
	id brailleStringModifiers;
	 NSMutableArray;
	double lastBrailleChordPosted;
	double brailleCharExponentialMovingAverage;
	double brailleTranslationTimeout;
} SCD_Struct_SC5;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	NSData* aggregatedData;
	int virtualAlignment;
	int masterStatusCellIndex;
	BOOL currentAnnouncementUnread;
	BOOL anyUnreadAnnouncements;
} SCD_Struct_SC9;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	BOOL didDisplay;
	BOOL keypress;
	BOOL keyWillMem;
	BOOL keymem;
	BOOL panLeft;
	BOOL panRight;
	BOOL showPreviousAnnouncement;
	BOOL showNextAnnouncement;
	BOOL configChanged;
	BOOL playDisplayConnectionSound;
	BOOL bluetoothDisplayLoadFailed;
	BOOL tableLoadFailed;
	BOOL displayModeChanged;
} SCD_Struct_SC11;

typedef struct {
	NSData* data;
	int alignment;
	int length;
	char* cells;
} SCD_Struct_SC12;

typedef struct __IOHIDDevice* IOHIDDeviceRef;

typedef struct __CFSet* CFSetRef;

typedef struct {
	unsigned field1[8];
} SCD_Struct_SC15;

