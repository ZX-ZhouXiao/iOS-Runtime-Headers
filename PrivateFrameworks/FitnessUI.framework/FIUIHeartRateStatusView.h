/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHeartRateStatusView : UIView {
    FIUIAnimatingSpriteImageView * _animatingImageView;
    BOOL  _animationsSuspended;
    BOOL  _delayedStartMeasuringAnimation;
    UIImageView * _fullHeartImageView;
    double  _heartRate;
    int  _heartSpriteImageColumnCount;
    int  _heartSpriteImageFrameCount;
    NSString * _heartSpriteImageName;
    BOOL  _isBeatingHeart;
    UIImageView * _reloadArrowView;
    UIImageView * _reloadOutlineView;
    NSBundle * _resourceBundle;
    unsigned int  _state;
}

@property (nonatomic, retain) FIUIAnimatingSpriteImageView *animatingImageView;
@property (nonatomic) BOOL animationsSuspended;
@property (nonatomic, retain) UIImageView *fullHeartImageView;
@property (nonatomic, retain) UIImageView *reloadArrowView;
@property (nonatomic, retain) UIImageView *reloadOutlineView;

- (void).cxx_destruct;
- (void)_beatFullHeartOnce;
- (void)_finishedHeartBeat;
- (id)_loadHeartMeasuringImage;
- (void)_resumeAnimations;
- (void)_startBeatingHeart;
- (void)_startMeasuringAnimationAnimated:(BOOL)arg1;
- (void)_suspendAnimations;
- (id)animatingImageView;
- (BOOL)animationsSuspended;
- (id)fullHeartImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 heartSpriteImageName:(id)arg2 spriteFrameCount:(int)arg3 spriteColumnCount:(int)arg4 resourceBundle:(id)arg5;
- (void)layoutSubviews;
- (id)reloadArrowView;
- (id)reloadOutlineView;
- (void)setAnimatingImageView:(id)arg1;
- (void)setAnimationsSuspended:(BOOL)arg1;
- (void)setFullHeartImageView:(id)arg1;
- (void)setHeartRate:(double)arg1;
- (void)setReloadArrowImage:(id)arg1;
- (void)setReloadArrowView:(id)arg1;
- (void)setReloadHeartOutlineImage:(id)arg1;
- (void)setReloadOutlineView:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)unloadAnimationAssets;

@end
