/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPanorama, NSIndexPath;

@interface TileDecodeRequest : NSObject {
    MKPanorama *_panorama;
    NSIndexPath *_tilePath;
    NSUInteger texture;
}

@property(retain) MKPanorama *panorama;
@property(retain) NSIndexPath *tilePath;
@property NSUInteger texture;

- (void)dealloc;
- (id)panorama;
- (void)setPanorama:(id)arg1;
- (void)setTexture:(NSUInteger)arg1;
- (void)setTilePath:(id)arg1;
- (NSUInteger)texture;
- (id)tilePath;

@end