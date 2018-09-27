/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesSearchProvider : NSObject {
    PKExtendedTraitCollection * _extendedTraitCollection;
    PXPlacesSnapshotFactory * _factory;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, retain) PXPlacesSnapshotFactory *factory;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (id)extendedTraitCollection;
- (id)factory;
- (id)init;
- (void)requestMapSnapshotForQuery:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)serialQueue;
- (void)setExtendedTraitCollection:(id)arg1;
- (void)setFactory:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end