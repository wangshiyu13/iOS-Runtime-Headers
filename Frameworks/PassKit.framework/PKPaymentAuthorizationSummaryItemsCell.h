/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSMutableArray, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationSummaryItemsCell : UITableViewCell {
    NSMutableArray *_constraints;
    NSMutableArray *_labelViews;
    PKPaymentAuthorizationLayout *_layout;
    NSMutableArray *_valueViews;
}

- (id)_labelAttributedStringWithString:(id)arg1;
- (id)_valueAttributedStringWithString:(id)arg1;
- (void)addLabel:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (struct CGSize { float x1; float x2; })systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;

@end
