/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct __CFMachPort* CFMachPortRef;

typedef struct {
	unsigned val[8];
} SCD_Struct_EA1;

typedef struct SBSProcessAssertion* SBSProcessAssertionRef;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, NSNumber *, std::__1::less<unsigned int>, true> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, NSNumber *, std::__1::less<unsigned int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned int, NSNumber *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned int, NSNumber *>, void *> > >;

typedef struct _tree<std::__1::pair<unsigned int, NSNumber *>, std::__1::__map_value_compare<unsigned int, NSNumber *, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::pair<unsigned int, NSNumber *> > > {
	__tree_node<std::__1::pair<unsigned int, NSNumber *>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned int, NSNumber *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, NSNumber *, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::pair<unsigned int, NSNumber *>, std::__1::__map_value_compare<unsigned int, NSNumber *, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::pair<unsigned int, NSNumber *> > >;

typedef struct map<unsigned int, NSNumber *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSNumber *> > > {
	tree<std::__1::pair<unsigned int, NSNumber *>, std::__1::__map_value_compare<unsigned int, NSNumber *, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::pair<unsigned int, NSNumber *> > > __tree_;
} map<unsigned int, NSNumber *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSNumber *> > >;

typedef struct __IOHIDUserDevice* IOHIDUserDeviceRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct __CFSocket* CFSocketRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, IAPSession *, std::__1::less<unsigned short>, true> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, IAPSession *, std::__1::less<unsigned short>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned short, IAPSession *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned short, IAPSession *>, void *> > >;

typedef struct _tree<std::__1::pair<unsigned short, IAPSession *>, std::__1::__map_value_compare<unsigned short, IAPSession *, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::pair<unsigned short, IAPSession *> > > {
	__tree_node<std::__1::pair<unsigned short, IAPSession *>, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned short, IAPSession *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned short, IAPSession *, std::__1::less<unsigned short>, true> > __pair3_;
} tree<std::__1::pair<unsigned short, IAPSession *>, std::__1::__map_value_compare<unsigned short, IAPSession *, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::pair<unsigned short, IAPSession *> > >;

typedef struct map<unsigned short, IAPSession *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, IAPSession *> > > {
	tree<std::__1::pair<unsigned short, IAPSession *>, std::__1::__map_value_compare<unsigned short, IAPSession *, std::__1::less<unsigned short>, true>, std::__1::allocator<std::__1::pair<unsigned short, IAPSession *> > > __tree_;
} map<unsigned short, IAPSession *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, IAPSession *> > >;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct __CFDictionary* CFDictionaryRef;

