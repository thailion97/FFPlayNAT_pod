//
//  AudioPlayer.h
//  FFmpegDemo
//
//  Created by Nguyen Anh Thai on 7/29/20.
//  Copyright © 2020 zhw. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class FFPlayAudioPlayer;
@protocol AudioPlayerDelegate <NSObject>

- (void)audioPlayer:(FFPlayAudioPlayer *)player data:(uint8_t *)data length:(int)length;

@end

@interface FFPlayAudioPlayer : NSObject

@property (nonatomic, weak)   id  <AudioPlayerDelegate> delegate;
@property (nonatomic, assign) int sampleRate;
@property (nonatomic, assign) int channels;

- (void)prepare;
- (void)start;
- (void)stop;

@end

NS_ASSUME_NONNULL_END
