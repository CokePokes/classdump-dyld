/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface OADOle : NSObject {

	BOOL mIconic;
	NSString* mCLSID;
	NSString* mAnsiUserType;
	NSString* mAnsiClipboardFormatName;
	unsigned long mWinClipboardFormat;
	NSString* mMacClipboardFormat;
	NSString* mAnsiProgID;
	NSString* mUnicodeUserType;
	NSString* mUnicodeClipboardFormatName;
	NSString* mUnicodeProgID;
	id mObject;

}
+(BOOL)isProgIDSupported:(id)arg1 ;
+(BOOL)isCLSIDSupported:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)CLSID;
-(void)setCLSID:(id)arg1 ;
-(void)setAnsiUserType:(id)arg1 ;
-(void)setWinClipboardFormat:(unsigned long)arg1 ;
-(void)setMacClipboardFormat:(id)arg1 ;
-(void)setAnsiClipboardFormatName:(id)arg1 ;
-(void)setAnsiProgID:(id)arg1 ;
-(void)setUnicodeUserType:(id)arg1 ;
-(void)setUnicodeClipboardFormatName:(id)arg1 ;
-(void)setUnicodeProgID:(id)arg1 ;
-(BOOL)iconic;
-(void)setIconic:(BOOL)arg1 ;
-(id)ansiUserType;
-(id)ansiClipboardFormatName;
-(unsigned long)winClipboardFormat;
-(id)macClipboardFormat;
-(id)ansiProgID;
-(id)unicodeUserType;
-(id)unicodeClipboardFormatName;
-(id)unicodeProgID;
@end

