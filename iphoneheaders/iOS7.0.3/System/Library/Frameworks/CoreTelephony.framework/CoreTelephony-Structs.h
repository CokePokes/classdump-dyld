/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_CT1;

typedef struct queue {
	dispatch_object_s fObj;
} queue;

typedef struct __CTCall* CTCallRef;

typedef struct _compressed_pair<dispatch::block<void ()(NSDictionary *)> *, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > > {
	block<void ()(NSDictionary *)> __first_;
} compressed_pair<dispatch::block<void ()(NSDictionary *)> *, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > >;

typedef struct vector<dispatch::block<void ()(NSDictionary *)>, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > > {
	block<void ()(NSDictionary *)> __begin_;
	block<void ()(NSDictionary *)> __end_;
	compressed_pair<dispatch::block<void ()(NSDictionary *)> *, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > > __end_cap_;
} vector<dispatch::block<void ()(NSDictionary *)>, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > >;

