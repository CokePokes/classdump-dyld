/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDictionary;

@interface PUProtoSetting : NSObject {

	NSString* _defaultsKey;
	NSString* _displayName;
	NSString* _displayDescription;
	unsigned _type;
	id _defaultValue;
	NSDictionary* _possibleValues;

}

@property (nonatomic,retain) NSString * defaultsKey;                        //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * displayDescription;                 //@synthesize displayDescription=_displayDescription - In the implementation block
@property (assign,nonatomic) unsigned type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id defaultValue;                               //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSDictionary * possibleValues;                 //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,readonly) NSString * currentDisplayValue; 
@property (assign,nonatomic) id currentObjectValue; 
+(id)settingWithKey:(id)arg1 name:(id)arg2 description:(id)arg3 type:(unsigned)arg4 defaultValue:(id)arg5 values:(id)arg6 ;
-(id)defaultsKey;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(void)setDefaultsKey:(id)arg1 ;
-(void)setDisplayDescription:(id)arg1 ;
-(void)setPossibleValues:(id)arg1 ;
-(id)currentObjectValue;
-(id)currentDisplayValue;
-(void)setCurrentObjectValue:(id)arg1 ;
-(void)resetSetting;
-(id)displayDescription;
-(id)possibleValues;
-(void).cxx_destruct;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
@end

