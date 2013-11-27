/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLIndexMappingCache <NSObject>
@property (nonatomic,readonly) <NSObject><NSCopying> * cachedIndexMapState; 
@optional
-(id)currentStateForChange;

@required
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
-(Class)derivedChangeNotificationClass;
-(id)cachedIndexMapState;
@end

