//
//  M3U8SegmentInfo.h
//  M3U8Kit
//
//  Created by Oneday on 13-1-11.
//  Copyright (c) 2013年 0day. All rights reserved.
//

#import <Foundation/Foundation.h>

@class M3U8ExtXKey;
/*!
 @class M3U8SegmentInfo
 @abstract This is the class indicates #EXTINF:<duration>,<title> + media in m3u8 file
 

@format  #EXTINF:<duration>,<title>

#define M3U8_EXTINF                         @"#EXTINF:"
 
#define M3U8_EXTINF_DURATION                @"DURATION"
#define M3U8_EXTINF_TITLE                   @"TITLE"
#define M3U8_EXTINF_URI                     @"URI"
#define M3U8_EXT_X_KEY                      @"#EXT-X-KEY:"

 */
@interface M3U8SegmentInfo : NSObject

@property (nonatomic) NSTimeInterval duration;
@property (nonatomic, copy) NSURL *URI;
/** Key for media data decrytion. may be for this segment or next if no key. */
@property ( nonatomic) M3U8ExtXKey *xKey;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary xKey:(M3U8ExtXKey *)key NS_DESIGNATED_INITIALIZER;

- (NSURL *)mediaURL;

@end
