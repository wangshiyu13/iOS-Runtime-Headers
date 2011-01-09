/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SURatingControl, UIImageView, <SUComposeReviewHeaderDelegate>, UILabel, ISReview, SUComposeTextFieldListView;



@interface SUComposeReviewHeaderView : UIView 
{
    UIImageView *_backgroundView;
    <SUComposeReviewHeaderDelegate> *_delegate;
    SURatingControl *_ratingControl;
    UILabel *_ratingLabel;
    ISReview *_review;
    unsigned int _showNicknameField : 1;
    NSInteger _style;
    SUComposeTextFieldListView *_textFieldListView;
}

@property(readonly) UIResponder *initialFirstResponder;
@property(readonly) NSString *nickname;
@property float rating;
@property(readonly) NSString *title;
@property(retain) ISReview *review;
@property <SUComposeReviewHeaderDelegate> *delegate;
@property(readonly) NSInteger composeReviewStyle;


- (float)rating;
- (void)setRating:(float)arg1;
- (id)nickname;
- (NSInteger)numberOfColumnsInTextFieldList:(id)arg1;
- (id)textFieldList:(id)arg1 configurationForFieldAtIndex:(NSUInteger)arg2;
- (void)textFieldListValidityDidChange:(id)arg1;
- (void)textFieldListValuesDidChange:(id)arg1;
- (void)_layoutSubviewsForPadStyle;
- (void)_layoutSubviewsForPhoneStyle;
- (void)_setupViewsForPadStyle;
- (void)_setupViewsForPhoneStyle;
- (id)review;
- (NSInteger)numberOfFieldsInTextFieldList:(id)arg1;
- (id)initialFirstResponder;
- (NSInteger)composeReviewStyle;
- (void)setReview:(id)arg1;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(NSInteger)arg2;
- (id)title;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end