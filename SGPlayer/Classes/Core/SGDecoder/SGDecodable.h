//
//  SGDecodable.h
//  SGPlayer
//
//  Created by Single on 2018/10/22.
//  Copyright © 2018 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGPacket.h"
#import "SGFrame.h"

@protocol SGDecodable <NSObject>

/**
 *
 */
- (NSArray<__kindof SGFrame *> * _Nullable)decode:(SGPacket * _Nonnull)packet;

/**
 *
 */
- (NSArray<__kindof SGFrame *> * _Nullable)finish;

/**
 *
 */
- (void)flush;

@end
