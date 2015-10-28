#import <Foundation/Foundation.h>
#import "MWKHistoryEntry.h"

NS_ASSUME_NONNULL_BEGIN
@class MWKSavedPageList;

@protocol WMFArticleListDataSource <NSObject>

- (nullable NSString*)displayTitle;

@property (nonatomic, strong, readonly) NSArray* titles;

- (NSUInteger)titleCount;

- (MWKTitle*)titleForIndexPath:(NSIndexPath*)indexPath;

- (NSIndexPath*)indexPathForTitle:(MWKTitle*)title;

- (BOOL)canDeleteItemAtIndexpath:(NSIndexPath*)indexPath;

- (MWKHistoryDiscoveryMethod)discoveryMethod;

@optional

- (void)deleteArticleAtIndexPath:(NSIndexPath*)indexPath;

- (CGFloat)estimatedItemHeight;

@end

@protocol WMFArticleListDynamicDataSource <WMFArticleListDataSource>

- (void)startUpdating;

- (void)stopUpdating;

@end

NS_ASSUME_NONNULL_END