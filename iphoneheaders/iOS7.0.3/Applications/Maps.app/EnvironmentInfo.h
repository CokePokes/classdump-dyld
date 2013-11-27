/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSData, NSError, NSDictionary;

@interface EnvironmentInfo : NSObject {

	NSString* _name;
	NSString* _displayName;
	NSString* _releaseName;
	int _state;
	NSData* _manifestData;
	NSError* _lastLoadingError;
	NSDictionary* _originalDictionaryRepresentation;

}

@property (nonatomic,readonly) NSError * lastLoadingError;              //@synthesize lastLoadingError=_lastLoadingError - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * releaseName;                  //@synthesize releaseName=_releaseName - In the implementation block
@property (nonatomic,readonly) int state;                               //@synthesize state=_state - In the implementation block
-(id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3 ;
-(void)reloadManifestDataWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)urlDictionary;
-(id)_manifestURLString;
-(void)updateWithURLs:(id)arg1 ;
-(id)serviceURLs;
-(id)overrideURLs;
-(id)releaseName;
-(id)lastLoadingError;
-(void)dealloc;
-(int)state;
-(BOOL)isActive;
-(id)name;
-(id)displayName;
-(void)makeActive;
@end

