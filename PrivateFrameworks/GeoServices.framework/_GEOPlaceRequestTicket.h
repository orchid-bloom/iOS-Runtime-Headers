/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, GEOMapServiceTraits, GEOPDPlaceRequest, GEOPDPlaceResponse, NSString;

@interface _GEOPlaceRequestTicket : NSObject <GEOMapServiceTicket> {
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
    GEOMapRegion *_resultBoundingRegion;
    GEOMapServiceTraits *_traits;
    bool_canceled;
}

@property(getter=isCanceled,readonly) bool canceled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) GEOMapRegion * resultBoundingRegion;
@property(readonly) Class superclass;
@property(readonly) GEOMapServiceTraits * traits;

- (void)_processRequest:(id)arg1 withHandler:(id)arg2 refinedHandler:(id)arg3 networkActivity:(id)arg4;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (bool)isCanceled;
- (id)resultBoundingRegion;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (id)traits;

@end