#import "React/RCTView.h"

@class RCTEventDispatcher;
@class RCTVLCPlayerViewController;

@interface RCTVLCPlayer : UIView

@property(nonatomic, copy) RCTBubblingEventBlock onVideoProgress;
@property(nonatomic, copy) RCTBubblingEventBlock onVideoPaused;
@property(nonatomic, copy) RCTBubblingEventBlock onVideoStopped;
@property(nonatomic, copy) RCTBubblingEventBlock onVideoBuffering;
@property(nonatomic, copy) RCTBubblingEventBlock onVideoPlaying;
@property(nonatomic, copy) RCTBubblingEventBlock onVideoEnded;
@property(nonatomic, copy) RCTBubblingEventBlock onVideoError;
@property(nonatomic, copy) RCTBubblingEventBlock onVideoOpen;
@property(nonatomic, copy) RCTBubblingEventBlock onVideoLoadStart;
@property(nonatomic, copy) RCTBubblingEventBlock onVideoLoad;
@property(nonatomic, assign) BOOL repeat;
@property(nonatomic, copy) NSString *resizeMode;

- (instancetype)initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher
    NS_DESIGNATED_INITIALIZER;
- (void)setMuted:(BOOL)value;

@end
