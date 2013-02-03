/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableArray, UIImage;

@interface MKStarRatingView : UIView {
    UIImage *_emptyStarHighlightedImage;
    UIImage *_emptyStarImage;
    UIImage *_fullStarHighlightedImage;
    UIImage *_fullStarImage;
    UIImage *_halfStarHighlightedImage;
    UIImage *_halfStarImage;
    BOOL _highlighted;
    int _numLevels;
    int _numReviews;
    float _padding;
    float _rating;
    NSMutableArray *_ratingViews;
}

@property(retain) UIImage * emptyStarHighlightedImage;
@property(retain) UIImage * emptyStarImage;
@property(retain) UIImage * fullStarHighlightedImage;
@property(retain) UIImage * fullStarImage;
@property(retain) UIImage * halfStarHighlightedImage;
@property(retain) UIImage * halfStarImage;
@property(getter=isHighlighted) BOOL highlighted;
@property int numberOfRatingLevels;
@property float rating;

- (void)dealloc;
- (id)emptyStarHighlightedImage;
- (id)emptyStarImage;
- (id)fullStarHighlightedImage;
- (id)fullStarImage;
- (id)halfStarHighlightedImage;
- (id)halfStarImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (int)numberOfRatingLevels;
- (float)rating;
- (void)setEmptyStarHighlightedImage:(id)arg1;
- (void)setEmptyStarImage:(id)arg1;
- (void)setFullStarHighlightedImage:(id)arg1;
- (void)setFullStarImage:(id)arg1;
- (void)setHalfStarHighlightedImage:(id)arg1;
- (void)setHalfStarImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setNumberOfRatingLevels:(int)arg1;
- (void)setPadding:(float)arg1;
- (void)setRating:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end