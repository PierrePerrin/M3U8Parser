//
//  StringExample.h
//  M3U8KitTests
//
//  Created by Frank on 2019/3/5.
//  Copyright © 2019 Allen. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StringExample : NSObject

/** master */
@property (copy,  nonatomic) NSString *m3u8Master;

/** playlist */
@property (copy,  nonatomic) NSString *m3u8Playlist;

@end

NS_ASSUME_NONNULL_END
