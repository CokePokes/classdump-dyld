/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface PLPhotoDCIMDirectory : NSObject {

	NSString* _dcimPath;
	NSString* _miscPath;
	NSString* _posterImagePath;
	NSMutableArray* _topLevelDirectories;
	CFDictionaryRef _topLevelDirectoriesByNumber;
	CFSetRef _unusableTopLevelDirectoryNumbers;
	int _lastUsedDirectoryNumber;
	NSMutableDictionary* _userInfo;
	BOOL _userInfoDidChange;
	flock* _dcimDirectoryLock;
	int _dcimDirectoryLockDescriptor;

}
-(void)dealloc;
-(id)userInfo;
-(id)initWithDCIMPath:(id)arg1 ;
-(id)countOfAllPhotosAndVideos;
-(void)lockDirectory;
-(id)nextAvailableDirectory;
-(void)unlockDirectory;
-(id)userInfoObjectForKey:(id)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)saveUserInfo;
-(id)dcimPath;
-(void)reloadUserInfo;
-(id)miscPath;
-(id)_userInfoPath;
-(void)recreateInfoPlist;
-(id)dcfDirectories;
-(BOOL)isValidImageExtension:(id)arg1 ;
-(BOOL)isValidVideoExtension:(id)arg1 ;
-(void)countOfAllPhotos:(int*)arg1 andVideos:(int*)arg2 stopAfterFirst:(BOOL)arg3 ;
-(id)posterImagePath;
-(void)clearDCFDirectories;
-(BOOL)hasChangedExternally;
-(void)setHasChangedExternally:(BOOL)arg1 ;
@end

