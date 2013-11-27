/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDate;

@interface SKUIReleaseNote : NSObject {

	NSString* _changeNotes;
	NSDate* _date;
	NSString* _versionString;

}

@property (nonatomic,readonly) NSString * changeNotes;                //@synthesize changeNotes=_changeNotes - In the implementation block
@property (nonatomic,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * versionString;              //@synthesize versionString=_versionString - In the implementation block
+(id)dateFormatter;
-(id)date;
-(id)versionString;
-(id)changeNotes;
-(id)initWithReleaseNoteDictionary:(id)arg1 dateFormatter:(id)arg2 ;
-(void).cxx_destruct;
@end

