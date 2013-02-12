/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovie : NSObject {
    id _internal;
}

@property(readonly) NSURL *url;
@property(readonly) double duration;
@property double endPlaybackTime;
@property(readonly) NSInteger movieMediaTypes;
@property NSInteger movieSourceType;
@property(readonly) CGSize naturalSize;
@property(readonly) double playableDuration;
@property double startPlaybackTime;

+ (id)movieWithURL:(id)arg1 error:(id*)arg2;

- (id)_MPArrayQueueItem;
- (void)_determineMediaType;
- (void)_durationAvailableNotification:(id)arg1;
- (void)_fileValidationDidFinishNotification:(id)arg1;
- (id)_initWithURL:(id)arg1 error:(id*)arg2;
- (void)_naturalSizeAvailableNotification:(id)arg1;
- (void)_typeAvailableNotification:(id)arg1;
- (void)dealloc;
- (double)duration;
- (double)endPlaybackTime;
- (NSInteger)movieMediaTypes;
- (NSInteger)movieSourceType;
- (struct CGSize { float x1; float x2; })naturalSize;
- (double)playableDuration;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setMovieSourceType:(NSInteger)arg1;
- (void)setStartPlaybackTime:(double)arg1;
- (double)startPlaybackTime;
- (id)url;

@end