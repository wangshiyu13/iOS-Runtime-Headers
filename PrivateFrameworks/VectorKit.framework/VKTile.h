/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKTilePool;

@interface VKTile : NSObject {
    struct VKTileKey { 
        unsigned int z; 
        int x; 
        int y; 
        unsigned int pointSize; 
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
        double z0; 
        double z1; 
    struct { 
        double v[4][4]; 
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    struct VKCameraState { 
        struct { 
            double x; 
            double y; 
            double z; 
        } position; 
        struct { 
            double v[4][4]; 
        } orientation; 
        float aspectRatio; 
        float verticalFieldOfView; 
    union { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    double _birthdate;
    } _box;
    } _cameraState;
    struct { double x1[4][4]; } *_inverseMatrix;
    } _key;
    } _matrix;
    VKTilePool *_pool;
    } _shaderMatrix;
    } bounds;
}

@property(readonly) double birthdate;
@property(readonly) const struct { double x1[4][4]; }* inverseMatrix;
@property(readonly) struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; } key;
@property(readonly) const struct { double x1[4][4]; }* matrix;
@property(readonly) struct { double x1; double x2; double x3; double x4; } rect;
@property(readonly) union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; } shaderMatrix;
@property(readonly) double tileWidth;

- (double)birthdate;
- (void)dealloc;
- (id)description;
- (unsigned int)geometryCount;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (const struct { double x1[4][4]; }*)inverseMatrix;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })key;
- (const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)keyPointer;
- (const struct { double x1[4][4]; }*)matrix;
- (struct { double x1; double x2; double x3; double x4; })rect;
- (void)setKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)setPool:(id)arg1;
- (union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })shaderMatrix;
- (double)tileWidth;
- (void)updateViewDependentStateWithContext:(id)arg1;

@end