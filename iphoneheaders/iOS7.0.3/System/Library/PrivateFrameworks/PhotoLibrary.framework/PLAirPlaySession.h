/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLAirPlaySessionDataSource;
@class , NSMutableArray, NSDictionary, MediaControlClient, AirPlayRemoteSlideshow, NSString;

@interface PLAirPlaySession : NSObject {

	<PLAirPlaySessionDataSource>* _dataSource;
	NSMutableArray* _streamedPhotoUuids;
	NSDictionary* _pickedRoute;
	MediaControlClient* _mediaControlClient;
	BOOL _streamingPhotos;
	BOOL _streamingRemoteSlideshow;
	BOOL _streamingLocalSlideShow;
	AirPlayRemoteSlideshow* _remoteSlideshow;
	NSDictionary* _remoteSlideshowAvailableFeatures;
	NSString* _password;
	BOOL _routeRequiresPassword;
	BOOL _passwordIsAPin;
	BOOL _showingPasswordAlert;
	BOOL _validPassword;
	BOOL _validated;
	BOOL _sentPhoto;
	unsigned _features;

}

@property (assign,nonatomic) BOOL streamingLocalSlideShow;                                 //@synthesize streamingLocalSlideShow=_streamingLocalSlideShow - In the implementation block
@property (assign,nonatomic) <PLAirPlaySessionDataSource> * dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) AirPlayRemoteSlideshow * remoteSlideshow;                     //@synthesize remoteSlideshow=_remoteSlideshow - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteSlideshowAvailableFeatures;              //@synthesize remoteSlideshowAvailableFeatures=_remoteSlideshowAvailableFeatures - In the implementation block
@property (nonatomic,readonly) BOOL routeRequiresPassword;                                 //@synthesize routeRequiresPassword=_routeRequiresPassword - In the implementation block
@property (assign,nonatomic) BOOL validPassword;                                           //@synthesize validPassword=_validPassword - In the implementation block
@property (nonatomic,retain) NSString * password;                                          //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) unsigned features;                                            //@synthesize features=_features - In the implementation block
+(BOOL)canDisplayMedia:(id)arg1 ;
+(void)endNetworkAssertion;
+(void)beginNetworkAssertion;
-(id)password;
-(void)validate;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
-(id)pickedRouteID;
-(BOOL)supportsRemoteSlideshow;
-(id)pickedRouteName;
-(id)supportedRemoteSlideshowThemes;
-(id)remoteLocalizationForSlideshowThemeKey:(id)arg1 ;
-(id)initWithPickedRoute:(id)arg1 ;
-(void)getRemoteFeaturesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)invalidatePhotoCache;
-(void)streamPhoto:(id)arg1 withTransition:(id)arg2 ;
-(void)stopStreaming;
-(void)startRemoteSlideshowWithTheme:(id)arg1 remoteSlideshowDelegate:(id)arg2 ;
-(void)setStreamingLocalSlideShow:(BOOL)arg1 ;
-(BOOL)_supportsPhotoCaching;
-(void)_reallySendPhotoData:(id)arg1 forPhotoWithUUID:(id)arg2 withTransition:(id)arg3 andAction:(id)arg4 ;
-(void)_validateForBadPassword:(BOOL)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(BOOL)_shouldCachePhotos;
-(void)stopRemoteSlideshow;
-(void)_streamPhoto:(id)arg1 withTransition:(id)arg2 andAction:(id)arg3 ;
-(id)_fixLegacyEvent:(id)arg1 ;
-(void)_streamPhotosAdjacentToPhoto:(id)arg1 withTransition:(id)arg2 ;
-(void)setRemoteSlideshow:(id)arg1 ;
-(void)setRemoteSlideshowAvailableFeatures:(id)arg1 ;
-(BOOL)routeRequiresPassword;
-(void*)_keychainAccessibility;
-(void)setValidPassword:(BOOL)arg1 ;
-(BOOL)validPassword;
-(BOOL)_streaming;
-(BOOL)streamingLocalSlideShow;
-(id)remoteSlideshow;
-(id)remoteSlideshowAvailableFeatures;
-(unsigned)features;
-(void)setFeatures:(unsigned)arg1 ;
@end

