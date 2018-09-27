/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STMostUsedScreenTimeGroupSpecifierProvider : STGroupSpecifierProvider {
    NSObject<STRootViewModelCoordinator> * _coordinator;
    STUsageReportGraphDataSet * _graphDataSet;
    unsigned long long  _numberOfNotifications;
    STUsageItem * _usageItem;
}

@property (nonatomic, readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property (nonatomic, readonly) STUsageReportGraphDataSet *graphDataSet;
@property (nonatomic, readonly) unsigned long long numberOfNotifications;
@property (nonatomic, readonly) STUsageItem *usageItem;

- (void).cxx_destruct;
- (id)coordinator;
- (id)dailyAverage:(id)arg1;
- (id)graphDataSet;
- (id)initWithUsageItem:(id)arg1 coordinator:(id)arg2;
- (id)notifications:(id)arg1;
- (unsigned long long)numberOfNotifications;
- (id)usageItem;

@end